// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: linkproto.proto

#ifndef PROTOBUF_linkproto_2eproto__INCLUDED
#define PROTOBUF_linkproto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "linksystem.pb.h"
// @@protoc_insertion_point(includes)
class LinkCamReq;
class LinkCamReqDefaultTypeInternal;
extern LinkCamReqDefaultTypeInternal _LinkCamReq_default_instance_;
class LinkCamResp;
class LinkCamRespDefaultTypeInternal;
extern LinkCamRespDefaultTypeInternal _LinkCamResp_default_instance_;
class LinkKeepaliveReq;
class LinkKeepaliveReqDefaultTypeInternal;
extern LinkKeepaliveReqDefaultTypeInternal _LinkKeepaliveReq_default_instance_;
class LinkKeepaliveResp;
class LinkKeepaliveRespDefaultTypeInternal;
extern LinkKeepaliveRespDefaultTypeInternal _LinkKeepaliveResp_default_instance_;
class LinkListCamReq;
class LinkListCamReqDefaultTypeInternal;
extern LinkListCamReqDefaultTypeInternal _LinkListCamReq_default_instance_;
class LinkListCamResp;
class LinkListCamRespDefaultTypeInternal;
extern LinkListCamRespDefaultTypeInternal _LinkListCamResp_default_instance_;
class LinkLoginReq;
class LinkLoginReqDefaultTypeInternal;
extern LinkLoginReqDefaultTypeInternal _LinkLoginReq_default_instance_;
class LinkLoginResp;
class LinkLoginRespDefaultTypeInternal;
extern LinkLoginRespDefaultTypeInternal _LinkLoginResp_default_instance_;
namespace Link {
class LinkCmd;
class LinkCmdDefaultTypeInternal;
extern LinkCmdDefaultTypeInternal _LinkCmd_default_instance_;
}  // namespace Link

namespace Link {

namespace protobuf_linkproto_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_linkproto_2eproto

enum LinkCmdType {
  LINK_CMD_ZERO = 0,
  LINK_CMD_LOGIN_REQ = 1,
  LINK_CMD_LOGIN_RESP = 2,
  LINK_CMD_KEEPALIVE_REQ = 3,
  LINK_CMD_KEEPALIVE_RESP = 4,
  LINK_CMD_CAM_LIST_REQ = 5,
  LINK_CMD_CAM_LIST_RESP = 6,
  LINK_CMD_CAM_REQ = 7,
  LINK_CMD_CAM_RESP = 8,
  LinkCmdType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LinkCmdType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LinkCmdType_IsValid(int value);
const LinkCmdType LinkCmdType_MIN = LINK_CMD_ZERO;
const LinkCmdType LinkCmdType_MAX = LINK_CMD_CAM_RESP;
const int LinkCmdType_ARRAYSIZE = LinkCmdType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LinkCmdType_descriptor();
inline const ::std::string& LinkCmdType_Name(LinkCmdType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LinkCmdType_descriptor(), value);
}
inline bool LinkCmdType_Parse(
    const ::std::string& name, LinkCmdType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LinkCmdType>(
    LinkCmdType_descriptor(), name, value);
}
// ===================================================================

class LinkCmd : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Link.LinkCmd) */ {
 public:
  LinkCmd();
  virtual ~LinkCmd();

  LinkCmd(const LinkCmd& from);

