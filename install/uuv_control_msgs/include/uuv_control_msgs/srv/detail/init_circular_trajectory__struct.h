// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/InitCircularTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__STRUCT_H_

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
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/InitCircularTrajectory in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitCircularTrajectory_Request
{
  builtin_interfaces__msg__Time start_time;
  bool start_now;
  double radius;
  geometry_msgs__msg__Point center;
  bool is_clockwise;
  double angle_offset;
  int32_t n_points;
  double heading_offset;
  double max_forward_speed;
  double duration;
} uuv_control_msgs__srv__InitCircularTrajectory_Request;

// Struct for a sequence of uuv_control_msgs__srv__InitCircularTrajectory_Request.
typedef struct uuv_control_msgs__srv__InitCircularTrajectory_Request__Sequence
{
  uuv_control_msgs__srv__InitCircularTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitCircularTrajectory_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/InitCircularTrajectory in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitCircularTrajectory_Response
{
  bool success;
} uuv_control_msgs__srv__InitCircularTrajectory_Response;

// Struct for a sequence of uuv_control_msgs__srv__InitCircularTrajectory_Response.
typedef struct uuv_control_msgs__srv__InitCircularTrajectory_Response__Sequence
{
  uuv_control_msgs__srv__InitCircularTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitCircularTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__STRUCT_H_
