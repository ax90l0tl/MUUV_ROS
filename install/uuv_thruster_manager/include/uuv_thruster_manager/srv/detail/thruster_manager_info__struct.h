// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_H_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ThrusterManagerInfo in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__ThrusterManagerInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_thruster_manager__srv__ThrusterManagerInfo_Request;

// Struct for a sequence of uuv_thruster_manager__srv__ThrusterManagerInfo_Request.
typedef struct uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence
{
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'allocation_matrix'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ThrusterManagerInfo in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__ThrusterManagerInfo_Response
{
  int32_t n_thrusters;
  rosidl_runtime_c__double__Sequence allocation_matrix;
  rosidl_runtime_c__String reference_frame;
} uuv_thruster_manager__srv__ThrusterManagerInfo_Response;

// Struct for a sequence of uuv_thruster_manager__srv__ThrusterManagerInfo_Response.
typedef struct uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence
{
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_H_
