// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__functions.h"
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


using _GetThrusterManagerConfig_Request__ros_msg_type = uuv_thruster_manager__srv__GetThrusterManagerConfig_Request;

static bool _GetThrusterManagerConfig_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<const _GetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetThrusterManagerConfig_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<_GetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<const _GetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetThrusterManagerConfig_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Request(
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

static size_t _GetThrusterManagerConfig_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetThrusterManagerConfig_Request = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig_Request",
  _GetThrusterManagerConfig_Request__cdr_serialize,
  _GetThrusterManagerConfig_Request__cdr_deserialize,
  _GetThrusterManagerConfig_Request__get_serialized_size,
  _GetThrusterManagerConfig_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterManagerConfig_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetThrusterManagerConfig_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)() {
  return &_GetThrusterManagerConfig_Request__type_support;
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
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // allocation_matrix
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // allocation_matrix
#include "rosidl_runtime_c/string.h"  // base_link, tf_prefix, thruster_frame_base, thruster_topic_prefix, thruster_topic_suffix
#include "rosidl_runtime_c/string_functions.h"  // base_link, tf_prefix, thruster_frame_base, thruster_topic_prefix, thruster_topic_suffix

// forward declare type support functions


using _GetThrusterManagerConfig_Response__ros_msg_type = uuv_thruster_manager__srv__GetThrusterManagerConfig_Response;

static bool _GetThrusterManagerConfig_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<const _GetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tf_prefix
  {
    const rosidl_runtime_c__String * str = &ros_message->tf_prefix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: base_link
  {
    const rosidl_runtime_c__String * str = &ros_message->base_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_frame_base
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_frame_base;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_topic_prefix
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_topic_prefix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_topic_suffix
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_topic_suffix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  // Field name: max_thrust
  {
    cdr << ros_message->max_thrust;
  }

  // Field name: n_thrusters
  {
    cdr << ros_message->n_thrusters;
  }

  // Field name: allocation_matrix
  {
    size_t size = ros_message->allocation_matrix.size;
    auto array_ptr = ros_message->allocation_matrix.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetThrusterManagerConfig_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<_GetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tf_prefix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tf_prefix.data) {
      rosidl_runtime_c__String__init(&ros_message->tf_prefix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tf_prefix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tf_prefix'\n");
      return false;
    }
  }

  // Field name: base_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->base_link.data) {
      rosidl_runtime_c__String__init(&ros_message->base_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->base_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'base_link'\n");
      return false;
    }
  }

  // Field name: thruster_frame_base
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_frame_base.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_frame_base);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_frame_base,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_frame_base'\n");
      return false;
    }
  }

  // Field name: thruster_topic_prefix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_topic_prefix.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_topic_prefix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_topic_prefix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_topic_prefix'\n");
      return false;
    }
  }

  // Field name: thruster_topic_suffix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_topic_suffix.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_topic_suffix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_topic_suffix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_topic_suffix'\n");
      return false;
    }
  }

  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  // Field name: max_thrust
  {
    cdr >> ros_message->max_thrust;
  }

  // Field name: n_thrusters
  {
    cdr >> ros_message->n_thrusters;
  }

  // Field name: allocation_matrix
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->allocation_matrix.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->allocation_matrix);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->allocation_matrix, size)) {
      return "failed to create array for field 'allocation_matrix'";
    }
    auto array_ptr = ros_message->allocation_matrix.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<const _GetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tf_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tf_prefix.size + 1);
  // field.name base_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_link.size + 1);
  // field.name thruster_frame_base
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_frame_base.size + 1);
  // field.name thruster_topic_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_topic_prefix.size + 1);
  // field.name thruster_topic_suffix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_topic_suffix.size + 1);
  // field.name timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_thrust
  {
    size_t item_size = sizeof(ros_message->max_thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n_thrusters
  {
    size_t item_size = sizeof(ros_message->n_thrusters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name allocation_matrix
  {
    size_t array_size = ros_message->allocation_matrix.size;
    auto array_ptr = ros_message->allocation_matrix.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetThrusterManagerConfig_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tf_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: base_link
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_frame_base
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_topic_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_topic_suffix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_thrust
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: n_thrusters
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: allocation_matrix
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

static size_t _GetThrusterManagerConfig_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_thruster_manager__srv__GetThrusterManagerConfig_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetThrusterManagerConfig_Response = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig_Response",
  _GetThrusterManagerConfig_Response__cdr_serialize,
  _GetThrusterManagerConfig_Response__cdr_deserialize,
  _GetThrusterManagerConfig_Response__get_serialized_size,
  _GetThrusterManagerConfig_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterManagerConfig_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetThrusterManagerConfig_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)() {
  return &_GetThrusterManagerConfig_Response__type_support;
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
#include "uuv_thruster_manager/srv/get_thruster_manager_config.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetThrusterManagerConfig__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)(),
};

static rosidl_service_type_support_t GetThrusterManagerConfig__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetThrusterManagerConfig__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterManagerConfig)() {
  return &GetThrusterManagerConfig__handle;
}

#if defined(__cplusplus)
}
#endif
