// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__rosidl_typesupport_introspection_c.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__functions.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Request__init(message_memory);
}

void GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_fini_function(void * message_memory)
{
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_members = {
  "uuv_thruster_manager__srv",  // message namespace
  "GetThrusterManagerConfig_Request",  // message name
  1,  // number of fields
  sizeof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Request),
  GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_member_array,  // message members
  GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_type_support_handle = {
  0,
  &GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)() {
  if (!GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_type_support_handle.typesupport_identifier) {
    GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetThrusterManagerConfig_Request__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__functions.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.h"


// Include directives for member types
// Member `tf_prefix`
// Member `base_link`
// Member `thruster_frame_base`
// Member `thruster_topic_prefix`
// Member `thruster_topic_suffix`
#include "rosidl_runtime_c/string_functions.h"
// Member `allocation_matrix`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Response__init(message_memory);
}

void GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_fini_function(void * message_memory)
{
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_member_array[9] = {
  {
    "tf_prefix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, tf_prefix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, base_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thruster_frame_base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, thruster_frame_base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thruster_topic_prefix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, thruster_topic_prefix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thruster_topic_suffix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, thruster_topic_suffix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_thrust",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, max_thrust),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_thrusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, n_thrusters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allocation_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response, allocation_matrix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_members = {
  "uuv_thruster_manager__srv",  // message namespace
  "GetThrusterManagerConfig_Response",  // message name
  9,  // number of fields
  sizeof(uuv_thruster_manager__srv__GetThrusterManagerConfig_Response),
  GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_member_array,  // message members
  GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_type_support_handle = {
  0,
  &GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)() {
  if (!GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_type_support_handle.typesupport_identifier) {
    GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetThrusterManagerConfig_Response__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_members = {
  "uuv_thruster_manager__srv",  // service namespace
  "GetThrusterManagerConfig",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Request_message_type_support_handle,
  NULL  // response message
  // uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_type_support_handle = {
  0,
  &uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig)() {
  if (!uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_type_support_handle.typesupport_identifier) {
    uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)()->data;
  }

  return &uuv_thruster_manager__srv__detail__get_thruster_manager_config__rosidl_typesupport_introspection_c__GetThrusterManagerConfig_service_type_support_handle;
}
