// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SchemaSerializer.proto

#ifndef PROTOBUF_SchemaSerializer_2eproto__INCLUDED
#define PROTOBUF_SchemaSerializer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SchemaSerializer_2eproto();
void protobuf_AssignDesc_SchemaSerializer_2eproto();
void protobuf_ShutdownFile_SchemaSerializer_2eproto();

class SchemaSerializer;
class SchemaSerializer_Schema;
class SchemaSerializer_Key;

enum SchemaSerializer_Schema_ValueType {
  SchemaSerializer_Schema_ValueType_INT = 0,
  SchemaSerializer_Schema_ValueType_INT8 = 1,
  SchemaSerializer_Schema_ValueType_INT16 = 2,
  SchemaSerializer_Schema_ValueType_INT32 = 3,
  SchemaSerializer_Schema_ValueType_INT64 = 4,
  SchemaSerializer_Schema_ValueType_DOUBLE = 5,
  SchemaSerializer_Schema_ValueType_FLOAT = 6,
  SchemaSerializer_Schema_ValueType_VARCHAR = 7
};
bool SchemaSerializer_Schema_ValueType_IsValid(int value);
const SchemaSerializer_Schema_ValueType SchemaSerializer_Schema_ValueType_ValueType_MIN = SchemaSerializer_Schema_ValueType_INT;
const SchemaSerializer_Schema_ValueType SchemaSerializer_Schema_ValueType_ValueType_MAX = SchemaSerializer_Schema_ValueType_VARCHAR;
const int SchemaSerializer_Schema_ValueType_ValueType_ARRAYSIZE = SchemaSerializer_Schema_ValueType_ValueType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SchemaSerializer_Schema_ValueType_descriptor();
inline const ::std::string& SchemaSerializer_Schema_ValueType_Name(SchemaSerializer_Schema_ValueType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SchemaSerializer_Schema_ValueType_descriptor(), value);
}
inline bool SchemaSerializer_Schema_ValueType_Parse(
    const ::std::string& name, SchemaSerializer_Schema_ValueType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SchemaSerializer_Schema_ValueType>(
    SchemaSerializer_Schema_ValueType_descriptor(), name, value);
}
// ===================================================================

class SchemaSerializer_Schema : public ::google::protobuf::Message {
 public:
  SchemaSerializer_Schema();
  virtual ~SchemaSerializer_Schema();

  SchemaSerializer_Schema(const SchemaSerializer_Schema& from);

  inline SchemaSerializer_Schema& operator=(const SchemaSerializer_Schema& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SchemaSerializer_Schema& default_instance();

  void Swap(SchemaSerializer_Schema* other);

  // implements Message ----------------------------------------------

  SchemaSerializer_Schema* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SchemaSerializer_Schema& from);
  void MergeFrom(const SchemaSerializer_Schema& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SchemaSerializer_Schema_ValueType ValueType;
  static const ValueType INT = SchemaSerializer_Schema_ValueType_INT;
  static const ValueType INT8 = SchemaSerializer_Schema_ValueType_INT8;
  static const ValueType INT16 = SchemaSerializer_Schema_ValueType_INT16;
  static const ValueType INT32 = SchemaSerializer_Schema_ValueType_INT32;
  static const ValueType INT64 = SchemaSerializer_Schema_ValueType_INT64;
  static const ValueType DOUBLE = SchemaSerializer_Schema_ValueType_DOUBLE;
  static const ValueType FLOAT = SchemaSerializer_Schema_ValueType_FLOAT;
  static const ValueType VARCHAR = SchemaSerializer_Schema_ValueType_VARCHAR;
  static inline bool ValueType_IsValid(int value) {
    return SchemaSerializer_Schema_ValueType_IsValid(value);
  }
  static const ValueType ValueType_MIN =
    SchemaSerializer_Schema_ValueType_ValueType_MIN;
  static const ValueType ValueType_MAX =
    SchemaSerializer_Schema_ValueType_ValueType_MAX;
  static const int ValueType_ARRAYSIZE =
    SchemaSerializer_Schema_ValueType_ValueType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ValueType_descriptor() {
    return SchemaSerializer_Schema_ValueType_descriptor();
  }
  static inline const ::std::string& ValueType_Name(ValueType value) {
    return SchemaSerializer_Schema_ValueType_Name(value);
  }
  static inline bool ValueType_Parse(const ::std::string& name,
      ValueType* value) {
    return SchemaSerializer_Schema_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string field_name = 1;
  inline bool has_field_name() const;
  inline void clear_field_name();
  static const int kFieldNameFieldNumber = 1;
  inline const ::std::string& field_name() const;
  inline void set_field_name(const ::std::string& value);
  inline void set_field_name(const char* value);
  inline void set_field_name(const char* value, size_t size);
  inline ::std::string* mutable_field_name();
  inline ::std::string* release_field_name();
  inline void set_allocated_field_name(::std::string* field_name);

  // required .SchemaSerializer.Schema.ValueType field_type = 2;
  inline bool has_field_type() const;
  inline void clear_field_type();
  static const int kFieldTypeFieldNumber = 2;
  inline ::SchemaSerializer_Schema_ValueType field_type() const;
  inline void set_field_type(::SchemaSerializer_Schema_ValueType value);

  // optional int32 field_size = 3;
  inline bool has_field_size() const;
  inline void clear_field_size();
  static const int kFieldSizeFieldNumber = 3;
  inline ::google::protobuf::int32 field_size() const;
  inline void set_field_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SchemaSerializer.Schema)
 private:
  inline void set_has_field_name();
  inline void clear_has_field_name();
  inline void set_has_field_type();
  inline void clear_has_field_type();
  inline void set_has_field_size();
  inline void clear_has_field_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* field_name_;
  int field_type_;
  ::google::protobuf::int32 field_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_SchemaSerializer_2eproto();
  friend void protobuf_AssignDesc_SchemaSerializer_2eproto();
  friend void protobuf_ShutdownFile_SchemaSerializer_2eproto();

  void InitAsDefaultInstance();
  static SchemaSerializer_Schema* default_instance_;
};
// -------------------------------------------------------------------

class SchemaSerializer_Key : public ::google::protobuf::Message {
 public:
  SchemaSerializer_Key();
  virtual ~SchemaSerializer_Key();

