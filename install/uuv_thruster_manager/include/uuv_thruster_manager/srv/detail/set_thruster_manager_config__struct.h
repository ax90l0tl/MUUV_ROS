// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_H_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFAULT_BASE_LINK'.
static const char * const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__DEFAULT_BASE_LINK = "/base_link";

/// Constant 'DEFAULT_THRUSTER_FRAME_BASE'.
static const char * const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__DEFAULT_THRUSTER_FRAME_BASE = "/thruster_";

/// Constant 'DEFAULT_PREFIX'.
static const char * const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__DEFAULT_PREFIX = "thrusters/";

/// Constant 'DEFAULT_SUFFIX'.
static const char * const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__DEFAULT_SUFFIX = "/input";

// Include directives for member types
// Member 'base_link'
// Member 'thruster_frame_base'
// Member 'thruster_topic_prefix'
// Member 'thruster_topic_suffix'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetThrusterManagerConfig in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__SetThrusterManagerConfig_Request
{
  rosidl_runtime_c__String base_link;
  rosidl_runtime_c__String thruster_frame_base;
  rosidl_runtime_c__String thruster_topic_prefix;
  rosidl_runtime_c__String thruster_topic_suffix;
  double timeout;
  double max_thrust;
} uuv_thruster_manager__srv__SetThrusterManagerConfig_Request;

// Struct for a sequence of uuv_thruster_manager__srv__SetThrusterManagerConfig_Request.
typedef struct uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence
{
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetThrusterManagerConfig in the package uuv_thruster_manager.
typedef struct uuv_thruster_manager__srv__SetThrusterManagerConfig_Response
{
  bool success;
} uuv_thruster_manager__srv__SetThrusterManagerConfig_Response;

// Struct for a sequence of uuv_thruster_manager__srv__SetThrusterManagerConfig_Response.
typedef struct uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence
{
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_H_
