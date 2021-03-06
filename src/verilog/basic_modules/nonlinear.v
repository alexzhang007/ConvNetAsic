// -----------------------------------------------------------------------------
// This file exports the module `nonlinear`, which is stage for doing the
// trival arithmetic operations, including accumulation, normalization, bias,
// and nonlinear operation.
// -----------------------------------------------------------------------------

module nonlinear #(
  parameter                       Nout = 3,       // output feature map no.
  parameter                       Pout = 1,       // output feature map parallelism
  parameter                       BIT_WIDTH = 8,  // bit width of the data path
  // advanced setting: pipeline stage (retiming for a better performance)
  // Note: should be at least 1 pipeline stage
  parameter                       PIPELINE_STAGE = 1,
  // bias & nonlinear module enable
  parameter                       BIAS_EN = 1,
  parameter                       NONLIN_EN = 1,

  // unmodified inferred parameters
  parameter TILED_OUT_PARALLEL    = ceil_div(Nout, Pout)
) (
  input wire                      clk,            // system clock
  input wire                      rst,            // system reset
  // data path control signal
  input wire                      add_array_valid,// add array valid
  input wire                      accumulate_en,  // accumulate enable
  input wire                      bias_en,        // bias enable
  input wire                      nonlin_en,      // nonlinear enable
  // bias memory access control signal
  input wire                      bias_mem_en,    // memory enable (active low)
  input wire  [clog2(TILED_OUT_PARALLEL)-1:0]
                                  bias_mem_addr,  // memory address

  // input data path
  input wire  [Pout*BIT_WIDTH-1:0]add_array_data, // merge results from the adder array
  input wire  [Pout*BIT_WIDTH-1:0]out_regfile_data, // output register file read data

  // output data path
  output reg                      nonlinear_valid,// nonlinear valid
  output reg  [Pout*BIT_WIDTH-1:0]nonlinear_data  // nonlinear data
);

`include "functions.v"

// generation iterator
genvar i;

// ------------------------------------------
// Internal wires for each computation stage
// ------------------------------------------
reg [Pout*BIT_WIDTH-1:0] accumulate_result;
reg [Pout*BIT_WIDTH-1:0] bias_result;
reg [Pout*BIT_WIDTH-1:0] nonlin_result;

// pipeline stages of the nonlinear stage
reg [PIPELINE_STAGE-1:0] nonlinear_valid_pipeline;
reg [Pout*BIT_WIDTH-1:0] nonlinear_data_pipeline [PIPELINE_STAGE-1:0];

// bias data
wire [Pout*BIT_WIDTH-1:0] bias_data;

generate
if (BIAS_EN == 1) begin
// -------------------------------------------
// TODO: bias memory (generated by C program)
// Memory width: Pout*BIT_WIDTH
// Memory depth: at least ceil(Nout/Pout)
// -------------------------------------------
`ifdef BEHAV_SIM
rom_full_zeros #(
  .ROM_DEPTH          (TILED_OUT_PARALLEL),
  .NUM_DATA           (Pout),
  .BIT_WIDTH          (BIT_WIDTH)
) bias_mem (
  .clk                (clk),            // system clock
  .cen                (bias_mem_en),    // chip enable (active low)
  .A                  (bias_mem_addr),  // rom read address
  .Q                  (bias_data)       // rom read data
);
`else
rom_via_256x8 bias_mem (
  .CENY               (/* floating */),
  .AY                 (/* floating */),
  .Q                  (bias_data),
  .CLK                (clk),
  .CEN                (bias_mem_en),    // active low
  .A                  ({{(8-clog2(TILED_OUT_PARALLEL)){1'b0}},
                      bias_mem_addr}),  // 10-bit address (zero extension)
  .EMA                (3'b011),         // default value = 3
  .TEN                (1'b1),           // test mode enable (active low)
  .BEN                (1'b1),           // bypass enable (active low)
  .TCEN               (1'b1),           // test mode chip enable
  .TA                 (8'b0),           // test address
  .TQ                 (8'b0),           // test input
  .PGEN               (1'b0),           // power down enable (active high)
  .KEN                (1'b1)            // keeper enable (active low)
);
`endif
end
endgenerate

