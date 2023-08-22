// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"
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

void GetThrusterManagerConfig_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_thruster_manager::srv::GetThrusterManagerConfig_Request(_init);
}

void GetThrusterManagerConfig_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request *>(message_memory);
  typed_message->~GetThrusterManagerConfig_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetThrusterManagerConfig_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetThrusterManagerConfig_Request_message_members = {
  "uuv_thruster_manager::srv",  // message namespace
  "GetThrusterManagerConfig_Request",  // message name
  1,  // number of fields
  sizeof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Request),
  GetThrusterManagerConfig_Request_message_member_array,  // message members
  GetThrusterManagerConfig_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterManagerConfig_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetThrusterManagerConfig_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterManagerConfig_Request_message_members,
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
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>()
{
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterManagerConfig_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterManagerConfig_Request_message_type_support_handle;
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
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"
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

void GetThrusterManagerConfig_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_thruster_manager::srv::GetThrusterManagerConfig_Response(_init);
}

void GetThrusterManagerConfig_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response *>(message_memory);
  typed_message->~GetThrusterManagerConfig_Response();
}

size_t size_function__GetThrusterManagerConfig_Response__allocation_matrix(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetThrusterManagerConfig_Response__allocation_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetThrusterManagerConfig_Response__allocation_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GetThrusterManagerConfig_Response__allocation_matrix(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetThrusterManagerConfig_Response_message_member_array[9] = {
  {
    "tf_prefix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, tf_prefix),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, base_link),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "thruster_frame_base",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, thruster_frame_base),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "thruster_topic_prefix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, thruster_topic_prefix),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "thruster_topic_suffix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, thruster_topic_suffix),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timeout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, timeout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, max_thrust),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_thrusters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, n_thrusters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allocation_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response, allocation_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetThrusterManagerConfig_Response__allocation_matrix,  // size() function pointer
    get_const_function__GetThrusterManagerConfig_Response__allocation_matrix,  // get_const(index) function pointer
    get_function__GetThrusterManagerConfig_Response__allocation_matrix,  // get(index) function pointer
    resize_function__GetThrusterManagerConfig_Response__allocation_matrix  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetThrusterManagerConfig_Response_message_members = {
  "uuv_thruster_manager::srv",  // message namespace
  "GetThrusterManagerConfig_Response",  // message name
  9,  // number of fields
  sizeof(uuv_thruster_manager::srv::GetThrusterManagerConfig_Response),
  GetThrusterManagerConfig_Response_message_member_array,  // message members
  GetThrusterManagerConfig_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterManagerConfig_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetThrusterManagerConfig_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterManagerConfig_Response_message_members,
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
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>()
{
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterManagerConfig_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterManagerConfig_Response_message_type_support_handle;
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
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetThrusterManagerConfig_service_members = {
  "uuv_thruster_manager::srv",  // service namespace
  "GetThrusterManagerConfig",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetThrusterManagerConfig_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetThrusterManagerConfig_service_members,
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
get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::uuv_thruster_manager::srv::rosidl_typesupport_introspection_cpp::GetThrusterManagerConfig_service_type_support_handle;
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
        ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig>();
}

#ifdef __cplusplus
}
#endif
