// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_control_msgs:srv/AddWaypoint.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/add_waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/detail/add_waypoint__struct.h"
#include "uuv_control_msgs/srv/detail/add_waypoint__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "uuv_control_msgs/msg/detail/waypoint__functions.h"  // waypoint

// forward declare type support functions
size_t get_serialized_size_uuv_control_msgs__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_uuv_control_msgs__msg__Waypoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint)();


using _AddWaypoint_Request__ros_msg_type = uuv_control_msgs__srv__AddWaypoint_Request;

static bool _AddWaypoint_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddWaypoint_Request__ros_msg_type * ros_message = static_cast<const _AddWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->waypoint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AddWaypoint_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddWaypoint_Request__ros_msg_type * ros_message = static_cast<_AddWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->waypoint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__AddWaypoint_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddWaypoint_Request__ros_msg_type * ros_message = static_cast<const _AddWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoint

  current_alignment += get_serialized_size_uuv_control_msgs__msg__Waypoint(
    &(ros_message->waypoint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AddWaypoint_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__AddWaypoint_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__AddWaypoint_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: waypoint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_uuv_control_msgs__msg__Waypoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AddWaypoint_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__AddWaypoint_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddWaypoint_Request = {
  "uuv_control_msgs::srv",
  "AddWaypoint_Request",
  _AddWaypoint_Request__cdr_serialize,
  _AddWaypoint_Request__cdr_deserialize,
  _AddWaypoint_Request__get_serialized_size,
  _AddWaypoint_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddWaypoint_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddWaypoint_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, AddWaypoint_Request)() {
  return &_AddWaypoint_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__struct.h"
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "uuv_control_msgs/msg/detail/waypoint__functions.h"  // waypoints

// forward declare type support functions
size_t get_serialized_size_uuv_control_msgs__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_uuv_control_msgs__msg__Waypoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint)();


using _AddWaypoint_Response__ros_msg_type = uuv_control_msgs__srv__AddWaypoint_Response;

static bool _AddWaypoint_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddWaypoint_Response__ros_msg_type * ros_message = static_cast<const _AddWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint
      )()->data);
    size_t size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _AddWaypoint_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddWaypoint_Response__ros_msg_type * ros_message = static_cast<_AddWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_control_msgs, msg, Waypoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->waypoints.data) {
      uuv_control_msgs__msg__Waypoint__Sequence__fini(&ros_message->waypoints);
    }
    if (!uuv_control_msgs__msg__Waypoint__Sequence__init(&ros_message->waypoints, size)) {
      return "failed to create array for field 'waypoints'";
    }
    auto array_ptr = ros_message->waypoints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__AddWaypoint_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddWaypoint_Response__ros_msg_type * ros_message = static_cast<const _AddWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoints
  {
    size_t array_size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_uuv_control_msgs__msg__Waypoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddWaypoint_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__AddWaypoint_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__AddWaypoint_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: waypoints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_uuv_control_msgs__msg__Waypoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AddWaypoint_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__AddWaypoint_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddWaypoint_Response = {
  "uuv_control_msgs::srv",
  "AddWaypoint_Response",
  _AddWaypoint_Response__cdr_serialize,
  _AddWaypoint_Response__cdr_deserialize,
  _AddWaypoint_Response__get_serialized_size,
  _AddWaypoint_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddWaypoint_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddWaypoint_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, AddWaypoint_Response)() {
  return &_AddWaypoint_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/add_waypoint.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddWaypoint__callbacks = {
  "uuv_control_msgs::srv",
  "AddWaypoint",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, AddWaypoint_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, AddWaypoint_Response)(),
};

static rosidl_service_type_support_t AddWaypoint__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddWaypoint__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, AddWaypoint)() {
  return &AddWaypoint__handle;
}

#if defined(__cplusplus)
}
#endif
