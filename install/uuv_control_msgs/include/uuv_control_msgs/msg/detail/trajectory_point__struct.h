// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"

// Struct defined in msg/TrajectoryPoint in the package uuv_control_msgs.
typedef struct uuv_control_msgs__msg__TrajectoryPoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Accel acceleration;
} uuv_control_msgs__msg__TrajectoryPoint;

// Struct for a sequence of uuv_control_msgs__msg__TrajectoryPoint.
typedef struct uuv_control_msgs__msg__TrajectoryPoint__Sequence
{
  uuv_control_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
