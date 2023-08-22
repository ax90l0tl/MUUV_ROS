// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetWaypoints in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GetWaypoints_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_control_msgs__srv__GetWaypoints_Request;

// Struct for a sequence of uuv_control_msgs__srv__GetWaypoints_Request.
typedef struct uuv_control_msgs__srv__GetWaypoints_Request__Sequence
{
  uuv_control_msgs__srv__GetWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GetWaypoints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__struct.h"

// Struct defined in srv/GetWaypoints in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GetWaypoints_Response
{
  uuv_control_msgs__msg__Waypoint__Sequence waypoints;
} uuv_control_msgs__srv__GetWaypoints_Response;

// Struct for a sequence of uuv_control_msgs__srv__GetWaypoints_Response.
typedef struct uuv_control_msgs__srv__GetWaypoints_Response__Sequence
{
  uuv_control_msgs__srv__GetWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GetWaypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
