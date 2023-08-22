// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Request __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ThrusterManagerInfo_Request_
{
  using Type = ThrusterManagerInfo_Request_<ContainerAllocator>;

  explicit ThrusterManagerInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ThrusterManagerInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Request
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Request
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterManagerInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterManagerInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterManagerInfo_Request_

// alias to use template instance with default allocator
using ThrusterManagerInfo_Request =
  uuv_thruster_manager::srv::ThrusterManagerInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Response __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ThrusterManagerInfo_Response_
{
  using Type = ThrusterManagerInfo_Response_<ContainerAllocator>;

  explicit ThrusterManagerInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_thrusters = 0l;
      this->reference_frame = "";
    }
  }

  explicit ThrusterManagerInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_thrusters = 0l;
      this->reference_frame = "";
    }
  }

  // field types and members
  using _n_thrusters_type =
    int32_t;
  _n_thrusters_type n_thrusters;
  using _allocation_matrix_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _allocation_matrix_type allocation_matrix;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reference_frame_type reference_frame;

  // setters for named parameter idiom
  Type & set__n_thrusters(
    const int32_t & _arg)
  {
    this->n_thrusters = _arg;
    return *this;
  }
  Type & set__allocation_matrix(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->allocation_matrix = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Response
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__ThrusterManagerInfo_Response
    std::shared_ptr<uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterManagerInfo_Response_ & other) const
  {
    if (this->n_thrusters != other.n_thrusters) {
      return false;
    }
    if (this->allocation_matrix != other.allocation_matrix) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterManagerInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterManagerInfo_Response_

// alias to use template instance with default allocator
using ThrusterManagerInfo_Response =
  uuv_thruster_manager::srv::ThrusterManagerInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace uuv_thruster_manager
{

namespace srv
{

struct ThrusterManagerInfo
{
  using Request = uuv_thruster_manager::srv::ThrusterManagerInfo_Request;
  using Response = uuv_thruster_manager::srv::ThrusterManagerInfo_Response;
};

}  // namespace srv

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__STRUCT_HPP_
