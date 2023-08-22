// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_H_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetThrusterManagerConfig in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__GetThrusterManagerConfig_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_thruster_manager__srv__GetThrusterManagerConfig_Request;

// Struct for a sequence of uuv_thruster_manager__srv__GetThrusterManagerConfig_Request.
typedef struct uuv_thruster_manager__srv__GetThrusterManagerConfig_Request__Sequence
{
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__GetThrusterManagerConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tf_prefix'
// Member 'base_link'
// Member 'thruster_frame_base'
// Member 'thruster_topic_prefix'
// Member 'thruster_topic_suffix'
#include "rosidl_runtime_c/string.h"
// Member 'allocation_matrix'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetThrusterManagerConfig in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__GetThrusterManagerConfig_Response
{
  rosidl_runtime_c__String tf_prefix;
  rosidl_runtime_c__String base_link;
  rosidl_runtime_c__String thruster_frame_base;
  rosidl_runtime_c__String thruster_topic_prefix;
  rosidl_runtime_c__String thruster_topic_suffix;
  double timeout;
  double max_thrust;
  int32_t n_thrusters;
  rosidl_runtime_c__double__Sequence allocation_matrix;
} uuv_thruster_manager__srv__GetThrusterManagerConfig_Response;

// Struct for a sequence of uuv_thruster_manager__srv__GetThrusterManagerConfig_Response.
typedef struct uuv_thruster_manager__srv__GetThrusterManagerConfig_Response__Sequence
{
  uuv_thruster_manager__srv__GetThrusterManagerConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__GetThrusterManagerConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_H_
