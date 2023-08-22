// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/init_waypoint_set__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/init_waypoint_set__functions.h"
#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/waypoint.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
// Member `interpolator`
#include "std_msgs/msg/string.h"
// Member `interpolator`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__InitWaypointSet_Request__init(message_memory);
}

void InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__InitWaypointSet_Request__fini(message_memory);
}

size_t InitWaypointSet_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints(
  const void * untyped_member)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * InitWaypointSet_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints(
  const void * untyped_member, size_t index)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InitWaypointSet_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints(
  void * untyped_member, size_t index)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InitWaypointSet_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints(
  void * untyped_member, size_t size)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  uuv_control_msgs__msg__Waypoint__Sequence__fini(member);
  return uuv_control_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_member_array[6] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_now",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, start_now),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    InitWaypointSet_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints,  // size() function pointer
    InitWaypointSet_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints,  // get_const(index) function pointer
    InitWaypointSet_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints,  // get(index) function pointer
    InitWaypointSet_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, max_forward_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, heading_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interpolator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Request, interpolator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "InitWaypointSet_Request",  // message name
  6,  // number of fields
  sizeof(uuv_control_msgs__srv__InitWaypointSet_Request),
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_member_array,  // message members
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_type_support_handle = {
  0,
  &InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Request)() {
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, msg, Waypoint)();
  InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_type_support_handle.typesupport_identifier) {
    InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InitWaypointSet_Request__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__InitWaypointSet_Response__init(message_memory);
}

void InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__InitWaypointSet_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitWaypointSet_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "InitWaypointSet_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__InitWaypointSet_Response),
  InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_member_array,  // message members
  InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_type_support_handle = {
  0,
  &InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Response)() {
  if (!InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_type_support_handle.typesupport_identifier) {
    InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InitWaypointSet_Response__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "InitWaypointSet",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet)() {
  if (!uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitWaypointSet_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__init_waypoint_set__rosidl_typesupport_introspection_c__InitWaypointSet_service_type_support_handle;
}
