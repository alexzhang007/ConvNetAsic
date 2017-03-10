// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace config {

namespace {

const ::google::protobuf::Descriptor* ConfigParameter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConfigParameter_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ConfigParameter_MemoryType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2eproto() {
  protobuf_AddDesc_config_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config.proto");
  GOOGLE_CHECK(file != NULL);
  ConfigParameter_descriptor_ = file->message_type(0);
  static const int ConfigParameter_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, model_file_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, tech_node_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, bit_width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, memory_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, reset_period_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, sim_period_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, clk_freq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, append_buffer_capacity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, pixel_inference_rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, trace_file_),
  };
  ConfigParameter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConfigParameter_descriptor_,
      ConfigParameter::default_instance_,
      ConfigParameter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigParameter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConfigParameter));
  ConfigParameter_MemoryType_descriptor_ = ConfigParameter_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConfigParameter_descriptor_, &ConfigParameter::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2eproto() {
  delete ConfigParameter::default_instance_;
  delete ConfigParameter_reflection_;
}

void protobuf_AddDesc_config_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014config.proto\022\006config\"\310\002\n\017ConfigParamet"
    "er\022\022\n\nmodel_file\030\001 \002(\t\022\025\n\ttech_node\030\002 \001("
    "\005:\00228\022\021\n\tbit_width\030\003 \002(\005\022<\n\013memory_type\030"
    "\004 \001(\0162\".config.ConfigParameter.MemoryTyp"
    "e:\003ROM\022\024\n\014reset_period\030\005 \002(\005\022\022\n\nsim_peri"
    "od\030\006 \002(\005\022\023\n\010clk_freq\030\007 \001(\001:\0011\022!\n\026append_"
    "buffer_capacity\030\010 \001(\005:\0010\022!\n\024pixel_infere"
    "nce_rate\030\t \001(\005:\003100\022\024\n\ntrace_file\030\n \001(\t:"
    "\000\"\036\n\nMemoryType\022\007\n\003ROM\020\000\022\007\n\003RAM\020\001", 353);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config.proto", &protobuf_RegisterTypes);
  ConfigParameter::default_instance_ = new ConfigParameter();
  ConfigParameter::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2eproto {
  StaticDescriptorInitializer_config_2eproto() {
    protobuf_AddDesc_config_2eproto();
  }
} static_descriptor_initializer_config_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* ConfigParameter_MemoryType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConfigParameter_MemoryType_descriptor_;
}
bool ConfigParameter_MemoryType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const ConfigParameter_MemoryType ConfigParameter::ROM;
const ConfigParameter_MemoryType ConfigParameter::RAM;
const ConfigParameter_MemoryType ConfigParameter::MemoryType_MIN;
const ConfigParameter_MemoryType ConfigParameter::MemoryType_MAX;
const int ConfigParameter::MemoryType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int ConfigParameter::kModelFileFieldNumber;
const int ConfigParameter::kTechNodeFieldNumber;
const int ConfigParameter::kBitWidthFieldNumber;
const int ConfigParameter::kMemoryTypeFieldNumber;
const int ConfigParameter::kResetPeriodFieldNumber;
const int ConfigParameter::kSimPeriodFieldNumber;
const int ConfigParameter::kClkFreqFieldNumber;
const int ConfigParameter::kAppendBufferCapacityFieldNumber;
const int ConfigParameter::kPixelInferenceRateFieldNumber;
const int ConfigParameter::kTraceFileFieldNumber;
#endif  // !_MSC_VER

ConfigParameter::ConfigParameter()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.ConfigParameter)
}

void ConfigParameter::InitAsDefaultInstance() {
}

ConfigParameter::ConfigParameter(const ConfigParameter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:config.ConfigParameter)
}

void ConfigParameter::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  model_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tech_node_ = 28;
  bit_width_ = 0;
  memory_type_ = 0;
  reset_period_ = 0;
  sim_period_ = 0;
  clk_freq_ = 1;
  append_buffer_capacity_ = 0;
  pixel_inference_rate_ = 100;
  trace_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConfigParameter::~ConfigParameter() {
  // @@protoc_insertion_point(destructor:config.ConfigParameter)
  SharedDtor();
}

void ConfigParameter::SharedDtor() {
  if (model_file_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete model_file_;
  }
  if (trace_file_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete trace_file_;
  }
  if (this != default_instance_) {
  }
}

