// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint'
#include "uuv_control_msgs/msg/detail/waypoint__struct.h"

// Struct defined in srv/AddWaypoint in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__AddWaypoint_Request
{
  uuv_control_msgs__msg__Waypoint waypoint;
} uuv_control_msgs__srv__AddWaypoint_Request;

// Struct for a sequence of uuv_control_msgs__srv__AddWaypoint_Request.
typedef struct uuv_control_msgs__srv__AddWaypoint_Request__Sequence
{
  uuv_control_msgs__srv__AddWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__AddWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
// already included above
// #include "uuv_control_msgs/msg/detail/waypoint__struct.h"

// Struct defined in srv/AddWaypoint in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__AddWaypoint_Response
{
  bool success;
  uuv_control_msgs__msg__Waypoint__Sequence waypoints;
} uuv_control_msgs__srv__AddWaypoint_Response;

// Struct for a sequence of uuv_control_msgs__srv__AddWaypoint_Response.
typedef struct uuv_control_msgs__srv__AddWaypoint_Response__Sequence
{
  uuv_control_msgs__srv__AddWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__AddWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
