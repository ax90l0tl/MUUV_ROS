// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_control_msgs/msg/detail/waypoint_set__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WaypointSet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_control_msgs::msg::WaypointSet(_init);
}

void WaypointSet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_control_msgs::msg::WaypointSet *>(message_memory);
  typed_message->~WaypointSet();
}

size_t size_function__WaypointSet__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointSet__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointSet__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void resize_function__WaypointSet__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WaypointSet_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::msg::WaypointSet, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::msg::WaypointSet, start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<uuv_control_msgs::msg::Waypoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::msg::WaypointSet, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointSet__waypoints,  // size() function pointer
    get_const_function__WaypointSet__waypoints,  // get_const(index) function pointer
    get_function__WaypointSet__waypoints,  // get(index) function pointer
    resize_function__WaypointSet__waypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WaypointSet_message_members = {
  "uuv_control_msgs::msg",  // message namespace
  "WaypointSet",  // message name
  3,  // number of fields
  sizeof(uuv_control_msgs::msg::WaypointSet),
  WaypointSet_message_member_array,  // message members
  WaypointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointSet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WaypointSet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WaypointSet_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::msg::WaypointSet>()
{
  return &::uuv_control_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointSet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, msg, WaypointSet)() {
  return &::uuv_control_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointSet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
