// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"

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
  const uuv_thruster_manager::srv::GetThrusterCurve_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min
  cdr << ros_message.min;
  // Member: max
  cdr << ros_message.max;
  // Member: n_points
  cdr << ros_message.n_points;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::GetThrusterCurve_Request & ros_message)
{
  // Member: min
  cdr >> ros_message.min;

  // Member: max
  cdr >> ros_message.max;

  // Member: n_points
  cdr >> ros_message.n_points;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::GetThrusterCurve_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max
  {
    size_t item_size = sizeof(ros_message.max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n_points
  {
    size_t item_size = sizeof(ros_message.n_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_GetThrusterCurve_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: n_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetThrusterCurve_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterCurve_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterCurve_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::GetThrusterCurve_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterCurve_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterCurve_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterCurve_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterCurve_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterCurve_Request__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve_Request",
  _GetThrusterCurve_Request__cdr_serialize,
  _GetThrusterCurve_Request__cdr_deserialize,
  _GetThrusterCurve_Request__get_serialized_size,
  _GetThrusterCurve_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterCurve_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterCurve_Request__callbacks,
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
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Request)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve_Request__handle;
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
  const uuv_thruster_manager::srv::GetThrusterCurve_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input
  {
    cdr << ros_message.input;
  }
  // Member: thrust
  {
    cdr << ros_message.thrust;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::GetThrusterCurve_Response & ros_message)
{
  // Member: input
  {
    cdr >> ros_message.input;
  }

  // Member: thrust
  {
    cdr >> ros_message.thrust;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::GetThrusterCurve_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input
  {
    size_t array_size = ros_message.input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thrust
  {
    size_t array_size = ros_message.thrust.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.thrust[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_GetThrusterCurve_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thrust
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

static bool _GetThrusterCurve_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterCurve_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterCurve_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::GetThrusterCurve_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterCurve_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::GetThrusterCurve_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterCurve_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterCurve_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterCurve_Response__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve_Response",
  _GetThrusterCurve_Response__cdr_serialize,
  _GetThrusterCurve_Response__cdr_deserialize,
  _GetThrusterCurve_Response__get_serialized_size,
  _GetThrusterCurve_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterCurve_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterCurve_Response__callbacks,
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
get_message_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Response)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve_Response__handle;
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

static service_type_support_callbacks_t _GetThrusterCurve__callbacks = {
  "uuv_thruster_manager::srv",
  "GetThrusterCurve",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterCurve_Response)(),
};

static rosidl_service_type_support_t _GetThrusterCurve__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterCurve__callbacks,
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
get_service_type_support_handle<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, GetThrusterCurve)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_GetThrusterCurve__handle;
}

#ifdef __cplusplus
}
#endif
