// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_H_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__struct.h"

// Struct defined in msg/WaypointSet in the package uuv_control_msgs.
typedef struct uuv_control_msgs__msg__WaypointSet
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time start_time;
  uuv_control_msgs__msg__Waypoint__Sequence waypoints;
} uuv_control_msgs__msg__WaypointSet;

// Struct for a sequence of uuv_control_msgs__msg__WaypointSet.
typedef struct uuv_control_msgs__msg__WaypointSet__Sequence
{
  uuv_control_msgs__msg__WaypointSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__msg__WaypointSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_H_
