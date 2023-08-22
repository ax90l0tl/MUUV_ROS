// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/InitRectTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitRectTrajectory_Request_
{
  using Type = InitRectTrajectory_Request_<ContainerAllocator>;

  explicit InitRectTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    origin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
      this->height = 0.0;
      this->width = 0.0;
      this->angle_offset = 0.0;
      this->heading_offset = 0.0;
      this->max_forward_speed = 0.0;
    }
  }

  explicit InitRectTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    origin(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
      this->height = 0.0;
      this->width = 0.0;
      this->angle_offset = 0.0;
      this->heading_offset = 0.0;
      this->max_forward_speed = 0.0;
    }
  }

  // field types and members
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _start_now_type =
    bool;
  _start_now_type start_now;
  using _origin_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _origin_type origin;
  using _height_type =
    double;
  _height_type height;
  using _width_type =
    double;
  _width_type width;
  using _angle_offset_type =
    double;
  _angle_offset_type angle_offset;
  using _heading_offset_type =
    double;
  _heading_offset_type heading_offset;
  using _max_forward_speed_type =
    double;
  _max_forward_speed_type max_forward_speed;

  // setters for named parameter idiom
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__start_now(
    const bool & _arg)
  {
    this->start_now = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__angle_offset(
    const double & _arg)
  {
    this->angle_offset = _arg;
    return *this;
  }
  Type & set__heading_offset(
    const double & _arg)
  {
    this->heading_offset = _arg;
    return *this;
  }
  Type & set__max_forward_speed(
    const double & _arg)
  {
    this->max_forward_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Request
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Request
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitRectTrajectory_Request_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->start_now != other.start_now) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->angle_offset != other.angle_offset) {
      return false;
    }
    if (this->heading_offset != other.heading_offset) {
      return false;
    }
    if (this->max_forward_speed != other.max_forward_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitRectTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitRectTrajectory_Request_

// alias to use template instance with default allocator
using InitRectTrajectory_Request =
  uuv_control_msgs::srv::InitRectTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitRectTrajectory_Response_
{
  using Type = InitRectTrajectory_Response_<ContainerAllocator>;

  explicit InitRectTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit InitRectTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Response
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitRectTrajectory_Response
    std::shared_ptr<uuv_control_msgs::srv::InitRectTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitRectTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitRectTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitRectTrajectory_Response_

// alias to use template instance with default allocator
using InitRectTrajectory_Response =
  uuv_control_msgs::srv::InitRectTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct InitRectTrajectory
{
  using Request = uuv_control_msgs::srv::InitRectTrajectory_Request;
  using Response = uuv_control_msgs::srv::InitRectTrajectory_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__STRUCT_HPP_