  SchemaSerializer_Key(const SchemaSerializer_Key& from);

  inline SchemaSerializer_Key& operator=(const SchemaSerializer_Key& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SchemaSerializer_Key& default_instance();

  void Swap(SchemaSerializer_Key* other);

  // implements Message ----------------------------------------------

  SchemaSerializer_Key* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SchemaSerializer_Key& from);
  void MergeFrom(const SchemaSerializer_Key& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 fields = 1;
  inline int fields_size() const;
  inline void clear_fields();
  static const int kFieldsFieldNumber = 1;
  inline ::google::protobuf::int32 fields(int index) const;
  inline void set_fields(int index, ::google::protobuf::int32 value);
  inline void add_fields(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      fields() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_fields();

  // @@protoc_insertion_point(class_scope:SchemaSerializer.Key)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > fields_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_SchemaSerializer_2eproto();
  friend void protobuf_AssignDesc_SchemaSerializer_2eproto();
  friend void protobuf_ShutdownFile_SchemaSerializer_2eproto();

  void InitAsDefaultInstance();
  static SchemaSerializer_Key* default_instance_;
};
// -------------------------------------------------------------------

class SchemaSerializer : public ::google::protobuf::Message {
 public:
  SchemaSerializer();
  virtual ~SchemaSerializer();

  SchemaSerializer(const SchemaSerializer& from);

  inline SchemaSerializer& operator=(const SchemaSerializer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SchemaSerializer& default_instance();

  void Swap(SchemaSerializer* other);

  // implements Message ----------------------------------------------

  SchemaSerializer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SchemaSerializer& from);
  void MergeFrom(const SchemaSerializer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SchemaSerializer_Schema Schema;
  typedef SchemaSerializer_Key Key;

  // accessors -------------------------------------------------------

  // repeated .SchemaSerializer.Schema schemas = 1;
  inline int schemas_size() const;
  inline void clear_schemas();
  static const int kSchemasFieldNumber = 1;
  inline const ::SchemaSerializer_Schema& schemas(int index) const;
  inline ::SchemaSerializer_Schema* mutable_schemas(int index);
  inline ::SchemaSerializer_Schema* add_schemas();
  inline const ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Schema >&
      schemas() const;
  inline ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Schema >*
      mutable_schemas();

  // optional .SchemaSerializer.Key primary_key = 2;
  inline bool has_primary_key() const;
  inline void clear_primary_key();
  static const int kPrimaryKeyFieldNumber = 2;
  inline const ::SchemaSerializer_Key& primary_key() const;
  inline ::SchemaSerializer_Key* mutable_primary_key();
  inline ::SchemaSerializer_Key* release_primary_key();
  inline void set_allocated_primary_key(::SchemaSerializer_Key* primary_key);

  // repeated .SchemaSerializer.Key secondary_keys = 3;
  inline int secondary_keys_size() const;
  inline void clear_secondary_keys();
  static const int kSecondaryKeysFieldNumber = 3;
  inline const ::SchemaSerializer_Key& secondary_keys(int index) const;
  inline ::SchemaSerializer_Key* mutable_secondary_keys(int index);
  inline ::SchemaSerializer_Key* add_secondary_keys();
  inline const ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Key >&
      secondary_keys() const;
  inline ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Key >*
      mutable_secondary_keys();

  // @@protoc_insertion_point(class_scope:SchemaSerializer)
 private:
  inline void set_has_primary_key();
  inline void clear_has_primary_key();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Schema > schemas_;
  ::SchemaSerializer_Key* primary_key_;
  ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Key > secondary_keys_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_SchemaSerializer_2eproto();
  friend void protobuf_AssignDesc_SchemaSerializer_2eproto();
  friend void protobuf_ShutdownFile_SchemaSerializer_2eproto();

  void InitAsDefaultInstance();
  static SchemaSerializer* default_instance_;
};
// ===================================================================


// ===================================================================

// SchemaSerializer_Schema

// required string field_name = 1;
inline bool SchemaSerializer_Schema::has_field_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SchemaSerializer_Schema::set_has_field_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SchemaSerializer_Schema::clear_has_field_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SchemaSerializer_Schema::clear_field_name() {
  if (field_name_ != &::google::protobuf::internal::kEmptyString) {
    field_name_->clear();
  }
  clear_has_field_name();
}
inline const ::std::string& SchemaSerializer_Schema::field_name() const {
  return *field_name_;
}
inline void SchemaSerializer_Schema::set_field_name(const ::std::string& value) {
  set_has_field_name();
  if (field_name_ == &::google::protobuf::internal::kEmptyString) {
    field_name_ = new ::std::string;
  }
  field_name_->assign(value);
}
inline void SchemaSerializer_Schema::set_field_name(const char* value) {
  set_has_field_name();
  if (field_name_ == &::google::protobuf::internal::kEmptyString) {
    field_name_ = new ::std::string;
  }
  field_name_->assign(value);
}
inline void SchemaSerializer_Schema::set_field_name(const char* value, size_t size) {
  set_has_field_name();
  if (field_name_ == &::google::protobuf::internal::kEmptyString) {
    field_name_ = new ::std::string;
  }
  field_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SchemaSerializer_Schema::mutable_field_name() {
  set_has_field_name();
  if (field_name_ == &::google::protobuf::internal::kEmptyString) {
    field_name_ = new ::std::string;
  }
  return field_name_;
}
inline ::std::string* SchemaSerializer_Schema::release_field_name() {
  clear_has_field_name();
  if (field_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = field_name_;
    field_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SchemaSerializer_Schema::set_allocated_field_name(::std::string* field_name) {
  if (field_name_ != &::google::protobuf::internal::kEmptyString) {
    delete field_name_;
  }
  if (field_name) {
    set_has_field_name();
    field_name_ = field_name;
  } else {
    clear_has_field_name();
    field_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .SchemaSerializer.Schema.ValueType field_type = 2;
inline bool SchemaSerializer_Schema::has_field_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SchemaSerializer_Schema::set_has_field_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SchemaSerializer_Schema::clear_has_field_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SchemaSerializer_Schema::clear_field_type() {
  field_type_ = 0;
  clear_has_field_type();
}
inline ::SchemaSerializer_Schema_ValueType SchemaSerializer_Schema::field_type() const {
  return static_cast< ::SchemaSerializer_Schema_ValueType >(field_type_);
}
inline void SchemaSerializer_Schema::set_field_type(::SchemaSerializer_Schema_ValueType value) {
  assert(::SchemaSerializer_Schema_ValueType_IsValid(value));
  set_has_field_type();
  field_type_ = value;
}

// optional int32 field_size = 3;
inline bool SchemaSerializer_Schema::has_field_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SchemaSerializer_Schema::set_has_field_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SchemaSerializer_Schema::clear_has_field_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SchemaSerializer_Schema::clear_field_size() {
  field_size_ = 0;
  clear_has_field_size();
}
inline ::google::protobuf::int32 SchemaSerializer_Schema::field_size() const {
  return field_size_;
}
inline void SchemaSerializer_Schema::set_field_size(::google::protobuf::int32 value) {
  set_has_field_size();
  field_size_ = value;
}

// -------------------------------------------------------------------

// SchemaSerializer_Key

// repeated int32 fields = 1;
inline int SchemaSerializer_Key::fields_size() const {
  return fields_.size();
}
inline void SchemaSerializer_Key::clear_fields() {
  fields_.Clear();
}
inline ::google::protobuf::int32 SchemaSerializer_Key::fields(int index) const {
  return fields_.Get(index);
}
inline void SchemaSerializer_Key::set_fields(int index, ::google::protobuf::int32 value) {
  fields_.Set(index, value);
}
inline void SchemaSerializer_Key::add_fields(::google::protobuf::int32 value) {
  fields_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SchemaSerializer_Key::fields() const {
  return fields_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SchemaSerializer_Key::mutable_fields() {
  return &fields_;
}

// -------------------------------------------------------------------

// SchemaSerializer

// repeated .SchemaSerializer.Schema schemas = 1;
inline int SchemaSerializer::schemas_size() const {
  return schemas_.size();
}
inline void SchemaSerializer::clear_schemas() {
  schemas_.Clear();
}
inline const ::SchemaSerializer_Schema& SchemaSerializer::schemas(int index) const {
  return schemas_.Get(index);
}
inline ::SchemaSerializer_Schema* SchemaSerializer::mutable_schemas(int index) {
  return schemas_.Mutable(index);
}
inline ::SchemaSerializer_Schema* SchemaSerializer::add_schemas() {
  return schemas_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Schema >&
SchemaSerializer::schemas() const {
  return schemas_;
}
inline ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Schema >*
SchemaSerializer::mutable_schemas() {
  return &schemas_;
}

// optional .SchemaSerializer.Key primary_key = 2;
inline bool SchemaSerializer::has_primary_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SchemaSerializer::set_has_primary_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SchemaSerializer::clear_has_primary_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SchemaSerializer::clear_primary_key() {
  if (primary_key_ != NULL) primary_key_->::SchemaSerializer_Key::Clear();
  clear_has_primary_key();
}
inline const ::SchemaSerializer_Key& SchemaSerializer::primary_key() const {
  return primary_key_ != NULL ? *primary_key_ : *default_instance_->primary_key_;
}
inline ::SchemaSerializer_Key* SchemaSerializer::mutable_primary_key() {
  set_has_primary_key();
  if (primary_key_ == NULL) primary_key_ = new ::SchemaSerializer_Key;
  return primary_key_;
}
inline ::SchemaSerializer_Key* SchemaSerializer::release_primary_key() {
  clear_has_primary_key();
  ::SchemaSerializer_Key* temp = primary_key_;
  primary_key_ = NULL;
  return temp;
}
inline void SchemaSerializer::set_allocated_primary_key(::SchemaSerializer_Key* primary_key) {
  delete primary_key_;
  primary_key_ = primary_key;
  if (primary_key) {
    set_has_primary_key();
  } else {
    clear_has_primary_key();
  }
}

// repeated .SchemaSerializer.Key secondary_keys = 3;
inline int SchemaSerializer::secondary_keys_size() const {
  return secondary_keys_.size();
}
inline void SchemaSerializer::clear_secondary_keys() {
  secondary_keys_.Clear();
}
inline const ::SchemaSerializer_Key& SchemaSerializer::secondary_keys(int index) const {
  return secondary_keys_.Get(index);
}
inline ::SchemaSerializer_Key* SchemaSerializer::mutable_secondary_keys(int index) {
  return secondary_keys_.Mutable(index);
}
inline ::SchemaSerializer_Key* SchemaSerializer::add_secondary_keys() {
  return secondary_keys_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Key >&
SchemaSerializer::secondary_keys() const {
  return secondary_keys_;
}
inline ::google::protobuf::RepeatedPtrField< ::SchemaSerializer_Key >*
SchemaSerializer::mutable_secondary_keys() {
  return &secondary_keys_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SchemaSerializer_Schema_ValueType>() {
  return ::SchemaSerializer_Schema_ValueType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SchemaSerializer_2eproto__INCLUDED