void ConfigParameter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConfigParameter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConfigParameter_descriptor_;
}

const ConfigParameter& ConfigParameter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_config_2eproto();
  return *default_instance_;
}

ConfigParameter* ConfigParameter::default_instance_ = NULL;

ConfigParameter* ConfigParameter::New() const {
  return new ConfigParameter;
}

void ConfigParameter::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ConfigParameter*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(bit_width_, reset_period_);
    ZR_(sim_period_, append_buffer_capacity_);
    if (has_model_file()) {
      if (model_file_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        model_file_->clear();
      }
    }
    tech_node_ = 28;
    clk_freq_ = 1;
  }
  if (_has_bits_[8 / 32] & 768) {
    pixel_inference_rate_ = 100;
    if (has_trace_file()) {
      if (trace_file_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        trace_file_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConfigParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.ConfigParameter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string model_file = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->model_file().data(), this->model_file().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "model_file");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_tech_node;
        break;
      }

      // optional int32 tech_node = 2 [default = 28];
      case 2: {
        if (tag == 16) {
         parse_tech_node:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tech_node_)));
          set_has_tech_node();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_bit_width;
        break;
      }

      // required int32 bit_width = 3;
      case 3: {
        if (tag == 24) {
         parse_bit_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bit_width_)));
          set_has_bit_width();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_memory_type;
        break;
      }

      // optional .config.ConfigParameter.MemoryType memory_type = 4 [default = ROM];
      case 4: {
        if (tag == 32) {
         parse_memory_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::config::ConfigParameter_MemoryType_IsValid(value)) {
            set_memory_type(static_cast< ::config::ConfigParameter_MemoryType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_reset_period;
        break;
      }

      // required int32 reset_period = 5;
      case 5: {
        if (tag == 40) {
         parse_reset_period:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &reset_period_)));
          set_has_reset_period();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_sim_period;
        break;
      }

      // required int32 sim_period = 6;
      case 6: {
        if (tag == 48) {
         parse_sim_period:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sim_period_)));
          set_has_sim_period();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_clk_freq;
        break;
      }

      // optional double clk_freq = 7 [default = 1];
      case 7: {
        if (tag == 57) {
         parse_clk_freq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &clk_freq_)));
          set_has_clk_freq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_append_buffer_capacity;
        break;
      }

      // optional int32 append_buffer_capacity = 8 [default = 0];
      case 8: {
        if (tag == 64) {
         parse_append_buffer_capacity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &append_buffer_capacity_)));
          set_has_append_buffer_capacity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_pixel_inference_rate;
        break;
      }

      // optional int32 pixel_inference_rate = 9 [default = 100];
      case 9: {
        if (tag == 72) {
         parse_pixel_inference_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pixel_inference_rate_)));
          set_has_pixel_inference_rate();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_trace_file;
        break;
      }

      // optional string trace_file = 10 [default = ""];
      case 10: {
        if (tag == 82) {
         parse_trace_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_trace_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->trace_file().data(), this->trace_file().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "trace_file");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:config.ConfigParameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.ConfigParameter)
  return false;
#undef DO_
}

void ConfigParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.ConfigParameter)
  // required string model_file = 1;
  if (has_model_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->model_file().data(), this->model_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "model_file");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->model_file(), output);
  }

  // optional int32 tech_node = 2 [default = 28];
  if (has_tech_node()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->tech_node(), output);
  }

  // required int32 bit_width = 3;
  if (has_bit_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->bit_width(), output);
  }

  // optional .config.ConfigParameter.MemoryType memory_type = 4 [default = ROM];
  if (has_memory_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->memory_type(), output);
  }

  // required int32 reset_period = 5;
  if (has_reset_period()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->reset_period(), output);
  }

  // required int32 sim_period = 6;
  if (has_sim_period()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->sim_period(), output);
  }

  // optional double clk_freq = 7 [default = 1];
  if (has_clk_freq()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->clk_freq(), output);
  }

  // optional int32 append_buffer_capacity = 8 [default = 0];
  if (has_append_buffer_capacity()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->append_buffer_capacity(), output);
  }

  // optional int32 pixel_inference_rate = 9 [default = 100];
  if (has_pixel_inference_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->pixel_inference_rate(), output);
  }

  // optional string trace_file = 10 [default = ""];
  if (has_trace_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->trace_file().data(), this->trace_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trace_file");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->trace_file(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.ConfigParameter)
}

