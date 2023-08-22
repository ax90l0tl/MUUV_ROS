// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Request __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterManagerConfig_Request_
{
  using Type = GetThrusterManagerConfig_Request_<ContainerAllocator>;

  explicit GetThrusterManagerConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetThrusterManagerConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Request
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Request
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterManagerConfig_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterManagerConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterManagerConfig_Request_

// alias to use template instance with default allocator
using GetThrusterManagerConfig_Request =
  uuv_thruster_manager::srv::GetThrusterManagerConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Response __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterManagerConfig_Response_
{
  using Type = GetThrusterManagerConfig_Response_<ContainerAllocator>;

  explicit GetThrusterManagerConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tf_prefix = "";
      this->base_link = "";
      this->thruster_frame_base = "";
      this->thruster_topic_prefix = "";
      this->thruster_topic_suffix = "";
      this->timeout = 0.0;
      this->max_thrust = 0.0;
      this->n_thrusters = 0l;
    }
  }

  explicit GetThrusterManagerConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tf_prefix(_alloc),
    base_link(_alloc),
    thruster_frame_base(_alloc),
    thruster_topic_prefix(_alloc),
    thruster_topic_suffix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tf_prefix = "";
      this->base_link = "";
      this->thruster_frame_base = "";
      this->thruster_topic_prefix = "";
      this->thruster_topic_suffix = "";
      this->timeout = 0.0;
      this->max_thrust = 0.0;
      this->n_thrusters = 0l;
    }
  }

  // field types and members
  using _tf_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tf_prefix_type tf_prefix;
  using _base_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _base_link_type base_link;
  using _thruster_frame_base_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_frame_base_type thruster_frame_base;
  using _thruster_topic_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_topic_prefix_type thruster_topic_prefix;
  using _thruster_topic_suffix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_topic_suffix_type thruster_topic_suffix;
  using _timeout_type =
    double;
  _timeout_type timeout;
  using _max_thrust_type =
    double;
  _max_thrust_type max_thrust;
  using _n_thrusters_type =
    int32_t;
  _n_thrusters_type n_thrusters;
  using _allocation_matrix_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _allocation_matrix_type allocation_matrix;

  // setters for named parameter idiom
  Type & set__tf_prefix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tf_prefix = _arg;
    return *this;
  }
  Type & set__base_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->base_link = _arg;
    return *this;
  }
  Type & set__thruster_frame_base(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_frame_base = _arg;
    return *this;
  }
  Type & set__thruster_topic_prefix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_topic_prefix = _arg;
    return *this;
  }
  Type & set__thruster_topic_suffix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_topic_suffix = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__max_thrust(
    const double & _arg)
  {
    this->max_thrust = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Response
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__GetThrusterManagerConfig_Response
    std::shared_ptr<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterManagerConfig_Response_ & other) const
  {
    if (this->tf_prefix != other.tf_prefix) {
      return false;
    }
    if (this->base_link != other.base_link) {
      return false;
    }
    if (this->thruster_frame_base != other.thruster_frame_base) {
      return false;
    }
    if (this->thruster_topic_prefix != other.thruster_topic_prefix) {
      return false;
    }
    if (this->thruster_topic_suffix != other.thruster_topic_suffix) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->max_thrust != other.max_thrust) {
      return false;
    }
    if (this->n_thrusters != other.n_thrusters) {
      return false;
    }
    if (this->allocation_matrix != other.allocation_matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterManagerConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterManagerConfig_Response_

// alias to use template instance with default allocator
using GetThrusterManagerConfig_Response =
  uuv_thruster_manager::srv::GetThrusterManagerConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace uuv_thruster_manager
{

namespace srv
{

struct GetThrusterManagerConfig
{
  using Request = uuv_thruster_manager::srv::GetThrusterManagerConfig_Request;
  using Response = uuv_thruster_manager::srv::GetThrusterManagerConfig_Response;
};

}  // namespace srv

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_