  inline LinkCmd& operator=(const LinkCmd& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LinkCmd& default_instance();

  enum CmdCase {
    kLoginReq = 2,
    kLoginResp = 3,
    kKeepaliveReq = 4,
    kKeepaliveResp = 5,
    kCamListReq = 6,
    kCamListResp = 7,
    kCamReq = 8,
    kCamResp = 9,
    CMD_NOT_SET = 0,
  };

  static inline const LinkCmd* internal_default_instance() {
    return reinterpret_cast<const LinkCmd*>(
               &_LinkCmd_default_instance_);
  }

  void Swap(LinkCmd* other);

  // implements Message ----------------------------------------------

  inline LinkCmd* New() const PROTOBUF_FINAL { return New(NULL); }

  LinkCmd* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LinkCmd& from);
  void MergeFrom(const LinkCmd& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LinkCmd* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Link.LinkCmdType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::Link::LinkCmdType type() const;
  void set_type(::Link::LinkCmdType value);

  // .LinkLoginReq loginReq = 2;
  bool has_loginreq() const;
  void clear_loginreq();
  static const int kLoginReqFieldNumber = 2;
  const ::LinkLoginReq& loginreq() const;
  ::LinkLoginReq* mutable_loginreq();
  ::LinkLoginReq* release_loginreq();
  void set_allocated_loginreq(::LinkLoginReq* loginreq);

  // .LinkLoginResp loginResp = 3;
  bool has_loginresp() const;
  void clear_loginresp();
  static const int kLoginRespFieldNumber = 3;
  const ::LinkLoginResp& loginresp() const;
  ::LinkLoginResp* mutable_loginresp();
  ::LinkLoginResp* release_loginresp();
  void set_allocated_loginresp(::LinkLoginResp* loginresp);

  // .LinkKeepaliveReq keepaliveReq = 4;
  bool has_keepalivereq() const;
  void clear_keepalivereq();
  static const int kKeepaliveReqFieldNumber = 4;
  const ::LinkKeepaliveReq& keepalivereq() const;
  ::LinkKeepaliveReq* mutable_keepalivereq();
  ::LinkKeepaliveReq* release_keepalivereq();
  void set_allocated_keepalivereq(::LinkKeepaliveReq* keepalivereq);

  // .LinkKeepaliveResp keepaliveResp = 5;
  bool has_keepaliveresp() const;
  void clear_keepaliveresp();
  static const int kKeepaliveRespFieldNumber = 5;
  const ::LinkKeepaliveResp& keepaliveresp() const;
  ::LinkKeepaliveResp* mutable_keepaliveresp();
  ::LinkKeepaliveResp* release_keepaliveresp();
  void set_allocated_keepaliveresp(::LinkKeepaliveResp* keepaliveresp);

  // .LinkListCamReq camListReq = 6;
  bool has_camlistreq() const;
  void clear_camlistreq();
  static const int kCamListReqFieldNumber = 6;
  const ::LinkListCamReq& camlistreq() const;
  ::LinkListCamReq* mutable_camlistreq();
  ::LinkListCamReq* release_camlistreq();
  void set_allocated_camlistreq(::LinkListCamReq* camlistreq);

  // .LinkListCamResp camListResp = 7;
  bool has_camlistresp() const;
  void clear_camlistresp();
  static const int kCamListRespFieldNumber = 7;
  const ::LinkListCamResp& camlistresp() const;
  ::LinkListCamResp* mutable_camlistresp();
  ::LinkListCamResp* release_camlistresp();
  void set_allocated_camlistresp(::LinkListCamResp* camlistresp);

  // .LinkListCamReq camReq = 8;
  bool has_camreq() const;
  void clear_camreq();
  static const int kCamReqFieldNumber = 8;
  const ::LinkListCamReq& camreq() const;
  ::LinkListCamReq* mutable_camreq();
  ::LinkListCamReq* release_camreq();
  void set_allocated_camreq(::LinkListCamReq* camreq);

  // .LinkListCamResp camResp = 9;
  bool has_camresp() const;
  void clear_camresp();
  static const int kCamRespFieldNumber = 9;
  const ::LinkListCamResp& camresp() const;
  ::LinkListCamResp* mutable_camresp();
  ::LinkListCamResp* release_camresp();
  void set_allocated_camresp(::LinkListCamResp* camresp);

  CmdCase cmd_case() const;
  // @@protoc_insertion_point(class_scope:Link.LinkCmd)
 private:
  void set_has_loginreq();
  void set_has_loginresp();
  void set_has_keepalivereq();
  void set_has_keepaliveresp();
  void set_has_camlistreq();
  void set_has_camlistresp();
  void set_has_camreq();
  void set_has_camresp();

  inline bool has_cmd() const;
  void clear_cmd();
  inline void clear_has_cmd();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int type_;
  union CmdUnion {
    CmdUnion() {}
    ::LinkLoginReq* loginreq_;
    ::LinkLoginResp* loginresp_;
    ::LinkKeepaliveReq* keepalivereq_;
    ::LinkKeepaliveResp* keepaliveresp_;
    ::LinkListCamReq* camlistreq_;
    ::LinkListCamResp* camlistresp_;
    ::LinkListCamReq* camreq_;
    ::LinkListCamResp* camresp_;
  } cmd_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct  protobuf_linkproto_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCmd

// .Link.LinkCmdType type = 1;
inline void LinkCmd::clear_type() {
  type_ = 0;
}
inline ::Link::LinkCmdType LinkCmd::type() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.type)
  return static_cast< ::Link::LinkCmdType >(type_);
}
inline void LinkCmd::set_type(::Link::LinkCmdType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Link.LinkCmd.type)
}

