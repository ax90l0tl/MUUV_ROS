// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/SetPIDParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kp'
// Member 'kd'
// Member 'ki'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SetPIDParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__SetPIDParams_Request
{
  rosidl_runtime_c__double__Sequence kp;
  rosidl_runtime_c__double__Sequence kd;
  rosidl_runtime_c__double__Sequence ki;
} uuv_control_msgs__srv__SetPIDParams_Request;

// Struct for a sequence of uuv_control_msgs__srv__SetPIDParams_Request.
typedef struct uuv_control_msgs__srv__SetPIDParams_Request__Sequence
{
  uuv_control_msgs__srv__SetPIDParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__SetPIDParams_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetPIDParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__SetPIDParams_Response
{
  bool success;
} uuv_control_msgs__srv__SetPIDParams_Response;

// Struct for a sequence of uuv_control_msgs__srv__SetPIDParams_Response.
typedef struct uuv_control_msgs__srv__SetPIDParams_Response__Sequence
{
  uuv_control_msgs__srv__SetPIDParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__SetPIDParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__STRUCT_H_
