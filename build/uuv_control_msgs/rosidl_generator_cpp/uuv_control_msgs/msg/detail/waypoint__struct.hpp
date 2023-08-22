// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_forward_speed = 0.0;
      this->heading_offset = 0.0;
      this->use_fixed_heading = false;
      this->radius_of_acceptance = 0.0;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_forward_speed = 0.0;
      this->heading_offset = 0.0;
      this->use_fixed_heading = false;
      this->radius_of_acceptance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _max_forward_speed_type =
    double;
  _max_forward_speed_type max_forward_speed;
  using _heading_offset_type =
    double;
  _heading_offset_type heading_offset;
  using _use_fixed_heading_type =
    bool;
  _use_fixed_heading_type use_fixed_heading;
  using _radius_of_acceptance_type =
    double;
  _radius_of_acceptance_type radius_of_acceptance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__max_forward_speed(
    const double & _arg)
  {
    this->max_forward_speed = _arg;
    return *this;
  }
  Type & set__heading_offset(
    const double & _arg)
  {
    this->heading_offset = _arg;
    return *this;
  }
  Type & set__use_fixed_heading(
    const bool & _arg)
  {
    this->use_fixed_heading = _arg;
    return *this;
  }
  Type & set__radius_of_acceptance(
    const double & _arg)
  {
    this->radius_of_acceptance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__msg__Waypoint
    std::shared_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__msg__Waypoint
    std::shared_ptr<uuv_control_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->max_forward_speed != other.max_forward_speed) {
      return false;
    }
    if (this->heading_offset != other.heading_offset) {
      return false;
    }
    if (this->use_fixed_heading != other.use_fixed_heading) {
      return false;
    }
    if (this->radius_of_acceptance != other.radius_of_acceptance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  uuv_control_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
