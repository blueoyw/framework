// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies_enum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {
namespace lazy_imports {

enum LazyEnum : int {
  LAZY_ENUM_0 = 0,
  LAZY_ENUM_1 = 1
};
bool LazyEnum_IsValid(int value);
constexpr LazyEnum LazyEnum_MIN = LAZY_ENUM_0;
constexpr LazyEnum LazyEnum_MAX = LAZY_ENUM_1;
constexpr int LazyEnum_ARRAYSIZE = LazyEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LazyEnum_descriptor();
template<typename T>
inline const std::string& LazyEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LazyEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LazyEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LazyEnum_descriptor(), enum_t_value);
}
inline bool LazyEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LazyEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LazyEnum>(
    LazyEnum_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace lazy_imports
}  // namespace protobuf_unittest

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protobuf_unittest::lazy_imports::LazyEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest::lazy_imports::LazyEnum>() {
  return ::protobuf_unittest::lazy_imports::LazyEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto
