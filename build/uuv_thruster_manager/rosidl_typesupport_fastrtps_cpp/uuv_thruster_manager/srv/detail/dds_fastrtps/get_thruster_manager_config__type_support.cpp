// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_serialize(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::GetThrusterManagerConfig_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_GetThrusterManagerConfig_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetThrusterManagerConfig_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterManagerConfig_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterManagerConfig_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterManagerConfig_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterManagerConfig_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterManagerConfig_Request__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig_Request",
  _GetThrusterManagerConfig_Request__cdr_serialize,
  _GetThrusterManagerConfig_Request__cdr_deserialize,
  _GetThrusterManagerConfig_Request__get_serialized_size,
  _GetThrusterManagerConfig_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterManagerConfig_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterManagerConfig_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_serialize(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tf_prefix
  cdr << ros_message.tf_prefix;
  // Member: base_link
  cdr << ros_message.base_link;
  // Member: thruster_frame_base
  cdr << ros_message.thruster_frame_base;
  // Member: thruster_topic_prefix
  cdr << ros_message.thruster_topic_prefix;
  // Member: thruster_topic_suffix
  cdr << ros_message.thruster_topic_suffix;
  // Member: timeout
  cdr << ros_message.timeout;
  // Member: max_thrust
  cdr << ros_message.max_thrust;
  // Member: n_thrusters
  cdr << ros_message.n_thrusters;
  // Member: allocation_matrix
  {
    cdr << ros_message.allocation_matrix;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & ros_message)
{
  // Member: tf_prefix
  cdr >> ros_message.tf_prefix;

  // Member: base_link
  cdr >> ros_message.base_link;

  // Member: thruster_frame_base
  cdr >> ros_message.thruster_frame_base;

  // Member: thruster_topic_prefix
  cdr >> ros_message.thruster_topic_prefix;

  // Member: thruster_topic_suffix
  cdr >> ros_message.thruster_topic_suffix;

  // Member: timeout
  cdr >> ros_message.timeout;

  // Member: max_thrust
  cdr >> ros_message.max_thrust;

  // Member: n_thrusters
  cdr >> ros_message.n_thrusters;

  // Member: allocation_matrix
  {
    cdr >> ros_message.allocation_matrix;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tf_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tf_prefix.size() + 1);
  // Member: base_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.base_link.size() + 1);
  // Member: thruster_frame_base
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.thruster_frame_base.size() + 1);
  // Member: thruster_topic_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.thruster_topic_prefix.size() + 1);
  // Member: thruster_topic_suffix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.thruster_topic_suffix.size() + 1);
  // Member: timeout
  {
    size_t item_size = sizeof(ros_message.timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_thrust
  {
    size_t item_size = sizeof(ros_message.max_thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n_thrusters
  {
    size_t item_size = sizeof(ros_message.n_thrusters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: allocation_matrix
  {
    size_t array_size = ros_message.allocation_matrix.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.allocation_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_GetThrusterManagerConfig_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tf_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: base_link
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: thruster_frame_base
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: thruster_topic_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: thruster_topic_suffix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_thrust
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: n_thrusters
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: allocation_matrix
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

static bool _GetThrusterManagerConfig_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterManagerConfig_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterManagerConfig_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterManagerConfig_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterManagerConfig_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterManagerConfig_Response__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig_Response",
  _GetThrusterManagerConfig_Response__cdr_serialize,
  _GetThrusterManagerConfig_Response__cdr_deserialize,
  _GetThrusterManagerConfig_Response__get_serialized_size,
  _GetThrusterManagerConfig_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterManagerConfig_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterManagerConfig_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetThrusterManagerConfig__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterManagerConfig",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig_Response)(),
};

static rosidl_service_type_support_t _GetThrusterManagerConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterManagerConfig__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterManagerConfig>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterManagerConfig)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterManagerConfig__handle;
}

#ifdef __cplusplus
}
#endif
