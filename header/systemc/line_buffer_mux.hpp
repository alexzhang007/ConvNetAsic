/*
 * Filename: line_buffer_mux.hpp
 * ------------------------------
 * This file exports the LineBufferMux stage. In this stage, Pin feature map
 * will be selected from all the Nin line buffers. The data will be routed to
 * the following multiplier array. Here we assume it occupies for a complete
 * pipeline stage.
 */

#ifndef __LINE_BUFFER_MUX_HPP__
#define __LINE_BUFFER_MUX_HPP__

#include "header/systemc/data_type.hpp"
#include "header/systemc/models/mux_model.hpp"
#include <systemc.h>

class LineBufferMux : public sc_module {
  // ports
  public:
    sc_in<bool> clock;
    sc_in<bool> reset;

    // mux enable
    sc_in<bool> mux_en;
    // input data from the proceding Line Buffer (Nin*Kh*Kw)
    sc_in<Payload>* line_buffer_data;
    // selector of the mux
    sc_in<int> mux_select;
    // output data from the input line buffer (Pin*Kh*Kw)
    sc_out<Payload>* mux_data_out;

    SC_HAS_PROCESS(LineBufferMux);

  public:
    // constructor
    explicit LineBufferMux(sc_module_name module_name, int Kh, int Kw, int Nin,
        int Pin, int bit_width=8, int tech_node=28, double clk_freq=1.);
    // destructor
    ~LineBufferMux();

    // main process of the line buffer mux
    void LineBufferMuxProc();

    // area model of the line buffer mux
    double Area() const;
    // power model of the line buffer mux
    double StaticPower() const;
    double DynamicPower() const;
    double TotalPower() const;

  private:
    int Kh_, Kw_;   // spatial dimension of the kernel
    int Nin_;       // no. input feature map
    int Pin_;       // input parallelism

    // mux model
    MuxModel* mux_model_;
    double dynamic_energy_;
};

#endif
