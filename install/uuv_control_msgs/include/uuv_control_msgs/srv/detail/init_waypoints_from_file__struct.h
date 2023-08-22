// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LIPB'.
static const char * const uuv_control_msgs__srv__InitWaypointsFromFile_Request__LIPB = "lipb";

/// Constant 'CUBIC'.
static const char * const uuv_control_msgs__srv__InitWaypointsFromFile_Request__CUBIC = "cubic";

/// Constant 'DUBINS'.
static const char * const uuv_control_msgs__srv__InitWaypointsFromFile_Request__DUBINS = "dubins";

/// Constant 'LINEAR'.
static const char * const uuv_control_msgs__srv__InitWaypointsFromFile_Request__LINEAR = "linear";

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'filename'
// Member 'interpolator'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in srv/InitWaypointsFromFile in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitWaypointsFromFile_Request
{
  builtin_interfaces__msg__Time start_time;
  bool start_now;
  std_msgs__msg__String filename;
  std_msgs__msg__String interpolator;
} uuv_control_msgs__srv__InitWaypointsFromFile_Request;

// Struct for a sequence of uuv_control_msgs__srv__InitWaypointsFromFile_Request.
typedef struct uuv_control_msgs__srv__InitWaypointsFromFile_Request__Sequence
{
  uuv_control_msgs__srv__InitWaypointsFromFile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitWaypointsFromFile_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/InitWaypointsFromFile in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__InitWaypointsFromFile_Response
{
  bool success;
} uuv_control_msgs__srv__InitWaypointsFromFile_Response;

// Struct for a sequence of uuv_control_msgs__srv__InitWaypointsFromFile_Response.
typedef struct uuv_control_msgs__srv__InitWaypointsFromFile_Response__Sequence
{
  uuv_control_msgs__srv__InitWaypointsFromFile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__InitWaypointsFromFile_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_H_
