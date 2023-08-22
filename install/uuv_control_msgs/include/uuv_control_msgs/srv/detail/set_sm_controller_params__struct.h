// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/SetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'k'
// Member 'kd'
// Member 'ki'
// Member 'slope'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SetSMControllerParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__SetSMControllerParams_Request
{
  rosidl_runtime_c__double__Sequence k;
  rosidl_runtime_c__double__Sequence kd;
  rosidl_runtime_c__double__Sequence ki;
  rosidl_runtime_c__double__Sequence slope;
} uuv_control_msgs__srv__SetSMControllerParams_Request;

// Struct for a sequence of uuv_control_msgs__srv__SetSMControllerParams_Request.
typedef struct uuv_control_msgs__srv__SetSMControllerParams_Request__Sequence
{
  uuv_control_msgs__srv__SetSMControllerParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__SetSMControllerParams_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetSMControllerParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__SetSMControllerParams_Response
{
  bool success;
} uuv_control_msgs__srv__SetSMControllerParams_Response;

// Struct for a sequence of uuv_control_msgs__srv__SetSMControllerParams_Response.
typedef struct uuv_control_msgs__srv__SetSMControllerParams_Response__Sequence
{
  uuv_control_msgs__srv__SetSMControllerParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__SetSMControllerParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_H_
