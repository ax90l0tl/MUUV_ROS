// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

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
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Waypoint in the package uuv_control_msgs.
typedef struct uuv_control_msgs__msg__Waypoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point point;
  double max_forward_speed;
  double heading_offset;
  bool use_fixed_heading;
  double radius_of_acceptance;
} uuv_control_msgs__msg__Waypoint;

// Struct for a sequence of uuv_control_msgs__msg__Waypoint.
typedef struct uuv_control_msgs__msg__Waypoint__Sequence
{
  uuv_control_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
