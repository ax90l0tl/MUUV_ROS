// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/GoToIncremental.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/go_to_incremental__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/go_to_incremental__functions.h"
#include "uuv_control_msgs/srv/detail/go_to_incremental__struct.h"


// Include directives for member types
// Member `step`
#include "geometry_msgs/msg/point.h"
// Member `step`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `interpolator`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GoToIncremental_Request__init(message_memory);
}

void GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GoToIncremental_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_member_array[3] = {
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GoToIncremental_Request, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GoToIncremental_Request, max_forward_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interpolator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GoToIncremental_Request, interpolator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GoToIncremental_Request",  // message name
  3,  // number of fields
  sizeof(uuv_control_msgs__srv__GoToIncremental_Request),
  GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_member_array,  // message members
  GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_type_support_handle = {
  0,
  &GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Request)() {
  GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_type_support_handle.typesupport_identifier) {
    GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToIncremental_Request__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/go_to_incremental__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/go_to_incremental__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/go_to_incremental__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GoToIncremental_Response__init(message_memory);
}

void GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GoToIncremental_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GoToIncremental_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GoToIncremental_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__GoToIncremental_Response),
  GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_member_array,  // message members
  GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_type_support_handle = {
  0,
  &GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Response)() {
  if (!GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_type_support_handle.typesupport_identifier) {
    GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToIncremental_Response__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/go_to_incremental__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "GoToIncremental",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental)() {
  if (!uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GoToIncremental_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__go_to_incremental__rosidl_typesupport_introspection_c__GoToIncremental_service_type_support_handle;
}
