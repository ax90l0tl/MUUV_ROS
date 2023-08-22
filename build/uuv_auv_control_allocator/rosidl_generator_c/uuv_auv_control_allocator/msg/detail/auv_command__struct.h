// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_

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
// Member 'command'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/AUVCommand in the package uuv_auv_control_allocator.
typedef struct uuv_auv_control_allocator__msg__AUVCommand
{
  std_msgs__msg__Header header;
  double surge_speed;
  geometry_msgs__msg__Wrench command;
} uuv_auv_control_allocator__msg__AUVCommand;

// Struct for a sequence of uuv_auv_control_allocator__msg__AUVCommand.
typedef struct uuv_auv_control_allocator__msg__AUVCommand__Sequence
{
  uuv_auv_control_allocator__msg__AUVCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_auv_control_allocator__msg__AUVCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_
