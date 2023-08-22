// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/Hold.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__HOLD__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__HOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Hold in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__Hold_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_control_msgs__srv__Hold_Request;

// Struct for a sequence of uuv_control_msgs__srv__Hold_Request.
typedef struct uuv_control_msgs__srv__Hold_Request__Sequence
{
  uuv_control_msgs__srv__Hold_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__Hold_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Hold in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__Hold_Response
{
  bool success;
} uuv_control_msgs__srv__Hold_Response;

// Struct for a sequence of uuv_control_msgs__srv__Hold_Response.
typedef struct uuv_control_msgs__srv__Hold_Response__Sequence
{
  uuv_control_msgs__srv__Hold_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__Hold_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__HOLD__STRUCT_H_
