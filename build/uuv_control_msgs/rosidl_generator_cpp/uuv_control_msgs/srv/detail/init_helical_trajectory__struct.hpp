// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/InitHelicalTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__STRUCT_HPP_

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
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitHelicalTrajectory_Request_
{
  using Type = InitHelicalTrajectory_Request_<ContainerAllocator>;

  explicit InitHelicalTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
      this->radius = 0.0;
      this->is_clockwise = false;
      this->angle_offset = 0.0;
      this->n_points = 0l;
      this->heading_offset = 0.0;
      this->max_forward_speed = 0.0;
      this->duration = 0.0;
      this->n_turns = 0.0;
      this->delta_z = 0.0;
    }
  }

  explicit InitHelicalTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
      this->radius = 0.0;
      this->is_clockwise = false;
      this->angle_offset = 0.0;
      this->n_points = 0l;
      this->heading_offset = 0.0;
      this->max_forward_speed = 0.0;
      this->duration = 0.0;
      this->n_turns = 0.0;
      this->delta_z = 0.0;
    }
  }

  // field types and members
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _start_now_type =
    bool;
  _start_now_type start_now;
  using _radius_type =
    double;
  _radius_type radius;
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _is_clockwise_type =
    bool;
  _is_clockwise_type is_clockwise;
  using _angle_offset_type =
    double;
  _angle_offset_type angle_offset;
  using _n_points_type =
    int32_t;
  _n_points_type n_points;
  using _heading_offset_type =
    double;
  _heading_offset_type heading_offset;
  using _max_forward_speed_type =
    double;
  _max_forward_speed_type max_forward_speed;
  using _duration_type =
    double;
  _duration_type duration;
  using _n_turns_type =
    double;
  _n_turns_type n_turns;
  using _delta_z_type =
    double;
  _delta_z_type delta_z;

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
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__is_clockwise(
    const bool & _arg)
  {
    this->is_clockwise = _arg;
    return *this;
  }
  Type & set__angle_offset(
    const double & _arg)
  {
    this->angle_offset = _arg;
    return *this;
  }
  Type & set__n_points(
    const int32_t & _arg)
  {
    this->n_points = _arg;
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
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__n_turns(
    const double & _arg)
  {
    this->n_turns = _arg;
    return *this;
  }
  Type & set__delta_z(
    const double & _arg)
  {
    this->delta_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Request
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Request
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitHelicalTrajectory_Request_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->start_now != other.start_now) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->is_clockwise != other.is_clockwise) {
      return false;
    }
    if (this->angle_offset != other.angle_offset) {
      return false;
    }
    if (this->n_points != other.n_points) {
      return false;
    }
    if (this->heading_offset != other.heading_offset) {
      return false;
    }
    if (this->max_forward_speed != other.max_forward_speed) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->n_turns != other.n_turns) {
      return false;
    }
    if (this->delta_z != other.delta_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitHelicalTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitHelicalTrajectory_Request_

// alias to use template instance with default allocator
using InitHelicalTrajectory_Request =
  uuv_control_msgs::srv::InitHelicalTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitHelicalTrajectory_Response_
{
  using Type = InitHelicalTrajectory_Response_<ContainerAllocator>;

  explicit InitHelicalTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit InitHelicalTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Response
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitHelicalTrajectory_Response
    std::shared_ptr<uuv_control_msgs::srv::InitHelicalTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitHelicalTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitHelicalTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitHelicalTrajectory_Response_

// alias to use template instance with default allocator
using InitHelicalTrajectory_Response =
  uuv_control_msgs::srv::InitHelicalTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct InitHelicalTrajectory
{
  using Request = uuv_control_msgs::srv::InitHelicalTrajectory_Request;
  using Response = uuv_control_msgs::srv::InitHelicalTrajectory_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__STRUCT_HPP_
