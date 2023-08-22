// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Request __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterCurve_Request_
{
  using Type = GetThrusterCurve_Request_<ContainerAllocator>;

  explicit GetThrusterCurve_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0;
      this->max = 0.0;
      this->n_points = 0l;
    }
  }

  explicit GetThrusterCurve_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0;
      this->max = 0.0;
      this->n_points = 0l;
    }
  }

  // field types and members
  using _min_type =
    double;
  _min_type min;
  using _max_type =
    double;
  _max_type max;
  using _n_points_type =
    int32_t;
  _n_points_type n_points;

  // setters for named parameter idiom
  Type & set__min(
    const double & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const double & _arg)
  {
    this->max = _arg;
    return *this;
  }
  Type & set__n_points(
    const int32_t & _arg)
  {
    this->n_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Request
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Request
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterCurve_Request_ & other) const
  {
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    if (this->n_points != other.n_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterCurve_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterCurve_Request_

// alias to use template instance with default allocator
using GetThrusterCurve_Request =
  uuv_thruster_manager::srv::GetThrusterCurve_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Response __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterCurve_Response_
{
  using Type = GetThrusterCurve_Response_<ContainerAllocator>;

  explicit GetThrusterCurve_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetThrusterCurve_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _input_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _input_type input;
  using _thrust_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _thrust_type thrust;

  // setters for named parameter idiom
  Type & set__input(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__thrust(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->thrust = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Response
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterCurve_Response
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterCurve_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterCurve_Response_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterCurve_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterCurve_Response_

// alias to use template instance with default allocator
using GetThrusterCurve_Response =
  uuv_thruster_manager::srv::GetThrusterCurve_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace uuv_thruster_manager
{

namespace srv
{

struct GetThrusterCurve
{
  using Request = uuv_thruster_manager::srv::GetThrusterCurve_Request;
  using Response = uuv_thruster_manager::srv::GetThrusterCurve_Response;
};

}  // namespace srv

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__STRUCT_HPP_
