// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/IsRunningTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/is_running_trajectory__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/is_running_trajectory__functions.h"
#include "uuv_control_msgs/srv/detail/is_running_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__IsRunningTrajectory_Request__init(message_memory);
}

void IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__IsRunningTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__IsRunningTrajectory_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "IsRunningTrajectory_Request",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__IsRunningTrajectory_Request),
  IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_member_array,  // message members
  IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_type_support_handle = {
  0,
  &IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Request)() {
  if (!IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IsRunningTrajectory_Request__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/is_running_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/is_running_trajectory__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/is_running_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__IsRunningTrajectory_Response__init(message_memory);
}

void IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__IsRunningTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_member_array[1] = {
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__IsRunningTrajectory_Response, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "IsRunningTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__IsRunningTrajectory_Response),
  IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_member_array,  // message members
  IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_type_support_handle = {
  0,
  &IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Response)() {
  if (!IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IsRunningTrajectory_Response__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/is_running_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "IsRunningTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory)() {
  if (!uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, IsRunningTrajectory_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__is_running_trajectory__rosidl_typesupport_introspection_c__IsRunningTrajectory_service_type_support_handle;
}
