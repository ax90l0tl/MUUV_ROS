// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.h"
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__functions.h"
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


using _GetMBSMControllerParams_Request__ros_msg_type = uuv_control_msgs__srv__GetMBSMControllerParams_Request;

static bool _GetMBSMControllerParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMBSMControllerParams_Request__ros_msg_type * ros_message = static_cast<const _GetMBSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetMBSMControllerParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMBSMControllerParams_Request__ros_msg_type * ros_message = static_cast<_GetMBSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMBSMControllerParams_Request__ros_msg_type * ros_message = static_cast<const _GetMBSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMBSMControllerParams_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMBSMControllerParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMBSMControllerParams_Request = {
  "uuv_control_msgs::srv",
  "GetMBSMControllerParams_Request",
  _GetMBSMControllerParams_Request__cdr_serialize,
  _GetMBSMControllerParams_Request__cdr_deserialize,
  _GetMBSMControllerParams_Request__get_serialized_size,
  _GetMBSMControllerParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMBSMControllerParams_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMBSMControllerParams_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetMBSMControllerParams_Request)() {
  return &_GetMBSMControllerParams_Request__type_support;
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
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // adapt_slope, c, k, lambda_array, rho_0, rho_constant
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // adapt_slope, c, k, lambda_array, rho_0, rho_constant

// forward declare type support functions


using _GetMBSMControllerParams_Response__ros_msg_type = uuv_control_msgs__srv__GetMBSMControllerParams_Response;

static bool _GetMBSMControllerParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMBSMControllerParams_Response__ros_msg_type * ros_message = static_cast<const _GetMBSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lambda_array
  {
    size_t size = ros_message->lambda_array.size;
    auto array_ptr = ros_message->lambda_array.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rho_constant
  {
    size_t size = ros_message->rho_constant.size;
    auto array_ptr = ros_message->rho_constant.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: k
  {
    size_t size = ros_message->k.size;
    auto array_ptr = ros_message->k.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: c
  {
    size_t size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: adapt_slope
  {
    size_t size = ros_message->adapt_slope.size;
    auto array_ptr = ros_message->adapt_slope.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rho_0
  {
    size_t size = ros_message->rho_0.size;
    auto array_ptr = ros_message->rho_0.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: drift_prevent
  {
    cdr << ros_message->drift_prevent;
  }

  return true;
}

static bool _GetMBSMControllerParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMBSMControllerParams_Response__ros_msg_type * ros_message = static_cast<_GetMBSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lambda_array
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lambda_array.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lambda_array);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lambda_array, size)) {
      return "failed to create array for field 'lambda_array'";
    }
    auto array_ptr = ros_message->lambda_array.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rho_constant
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rho_constant.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rho_constant);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rho_constant, size)) {
      return "failed to create array for field 'rho_constant'";
    }
    auto array_ptr = ros_message->rho_constant.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: k
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->k.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->k);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->k, size)) {
      return "failed to create array for field 'k'";
    }
    auto array_ptr = ros_message->k.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: c
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->c.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->c);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->c, size)) {
      return "failed to create array for field 'c'";
    }
    auto array_ptr = ros_message->c.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: adapt_slope
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->adapt_slope.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->adapt_slope);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->adapt_slope, size)) {
      return "failed to create array for field 'adapt_slope'";
    }
    auto array_ptr = ros_message->adapt_slope.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rho_0
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rho_0.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rho_0);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rho_0, size)) {
      return "failed to create array for field 'rho_0'";
    }
    auto array_ptr = ros_message->rho_0.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: drift_prevent
  {
    cdr >> ros_message->drift_prevent;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMBSMControllerParams_Response__ros_msg_type * ros_message = static_cast<const _GetMBSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lambda_array
  {
    size_t array_size = ros_message->lambda_array.size;
    auto array_ptr = ros_message->lambda_array.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rho_constant
  {
    size_t array_size = ros_message->rho_constant.size;
    auto array_ptr = ros_message->rho_constant.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k
  {
    size_t array_size = ros_message->k.size;
    auto array_ptr = ros_message->k.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c
  {
    size_t array_size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adapt_slope
  {
    size_t array_size = ros_message->adapt_slope.size;
    auto array_ptr = ros_message->adapt_slope.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rho_0
  {
    size_t array_size = ros_message->rho_0.size;
    auto array_ptr = ros_message->rho_0.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drift_prevent
  {
    size_t item_size = sizeof(ros_message->drift_prevent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMBSMControllerParams_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lambda_array
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rho_constant
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: adapt_slope
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rho_0
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: drift_prevent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMBSMControllerParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__GetMBSMControllerParams_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMBSMControllerParams_Response = {
  "uuv_control_msgs::srv",
  "GetMBSMControllerParams_Response",
  _GetMBSMControllerParams_Response__cdr_serialize,
  _GetMBSMControllerParams_Response__cdr_deserialize,
  _GetMBSMControllerParams_Response__get_serialized_size,
  _GetMBSMControllerParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMBSMControllerParams_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMBSMControllerParams_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetMBSMControllerParams_Response)() {
  return &_GetMBSMControllerParams_Response__type_support;
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
#include "uuv_control_msgs/srv/get_mbsm_controller_params.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetMBSMControllerParams__callbacks = {
  "uuv_control_msgs::srv",
  "GetMBSMControllerParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetMBSMControllerParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetMBSMControllerParams_Response)(),
};

static rosidl_service_type_support_t GetMBSMControllerParams__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetMBSMControllerParams__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetMBSMControllerParams)() {
  return &GetMBSMControllerParams__handle;
}

#if defined(__cplusplus)
}
#endif