// .LinkLoginReq loginReq = 2;
inline bool LinkCmd::has_loginreq() const {
  return cmd_case() == kLoginReq;
}
inline void LinkCmd::set_has_loginreq() {
  _oneof_case_[0] = kLoginReq;
}
inline void LinkCmd::clear_loginreq() {
  if (has_loginreq()) {
    delete cmd_.loginreq_;
    clear_has_cmd();
  }
}
inline  const ::LinkLoginReq& LinkCmd::loginreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.loginReq)
  return has_loginreq()
      ? *cmd_.loginreq_
      : ::LinkLoginReq::default_instance();
}
inline ::LinkLoginReq* LinkCmd::mutable_loginreq() {
  if (!has_loginreq()) {
    clear_cmd();
    set_has_loginreq();
    cmd_.loginreq_ = new ::LinkLoginReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.loginReq)
  return cmd_.loginreq_;
}
inline ::LinkLoginReq* LinkCmd::release_loginreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.loginReq)
  if (has_loginreq()) {
    clear_has_cmd();
    ::LinkLoginReq* temp = cmd_.loginreq_;
    cmd_.loginreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_loginreq(::LinkLoginReq* loginreq) {
  clear_cmd();
  if (loginreq) {
    set_has_loginreq();
    cmd_.loginreq_ = loginreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.loginReq)
}

// .LinkLoginResp loginResp = 3;
inline bool LinkCmd::has_loginresp() const {
  return cmd_case() == kLoginResp;
}
inline void LinkCmd::set_has_loginresp() {
  _oneof_case_[0] = kLoginResp;
}
inline void LinkCmd::clear_loginresp() {
  if (has_loginresp()) {
    delete cmd_.loginresp_;
    clear_has_cmd();
  }
}
inline  const ::LinkLoginResp& LinkCmd::loginresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.loginResp)
  return has_loginresp()
      ? *cmd_.loginresp_
      : ::LinkLoginResp::default_instance();
}
inline ::LinkLoginResp* LinkCmd::mutable_loginresp() {
  if (!has_loginresp()) {
    clear_cmd();
    set_has_loginresp();
    cmd_.loginresp_ = new ::LinkLoginResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.loginResp)
  return cmd_.loginresp_;
}
inline ::LinkLoginResp* LinkCmd::release_loginresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.loginResp)
  if (has_loginresp()) {
    clear_has_cmd();
    ::LinkLoginResp* temp = cmd_.loginresp_;
    cmd_.loginresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_loginresp(::LinkLoginResp* loginresp) {
  clear_cmd();
  if (loginresp) {
    set_has_loginresp();
    cmd_.loginresp_ = loginresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.loginResp)
}

// .LinkKeepaliveReq keepaliveReq = 4;
inline bool LinkCmd::has_keepalivereq() const {
  return cmd_case() == kKeepaliveReq;
}
inline void LinkCmd::set_has_keepalivereq() {
  _oneof_case_[0] = kKeepaliveReq;
}
inline void LinkCmd::clear_keepalivereq() {
  if (has_keepalivereq()) {
    delete cmd_.keepalivereq_;
    clear_has_cmd();
  }
}
inline  const ::LinkKeepaliveReq& LinkCmd::keepalivereq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.keepaliveReq)
  return has_keepalivereq()
      ? *cmd_.keepalivereq_
      : ::LinkKeepaliveReq::default_instance();
}
inline ::LinkKeepaliveReq* LinkCmd::mutable_keepalivereq() {
  if (!has_keepalivereq()) {
    clear_cmd();
    set_has_keepalivereq();
    cmd_.keepalivereq_ = new ::LinkKeepaliveReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.keepaliveReq)
  return cmd_.keepalivereq_;
}
inline ::LinkKeepaliveReq* LinkCmd::release_keepalivereq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.keepaliveReq)
  if (has_keepalivereq()) {
    clear_has_cmd();
    ::LinkKeepaliveReq* temp = cmd_.keepalivereq_;
    cmd_.keepalivereq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_keepalivereq(::LinkKeepaliveReq* keepalivereq) {
  clear_cmd();
  if (keepalivereq) {
    set_has_keepalivereq();
    cmd_.keepalivereq_ = keepalivereq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.keepaliveReq)
}

// .LinkKeepaliveResp keepaliveResp = 5;
inline bool LinkCmd::has_keepaliveresp() const {
  return cmd_case() == kKeepaliveResp;
}
inline void LinkCmd::set_has_keepaliveresp() {
  _oneof_case_[0] = kKeepaliveResp;
}
inline void LinkCmd::clear_keepaliveresp() {
  if (has_keepaliveresp()) {
    delete cmd_.keepaliveresp_;
    clear_has_cmd();
  }
}
inline  const ::LinkKeepaliveResp& LinkCmd::keepaliveresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.keepaliveResp)
  return has_keepaliveresp()
      ? *cmd_.keepaliveresp_
      : ::LinkKeepaliveResp::default_instance();
}
inline ::LinkKeepaliveResp* LinkCmd::mutable_keepaliveresp() {
  if (!has_keepaliveresp()) {
    clear_cmd();
    set_has_keepaliveresp();
    cmd_.keepaliveresp_ = new ::LinkKeepaliveResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.keepaliveResp)
  return cmd_.keepaliveresp_;
}
inline ::LinkKeepaliveResp* LinkCmd::release_keepaliveresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.keepaliveResp)
  if (has_keepaliveresp()) {
    clear_has_cmd();
    ::LinkKeepaliveResp* temp = cmd_.keepaliveresp_;
    cmd_.keepaliveresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_keepaliveresp(::LinkKeepaliveResp* keepaliveresp) {
  clear_cmd();
  if (keepaliveresp) {
    set_has_keepaliveresp();
    cmd_.keepaliveresp_ = keepaliveresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.keepaliveResp)
}

// .LinkListCamReq camListReq = 6;
inline bool LinkCmd::has_camlistreq() const {
  return cmd_case() == kCamListReq;
}
inline void LinkCmd::set_has_camlistreq() {
  _oneof_case_[0] = kCamListReq;
}
inline void LinkCmd::clear_camlistreq() {
  if (has_camlistreq()) {
    delete cmd_.camlistreq_;
    clear_has_cmd();
  }
}
inline  const ::LinkListCamReq& LinkCmd::camlistreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camListReq)
  return has_camlistreq()
      ? *cmd_.camlistreq_
      : ::LinkListCamReq::default_instance();
}
inline ::LinkListCamReq* LinkCmd::mutable_camlistreq() {
  if (!has_camlistreq()) {
    clear_cmd();
    set_has_camlistreq();
    cmd_.camlistreq_ = new ::LinkListCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camListReq)
  return cmd_.camlistreq_;
}
inline ::LinkListCamReq* LinkCmd::release_camlistreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camListReq)
  if (has_camlistreq()) {
    clear_has_cmd();
    ::LinkListCamReq* temp = cmd_.camlistreq_;
    cmd_.camlistreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_camlistreq(::LinkListCamReq* camlistreq) {
  clear_cmd();
  if (camlistreq) {
    set_has_camlistreq();
    cmd_.camlistreq_ = camlistreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camListReq)
}

// .LinkListCamResp camListResp = 7;
inline bool LinkCmd::has_camlistresp() const {
  return cmd_case() == kCamListResp;
}
inline void LinkCmd::set_has_camlistresp() {
  _oneof_case_[0] = kCamListResp;
}
inline void LinkCmd::clear_camlistresp() {
  if (has_camlistresp()) {
    delete cmd_.camlistresp_;
    clear_has_cmd();
  }
}
inline  const ::LinkListCamResp& LinkCmd::camlistresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camListResp)
  return has_camlistresp()
      ? *cmd_.camlistresp_
      : ::LinkListCamResp::default_instance();
}
inline ::LinkListCamResp* LinkCmd::mutable_camlistresp() {
  if (!has_camlistresp()) {
    clear_cmd();
    set_has_camlistresp();
    cmd_.camlistresp_ = new ::LinkListCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camListResp)
  return cmd_.camlistresp_;
}
inline ::LinkListCamResp* LinkCmd::release_camlistresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camListResp)
  if (has_camlistresp()) {
    clear_has_cmd();
    ::LinkListCamResp* temp = cmd_.camlistresp_;
    cmd_.camlistresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_camlistresp(::LinkListCamResp* camlistresp) {
  clear_cmd();
  if (camlistresp) {
    set_has_camlistresp();
    cmd_.camlistresp_ = camlistresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camListResp)
}

// .LinkListCamReq camReq = 8;
inline bool LinkCmd::has_camreq() const {
  return cmd_case() == kCamReq;
}
inline void LinkCmd::set_has_camreq() {
  _oneof_case_[0] = kCamReq;
}
inline void LinkCmd::clear_camreq() {
  if (has_camreq()) {
    delete cmd_.camreq_;
    clear_has_cmd();
  }
}
inline  const ::LinkListCamReq& LinkCmd::camreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camReq)
  return has_camreq()
      ? *cmd_.camreq_
      : ::LinkListCamReq::default_instance();
}
inline ::LinkListCamReq* LinkCmd::mutable_camreq() {
  if (!has_camreq()) {
    clear_cmd();
    set_has_camreq();
    cmd_.camreq_ = new ::LinkListCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camReq)
  return cmd_.camreq_;
}
inline ::LinkListCamReq* LinkCmd::release_camreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camReq)
  if (has_camreq()) {
    clear_has_cmd();
    ::LinkListCamReq* temp = cmd_.camreq_;
    cmd_.camreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_camreq(::LinkListCamReq* camreq) {
  clear_cmd();
  if (camreq) {
    set_has_camreq();
    cmd_.camreq_ = camreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camReq)
}

// .LinkListCamResp camResp = 9;
inline bool LinkCmd::has_camresp() const {
  return cmd_case() == kCamResp;
}
inline void LinkCmd::set_has_camresp() {
  _oneof_case_[0] = kCamResp;
}
inline void LinkCmd::clear_camresp() {
  if (has_camresp()) {
    delete cmd_.camresp_;
    clear_has_cmd();
  }
}
inline  const ::LinkListCamResp& LinkCmd::camresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camResp)
  return has_camresp()
      ? *cmd_.camresp_
      : ::LinkListCamResp::default_instance();
}
inline ::LinkListCamResp* LinkCmd::mutable_camresp() {
  if (!has_camresp()) {
    clear_cmd();
    set_has_camresp();
    cmd_.camresp_ = new ::LinkListCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camResp)
  return cmd_.camresp_;
}
inline ::LinkListCamResp* LinkCmd::release_camresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camResp)
  if (has_camresp()) {
    clear_has_cmd();
    ::LinkListCamResp* temp = cmd_.camresp_;
    cmd_.camresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_camresp(::LinkListCamResp* camresp) {
  clear_cmd();
  if (camresp) {
    set_has_camresp();
    cmd_.camresp_ = camresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camResp)
}

inline bool LinkCmd::has_cmd() const {
  return cmd_case() != CMD_NOT_SET;
}
inline void LinkCmd::clear_has_cmd() {
  _oneof_case_[0] = CMD_NOT_SET;
}
inline LinkCmd::CmdCase LinkCmd::cmd_case() const {
  return LinkCmd::CmdCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Link

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Link::LinkCmdType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Link::LinkCmdType>() {
  return ::Link::LinkCmdType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_linkproto_2eproto__INCLUDED