// --------------------------
// Accumulation stage
// --------------------------
generate
for (i = 0; i < Pout; i = i + 1) begin: accumulate_results_i
  always @ (*) begin
    if (accumulate_en) begin
      accumulate_result[i*BIT_WIDTH+:BIT_WIDTH] = add_array_data[i*BIT_WIDTH+:BIT_WIDTH] +
        out_regfile_data[i*BIT_WIDTH+:BIT_WIDTH];
    end else begin
      accumulate_result[i*BIT_WIDTH+:BIT_WIDTH] = add_array_data[i*BIT_WIDTH+:BIT_WIDTH];
    end
  end
end
endgenerate

// --------------------------------------------------------------
// Bias stage: add the results with the bias value stored in ROM
// --------------------------------------------------------------
generate
if (BIAS_EN == 1) begin
  for (i = 0; i < Pout; i = i + 1) begin: bias_result_i
    always @ (*) begin
      if (bias_en) begin
        bias_result[i*BIT_WIDTH+:BIT_WIDTH] = accumulate_result[i*BIT_WIDTH+:BIT_WIDTH] +
          bias_data[i*BIT_WIDTH+:BIT_WIDTH];
      end else begin
        bias_result[i*BIT_WIDTH+:BIT_WIDTH] = accumulate_result[i*BIT_WIDTH+:BIT_WIDTH];
      end
    end
  end
end else begin
  always @ (*) begin
    bias_result = accumulate_result;
  end
end
endgenerate

// --------------------------------------------------
// Nonlinear results (ReLU operation)
// --------------------------------------------------
generate
if (NONLIN_EN == 1) begin
  for (i = 0; i < Pout; i = i + 1) begin: nonlin_result_i
    always @ (*) begin
      if (nonlin_en) begin
        nonlin_result[i*BIT_WIDTH+:BIT_WIDTH] = bias_result[i*BIT_WIDTH+BIT_WIDTH-1] ?
          {BIT_WIDTH{1'b0}} : bias_result[i*BIT_WIDTH+:BIT_WIDTH];
      end else begin
        nonlin_result[i*BIT_WIDTH+:BIT_WIDTH] = bias_result[i*BIT_WIDTH+:BIT_WIDTH];
      end
    end
  end
end else begin
  always @ (*) begin
    nonlin_result = bias_result;
  end
end
endgenerate

// -------------------------------------------------
// Pipeline stage
// -------------------------------------------------
// nonlinear valid
generate
for (i = 0; i < PIPELINE_STAGE; i = i + 1) begin: nonlinear_valid_i
  if (i == 0) begin
    // first stage: direct connect the primary input
    always @ (posedge clk or posedge rst) begin
      if (rst) begin
        nonlinear_valid_pipeline[i]   <= 1'b0;
      end else begin
        nonlinear_valid_pipeline[i]   <= add_array_valid;
      end
    end
  end else begin
    // remaining stages: connect to the proceeding one
    always @ (posedge clk or posedge rst) begin
      if (rst) begin
        nonlinear_valid_pipeline[i]   <= 1'b0;
      end else begin
        nonlinear_valid_pipeline[i]   <= nonlinear_valid_pipeline[i-1];
      end
    end
  end
end
endgenerate
// nonlinear data
generate
for (i = 0; i < PIPELINE_STAGE; i = i + 1) begin: nonlinear_data_i
  if (i == 0) begin
    // first stage: connect to the nonliear results
    always @ (posedge clk) begin
      if (add_array_valid) begin
        nonlinear_data_pipeline[i]    <= nonlin_result;
      end
    end
  end else begin
    // remaining stages: connect to the proceeding stage
    always @ (posedge clk) begin
      if (nonlinear_valid_pipeline[i-1]) begin
        nonlinear_data_pipeline[i]    <= nonlinear_data_pipeline[i-1];
      end
    end
  end
end
endgenerate

// -----------------------------------
// Assign the primary outputs
// -----------------------------------
always @ (*) begin
  nonlinear_valid = nonlinear_valid_pipeline[PIPELINE_STAGE-1];
  nonlinear_data = nonlinear_data_pipeline[PIPELINE_STAGE-1];
end

endmodule
