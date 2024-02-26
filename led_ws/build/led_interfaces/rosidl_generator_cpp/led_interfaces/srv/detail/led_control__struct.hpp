// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_HPP_
#define LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__led_interfaces__srv__LedControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__led_interfaces__srv__LedControl_Request __declspec(deprecated)
#endif

namespace led_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedControl_Request_
{
  using Type = LedControl_Request_<ContainerAllocator>;

  explicit LedControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pattern = "";
      this->color_r = 0l;
      this->color_g = 0l;
      this->color_b = 0l;
    }
  }

  explicit LedControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pattern(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pattern = "";
      this->color_r = 0l;
      this->color_g = 0l;
      this->color_b = 0l;
    }
  }

  // field types and members
  using _pattern_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pattern_type pattern;
  using _color_r_type =
    int32_t;
  _color_r_type color_r;
  using _color_g_type =
    int32_t;
  _color_g_type color_g;
  using _color_b_type =
    int32_t;
  _color_b_type color_b;

  // setters for named parameter idiom
  Type & set__pattern(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pattern = _arg;
    return *this;
  }
  Type & set__color_r(
    const int32_t & _arg)
  {
    this->color_r = _arg;
    return *this;
  }
  Type & set__color_g(
    const int32_t & _arg)
  {
    this->color_g = _arg;
    return *this;
  }
  Type & set__color_b(
    const int32_t & _arg)
  {
    this->color_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    led_interfaces::srv::LedControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const led_interfaces::srv::LedControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      led_interfaces::srv::LedControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      led_interfaces::srv::LedControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__led_interfaces__srv__LedControl_Request
    std::shared_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__led_interfaces__srv__LedControl_Request
    std::shared_ptr<led_interfaces::srv::LedControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedControl_Request_ & other) const
  {
    if (this->pattern != other.pattern) {
      return false;
    }
    if (this->color_r != other.color_r) {
      return false;
    }
    if (this->color_g != other.color_g) {
      return false;
    }
    if (this->color_b != other.color_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedControl_Request_

// alias to use template instance with default allocator
using LedControl_Request =
  led_interfaces::srv::LedControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace led_interfaces


#ifndef _WIN32
# define DEPRECATED__led_interfaces__srv__LedControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__led_interfaces__srv__LedControl_Response __declspec(deprecated)
#endif

namespace led_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedControl_Response_
{
  using Type = LedControl_Response_<ContainerAllocator>;

  explicit LedControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit LedControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    led_interfaces::srv::LedControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const led_interfaces::srv::LedControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      led_interfaces::srv::LedControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      led_interfaces::srv::LedControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__led_interfaces__srv__LedControl_Response
    std::shared_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__led_interfaces__srv__LedControl_Response
    std::shared_ptr<led_interfaces::srv::LedControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedControl_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedControl_Response_

// alias to use template instance with default allocator
using LedControl_Response =
  led_interfaces::srv::LedControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace led_interfaces

namespace led_interfaces
{

namespace srv
{

struct LedControl
{
  using Request = led_interfaces::srv::LedControl_Request;
  using Response = led_interfaces::srv::LedControl_Response;
};

}  // namespace srv

}  // namespace led_interfaces

#endif  // LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_HPP_
