// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg_srv:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_
#define CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_

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

// Struct defined in msg/Float64Stamped in the package custom_msg_srv.
typedef struct custom_msg_srv__msg__Float64Stamped
{
  std_msgs__msg__Header header;
  double data;
} custom_msg_srv__msg__Float64Stamped;

// Struct for a sequence of custom_msg_srv__msg__Float64Stamped.
typedef struct custom_msg_srv__msg__Float64Stamped__Sequence
{
  custom_msg_srv__msg__Float64Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg_srv__msg__Float64Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_
