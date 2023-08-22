// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__functions.h"
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


// forward declare type support functions


using _GetThrusterCurve_Request__ros_msg_type = uuv_thruster_manager__srv__GetThrusterCurve_Request;

static bool _GetThrusterCurve_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetThrusterCurve_Request__ros_msg_type * ros_message = static_cast<const _GetThrusterCurve_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: min
  {
    cdr << ros_message->min;
  }

  // Field name: max
  {
    cdr << ros_message->max;
  }

  // Field name: n_points
  {
    cdr << ros_message->n_points;
  }

  return true;
}

static bool _GetThrusterCurve_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetThrusterCurve_Request__ros_msg_type * ros_message = static_cast<_GetThrusterCurve_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: min
  {
    cdr >> ros_message->min;
  }

  // Field name: max
  {
    cdr >> ros_message->max;
  }

  // Field name: n_points
  {
    cdr >> ros_message->n_points;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetThrusterCurve_Request__ros_msg_type * ros_message = static_cast<const _GetThrusterCurve_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name min
  {
    size_t item_size = sizeof(ros_message->min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max
  {
    size_t item_size = sizeof(ros_message->max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n_points
  {
    size_t item_size = sizeof(ros_message->n_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetThrusterCurve_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: n_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetThrusterCurve_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetThrusterCurve_Request = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve_Request",
  _GetThrusterCurve_Request__cdr_serialize,
  _GetThrusterCurve_Request__cdr_deserialize,
  _GetThrusterCurve_Request__get_serialized_size,
  _GetThrusterCurve_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterCurve_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetThrusterCurve_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)() {
  return &_GetThrusterCurve_Request__type_support;
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
// #include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // input, thrust
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // input, thrust

// forward declare type support functions


using _GetThrusterCurve_Response__ros_msg_type = uuv_thruster_manager__srv__GetThrusterCurve_Response;

static bool _GetThrusterCurve_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetThrusterCurve_Response__ros_msg_type * ros_message = static_cast<const _GetThrusterCurve_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    size_t size = ros_message->input.size;
    auto array_ptr = ros_message->input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: thrust
  {
    size_t size = ros_message->thrust.size;
    auto array_ptr = ros_message->thrust.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetThrusterCurve_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetThrusterCurve_Response__ros_msg_type * ros_message = static_cast<_GetThrusterCurve_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->input);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->input, size)) {
      return "failed to create array for field 'input'";
    }
    auto array_ptr = ros_message->input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: thrust
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->thrust.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->thrust);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->thrust, size)) {
      return "failed to create array for field 'thrust'";
    }
    auto array_ptr = ros_message->thrust.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetThrusterCurve_Response__ros_msg_type * ros_message = static_cast<const _GetThrusterCurve_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input
  {
    size_t array_size = ros_message->input.size;
    auto array_ptr = ros_message->input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thrust
  {
    size_t array_size = ros_message->thrust.size;
    auto array_ptr = ros_message->thrust.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetThrusterCurve_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thrust
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetThrusterCurve_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_thruster_manager__srv__GetThrusterCurve_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetThrusterCurve_Response = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve_Response",
  _GetThrusterCurve_Response__cdr_serialize,
  _GetThrusterCurve_Response__cdr_deserialize,
  _GetThrusterCurve_Response__get_serialized_size,
  _GetThrusterCurve_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterCurve_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetThrusterCurve_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)() {
  return &_GetThrusterCurve_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_thruster_manager/srv/get_thruster_curve.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetThrusterCurve__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)(),
};

static rosidl_service_type_support_t GetThrusterCurve__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetThrusterCurve__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve)() {
  return &GetThrusterCurve__handle;
}

#if defined(__cplusplus)
}
#endif
