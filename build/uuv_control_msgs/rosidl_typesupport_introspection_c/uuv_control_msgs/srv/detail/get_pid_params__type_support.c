// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/GetPIDParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/get_pid_params__functions.h"
#include "uuv_control_msgs/srv/detail/get_pid_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetPIDParams_Request__init(message_memory);
}

void GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetPIDParams_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetPIDParams_Request",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__GetPIDParams_Request),
  GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_member_array,  // message members
  GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle = {
  0,
  &GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)() {
  if (!GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle.typesupport_identifier) {
    GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__struct.h"


// Include directives for member types
// Member `kp`
// Member `kd`
// Member `ki`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetPIDParams_Response__init(message_memory);
}

void GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetPIDParams_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_member_array[3] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, ki),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetPIDParams_Response",  // message name
  3,  // number of fields
  sizeof(uuv_control_msgs__srv__GetPIDParams_Response),
  GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_member_array,  // message members
  GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle = {
  0,
  &GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)() {
  if (!GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle.typesupport_identifier) {
    GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "GetPIDParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams)() {
  if (!uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle;
}
