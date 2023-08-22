// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/msg/detail/waypoint_set__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/msg/detail/waypoint_set__functions.h"
#include "uuv_control_msgs/msg/detail/waypoint_set__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/waypoint.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__msg__WaypointSet__init(message_memory);
}

void WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_fini_function(void * message_memory)
{
  uuv_control_msgs__msg__WaypointSet__fini(message_memory);
}

size_t WaypointSet__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints(
  const void * untyped_member)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * WaypointSet__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints(
  const void * untyped_member, size_t index)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * WaypointSet__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints(
  void * untyped_member, size_t index)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool WaypointSet__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints(
  void * untyped_member, size_t size)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  uuv_control_msgs__msg__Waypoint__Sequence__fini(member);
  return uuv_control_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__msg__WaypointSet, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__msg__WaypointSet, start_time),  // bytes offset in struct
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
    offsetof(uuv_control_msgs__msg__WaypointSet, waypoints),  // bytes offset in struct
    NULL,  // default value
    WaypointSet__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints,  // size() function pointer
    WaypointSet__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints,  // get_const(index) function pointer
    WaypointSet__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints,  // get(index) function pointer
    WaypointSet__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_members = {
  "uuv_control_msgs__msg",  // message namespace
  "WaypointSet",  // message name
  3,  // number of fields
  sizeof(uuv_control_msgs__msg__WaypointSet),
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_member_array,  // message members
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_type_support_handle = {
  0,
  &WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, msg, WaypointSet)() {
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, msg, Waypoint)();
  if (!WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_type_support_handle.typesupport_identifier) {
    WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointSet__rosidl_typesupport_introspection_c__WaypointSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
