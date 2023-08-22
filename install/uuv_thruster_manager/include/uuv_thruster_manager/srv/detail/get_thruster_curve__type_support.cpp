// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetThrusterCurve_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_thruster_manager::srv::GetThrusterCurve_Request(_init);
}

void GetThrusterCurve_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_thruster_manager::srv::GetThrusterCurve_Request *>(message_memory);
  typed_message->~GetThrusterCurve_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetThrusterCurve_Request_message_member_array[3] = {
  {
    "min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterCurve_Request, min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterCurve_Request, max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterCurve_Request, n_points),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetThrusterCurve_Request_message_members = {
  "uuv_thruster_manager::srv",  // message namespace
  "GetThrusterCurve_Request",  // message name
  3,  // number of fields
  sizeof(uuv_thruster_manager::srv::GetThrusterCurve_Request),
  GetThrusterCurve_Request_message_member_array,  // message members
  GetThrusterCurve_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterCurve_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetThrusterCurve_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterCurve_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterCurve_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Request)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterCurve_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetThrusterCurve_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_thruster_manager::srv::GetThrusterCurve_Response(_init);
}

void GetThrusterCurve_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_thruster_manager::srv::GetThrusterCurve_Response *>(message_memory);
  typed_message->~GetThrusterCurve_Response();
}

size_t size_function__GetThrusterCurve_Response__input(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetThrusterCurve_Response__input(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetThrusterCurve_Response__input(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GetThrusterCurve_Response__input(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetThrusterCurve_Response__thrust(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetThrusterCurve_Response__thrust(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetThrusterCurve_Response__thrust(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GetThrusterCurve_Response__thrust(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetThrusterCurve_Response_message_member_array[2] = {
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterCurve_Response, input),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetThrusterCurve_Response__input,  // size() function pointer
    get_const_function__GetThrusterCurve_Response__input,  // get_const(index) function pointer
    get_function__GetThrusterCurve_Response__input,  // get(index) function pointer
    resize_function__GetThrusterCurve_Response__input  // resize(index) function pointer
  },
  {
    "thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterCurve_Response, thrust),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetThrusterCurve_Response__thrust,  // size() function pointer
    get_const_function__GetThrusterCurve_Response__thrust,  // get_const(index) function pointer
    get_function__GetThrusterCurve_Response__thrust,  // get(index) function pointer
    resize_function__GetThrusterCurve_Response__thrust  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetThrusterCurve_Response_message_members = {
  "uuv_thruster_manager::srv",  // message namespace
  "GetThrusterCurve_Response",  // message name
  2,  // number of fields
  sizeof(uuv_thruster_manager::srv::GetThrusterCurve_Response),
  GetThrusterCurve_Response_message_member_array,  // message members
  GetThrusterCurve_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterCurve_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetThrusterCurve_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterCurve_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterCurve_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Response)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterCurve_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetThrusterCurve_service_members = {
  "uuv_thruster_manager::srv",  // service namespace
  "GetThrusterCurve",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetThrusterCurve_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterCurve_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterCurve_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_thruster_manager::srv::GetThrusterCurve_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_thruster_manager::srv::GetThrusterCurve_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterCurve)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve>();
}

#ifdef __cplusplus
}
#endif
