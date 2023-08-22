// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__struct.h"
#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // start_time
#include "std_msgs/msg/detail/string__functions.h"  // filename, interpolator

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _InitWaypointsFromFile_Request__ros_msg_type = uuv_control_msgs__srv__InitWaypointsFromFile_Request;

static bool _InitWaypointsFromFile_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InitWaypointsFromFile_Request__ros_msg_type * ros_message = static_cast<const _InitWaypointsFromFile_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_time, cdr))
    {
      return false;
    }
  }

  // Field name: start_now
  {
    cdr << (ros_message->start_now ? true : false);
  }

  // Field name: filename
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->filename, cdr))
    {
      return false;
    }
  }

  // Field name: interpolator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->interpolator, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _InitWaypointsFromFile_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InitWaypointsFromFile_Request__ros_msg_type * ros_message = static_cast<_InitWaypointsFromFile_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_time))
    {
      return false;
    }
  }

  // Field name: start_now
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->start_now = tmp ? true : false;
  }

  // Field name: filename
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->filename))
    {
      return false;
    }
  }

  // Field name: interpolator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->interpolator))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InitWaypointsFromFile_Request__ros_msg_type * ros_message = static_cast<const _InitWaypointsFromFile_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->start_time), current_alignment);
  // field.name start_now
  {
    size_t item_size = sizeof(ros_message->start_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filename

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->filename), current_alignment);
  // field.name interpolator

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->interpolator), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _InitWaypointsFromFile_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: start_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: start_now
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: filename
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }
  // member: interpolator
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _InitWaypointsFromFile_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InitWaypointsFromFile_Request = {
  "uuv_control_msgs::srv",
  "InitWaypointsFromFile_Request",
  _InitWaypointsFromFile_Request__cdr_serialize,
  _InitWaypointsFromFile_Request__cdr_deserialize,
  _InitWaypointsFromFile_Request__get_serialized_size,
  _InitWaypointsFromFile_Request__max_serialized_size
};

static rosidl_message_type_support_t _InitWaypointsFromFile_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InitWaypointsFromFile_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, InitWaypointsFromFile_Request)() {
  return &_InitWaypointsFromFile_Request__type_support;
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
// #include "uuv_control_msgs/srv/detail/init_waypoints_from_file__struct.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoints_from_file__functions.h"
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


// forward declare type support functions


using _InitWaypointsFromFile_Response__ros_msg_type = uuv_control_msgs__srv__InitWaypointsFromFile_Response;

static bool _InitWaypointsFromFile_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InitWaypointsFromFile_Response__ros_msg_type * ros_message = static_cast<const _InitWaypointsFromFile_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _InitWaypointsFromFile_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InitWaypointsFromFile_Response__ros_msg_type * ros_message = static_cast<_InitWaypointsFromFile_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InitWaypointsFromFile_Response__ros_msg_type * ros_message = static_cast<const _InitWaypointsFromFile_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _InitWaypointsFromFile_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _InitWaypointsFromFile_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__InitWaypointsFromFile_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InitWaypointsFromFile_Response = {
  "uuv_control_msgs::srv",
  "InitWaypointsFromFile_Response",
  _InitWaypointsFromFile_Response__cdr_serialize,
  _InitWaypointsFromFile_Response__cdr_deserialize,
  _InitWaypointsFromFile_Response__get_serialized_size,
  _InitWaypointsFromFile_Response__max_serialized_size
};

static rosidl_message_type_support_t _InitWaypointsFromFile_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InitWaypointsFromFile_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, InitWaypointsFromFile_Response)() {
  return &_InitWaypointsFromFile_Response__type_support;
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
#include "uuv_control_msgs/srv/init_waypoints_from_file.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InitWaypointsFromFile__callbacks = {
  "uuv_control_msgs::srv",
  "InitWaypointsFromFile",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, InitWaypointsFromFile_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, InitWaypointsFromFile_Response)(),
};

static rosidl_service_type_support_t InitWaypointsFromFile__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InitWaypointsFromFile__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, InitWaypointsFromFile)() {
  return &InitWaypointsFromFile__handle;
}

#if defined(__cplusplus)
}
#endif
