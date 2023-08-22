// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__struct.h"
// Member 'interpolator'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in srv/InitWaypointSet in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitWaypointSet_Request
{
  builtin_interfaces__msg__Time start_time;
  bool start_now;
  uuv_control_msgs__msg__Waypoint__Sequence waypoints;
  double max_forward_speed;
  double heading_offset;
  std_msgs__msg__String interpolator;
} uuv_control_msgs__srv__InitWaypointSet_Request;

// Struct for a sequence of uuv_control_msgs__srv__InitWaypointSet_Request.
typedef struct uuv_control_msgs__srv__InitWaypointSet_Request__Sequence
{
  uuv_control_msgs__srv__InitWaypointSet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitWaypointSet_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/InitWaypointSet in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitWaypointSet_Response
{
  bool success;
} uuv_control_msgs__srv__InitWaypointSet_Response;

// Struct for a sequence of uuv_control_msgs__srv__InitWaypointSet_Response.
typedef struct uuv_control_msgs__srv__InitWaypointSet_Response__Sequence
{
  uuv_control_msgs__srv__InitWaypointSet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitWaypointSet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__STRUCT_H_
