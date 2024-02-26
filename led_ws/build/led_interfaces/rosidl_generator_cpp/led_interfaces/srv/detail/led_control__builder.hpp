// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef LED_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_
#define LED_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "led_interfaces/srv/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace led_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedControl_Request_color_b
{
public:
  explicit Init_LedControl_Request_color_b(::led_interfaces::srv::LedControl_Request & msg)
  : msg_(msg)
  {}
  ::led_interfaces::srv::LedControl_Request color_b(::led_interfaces::srv::LedControl_Request::_color_b_type arg)
  {
    msg_.color_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Request msg_;
};

class Init_LedControl_Request_color_g
{
public:
  explicit Init_LedControl_Request_color_g(::led_interfaces::srv::LedControl_Request & msg)
  : msg_(msg)
  {}
  Init_LedControl_Request_color_b color_g(::led_interfaces::srv::LedControl_Request::_color_g_type arg)
  {
    msg_.color_g = std::move(arg);
    return Init_LedControl_Request_color_b(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Request msg_;
};

class Init_LedControl_Request_color_r
{
public:
  explicit Init_LedControl_Request_color_r(::led_interfaces::srv::LedControl_Request & msg)
  : msg_(msg)
  {}
  Init_LedControl_Request_color_g color_r(::led_interfaces::srv::LedControl_Request::_color_r_type arg)
  {
    msg_.color_r = std::move(arg);
    return Init_LedControl_Request_color_g(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Request msg_;
};

class Init_LedControl_Request_pattern
{
public:
  Init_LedControl_Request_pattern()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedControl_Request_color_r pattern(::led_interfaces::srv::LedControl_Request::_pattern_type arg)
  {
    msg_.pattern = std::move(arg);
    return Init_LedControl_Request_color_r(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::srv::LedControl_Request>()
{
  return led_interfaces::srv::builder::Init_LedControl_Request_pattern();
}

}  // namespace led_interfaces


namespace led_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedControl_Response_message
{
public:
  explicit Init_LedControl_Response_message(::led_interfaces::srv::LedControl_Response & msg)
  : msg_(msg)
  {}
  ::led_interfaces::srv::LedControl_Response message(::led_interfaces::srv::LedControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Response msg_;
};

class Init_LedControl_Response_success
{
public:
  Init_LedControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedControl_Response_message success(::led_interfaces::srv::LedControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LedControl_Response_message(msg_);
  }

private:
  ::led_interfaces::srv::LedControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::srv::LedControl_Response>()
{
  return led_interfaces::srv::builder::Init_LedControl_Response_success();
}

}  // namespace led_interfaces

#endif  // LED_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_
