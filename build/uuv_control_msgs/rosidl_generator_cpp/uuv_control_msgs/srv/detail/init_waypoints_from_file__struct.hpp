// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_HPP_

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
// Member 'filename'
// Member 'interpolator'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitWaypointsFromFile_Request_
{
  using Type = InitWaypointsFromFile_Request_<ContainerAllocator>;

  explicit InitWaypointsFromFile_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    filename(_init),
    interpolator(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
    }
  }

  explicit InitWaypointsFromFile_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    filename(_alloc, _init),
    interpolator(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_now = false;
    }
  }

  // field types and members
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _start_now_type =
    bool;
  _start_now_type start_now;
  using _filename_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _filename_type filename;
  using _interpolator_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _interpolator_type interpolator;

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
  Type & set__filename(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__interpolator(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->interpolator = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> LIPB;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CUBIC;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> DUBINS;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> LINEAR;

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Request
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Request
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitWaypointsFromFile_Request_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->start_now != other.start_now) {
      return false;
    }
    if (this->filename != other.filename) {
      return false;
    }
    if (this->interpolator != other.interpolator) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitWaypointsFromFile_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitWaypointsFromFile_Request_

// alias to use template instance with default allocator
using InitWaypointsFromFile_Request =
  uuv_control_msgs::srv::InitWaypointsFromFile_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
InitWaypointsFromFile_Request_<ContainerAllocator>::LIPB = "lipb";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
InitWaypointsFromFile_Request_<ContainerAllocator>::CUBIC = "cubic";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
InitWaypointsFromFile_Request_<ContainerAllocator>::DUBINS = "dubins";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
InitWaypointsFromFile_Request_<ContainerAllocator>::LINEAR = "linear";

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InitWaypointsFromFile_Response_
{
  using Type = InitWaypointsFromFile_Response_<ContainerAllocator>;

  explicit InitWaypointsFromFile_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit InitWaypointsFromFile_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Response
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__InitWaypointsFromFile_Response
    std::shared_ptr<uuv_control_msgs::srv::InitWaypointsFromFile_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitWaypointsFromFile_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitWaypointsFromFile_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitWaypointsFromFile_Response_

// alias to use template instance with default allocator
using InitWaypointsFromFile_Response =
  uuv_control_msgs::srv::InitWaypointsFromFile_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct InitWaypointsFromFile
{
  using Request = uuv_control_msgs::srv::InitWaypointsFromFile_Request;
  using Response = uuv_control_msgs::srv::InitWaypointsFromFile_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__STRUCT_HPP_