::google::protobuf::uint8* ConfigParameter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:config.ConfigParameter)
  // required string model_file = 1;
  if (has_model_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->model_file().data(), this->model_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "model_file");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->model_file(), target);
  }

  // optional int32 tech_node = 2 [default = 28];
  if (has_tech_node()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->tech_node(), target);
  }

  // required int32 bit_width = 3;
  if (has_bit_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->bit_width(), target);
  }

  // optional .config.ConfigParameter.MemoryType memory_type = 4 [default = ROM];
  if (has_memory_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->memory_type(), target);
  }

  // required int32 reset_period = 5;
  if (has_reset_period()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->reset_period(), target);
  }

  // required int32 sim_period = 6;
  if (has_sim_period()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->sim_period(), target);
  }

  // optional double clk_freq = 7 [default = 1];
  if (has_clk_freq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->clk_freq(), target);
  }

  // optional int32 append_buffer_capacity = 8 [default = 0];
  if (has_append_buffer_capacity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->append_buffer_capacity(), target);
  }

  // optional int32 pixel_inference_rate = 9 [default = 100];
  if (has_pixel_inference_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->pixel_inference_rate(), target);
  }

  // optional string trace_file = 10 [default = ""];
  if (has_trace_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->trace_file().data(), this->trace_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trace_file");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->trace_file(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.ConfigParameter)
  return target;
}

int ConfigParameter::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string model_file = 1;
    if (has_model_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->model_file());
    }

    // optional int32 tech_node = 2 [default = 28];
    if (has_tech_node()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tech_node());
    }

    // required int32 bit_width = 3;
    if (has_bit_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bit_width());
    }

    // optional .config.ConfigParameter.MemoryType memory_type = 4 [default = ROM];
    if (has_memory_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->memory_type());
    }

    // required int32 reset_period = 5;
    if (has_reset_period()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->reset_period());
    }

    // required int32 sim_period = 6;
    if (has_sim_period()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sim_period());
    }

    // optional double clk_freq = 7 [default = 1];
    if (has_clk_freq()) {
      total_size += 1 + 8;
    }

    // optional int32 append_buffer_capacity = 8 [default = 0];
    if (has_append_buffer_capacity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->append_buffer_capacity());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 pixel_inference_rate = 9 [default = 100];
    if (has_pixel_inference_rate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pixel_inference_rate());
    }

    // optional string trace_file = 10 [default = ""];
    if (has_trace_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->trace_file());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConfigParameter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConfigParameter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConfigParameter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConfigParameter::MergeFrom(const ConfigParameter& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_model_file()) {
      set_model_file(from.model_file());
    }
    if (from.has_tech_node()) {
      set_tech_node(from.tech_node());
    }
    if (from.has_bit_width()) {
      set_bit_width(from.bit_width());
    }
    if (from.has_memory_type()) {
      set_memory_type(from.memory_type());
    }
    if (from.has_reset_period()) {
      set_reset_period(from.reset_period());
    }
    if (from.has_sim_period()) {
      set_sim_period(from.sim_period());
    }
    if (from.has_clk_freq()) {
      set_clk_freq(from.clk_freq());
    }
    if (from.has_append_buffer_capacity()) {
      set_append_buffer_capacity(from.append_buffer_capacity());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_pixel_inference_rate()) {
      set_pixel_inference_rate(from.pixel_inference_rate());
    }
    if (from.has_trace_file()) {
      set_trace_file(from.trace_file());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConfigParameter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConfigParameter::CopyFrom(const ConfigParameter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConfigParameter::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000035) != 0x00000035) return false;

  return true;
}

void ConfigParameter::Swap(ConfigParameter* other) {
  if (other != this) {
    std::swap(model_file_, other->model_file_);
    std::swap(tech_node_, other->tech_node_);
    std::swap(bit_width_, other->bit_width_);
    std::swap(memory_type_, other->memory_type_);
    std::swap(reset_period_, other->reset_period_);
    std::swap(sim_period_, other->sim_period_);
    std::swap(clk_freq_, other->clk_freq_);
    std::swap(append_buffer_capacity_, other->append_buffer_capacity_);
    std::swap(pixel_inference_rate_, other->pixel_inference_rate_);
    std::swap(trace_file_, other->trace_file_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConfigParameter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConfigParameter_descriptor_;
  metadata.reflection = ConfigParameter_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace config

// @@protoc_insertion_point(global_scope)
