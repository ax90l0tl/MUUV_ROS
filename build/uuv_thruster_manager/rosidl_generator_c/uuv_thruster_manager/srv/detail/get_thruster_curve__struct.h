// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_H_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetThrusterCurve in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__GetThrusterCurve_Request
{
  double min;
  double max;
  int32_t n_points;
} uuv_thruster_manager__srv__GetThrusterCurve_Request;

// Struct for a sequence of uuv_thruster_manager__srv__GetThrusterCurve_Request.
typedef struct uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence
{
  uuv_thruster_manager__srv__GetThrusterCurve_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'input'
// Member 'thrust'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetThrusterCurve in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__GetThrusterCurve_Response
{
  rosidl_runtime_c__double__Sequence input;
  rosidl_runtime_c__double__Sequence thrust;
} uuv_thruster_manager__srv__GetThrusterCurve_Response;

// Struct for a sequence of uuv_thruster_manager__srv__GetThrusterCurve_Response.
typedef struct uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence
{
  uuv_thruster_manager__srv__GetThrusterCurve_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_H_
