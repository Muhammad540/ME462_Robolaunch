// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef LED_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_
#define LED_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "led_interfaces/srv/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pattern
  {
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
    out << ", ";
  }

  // member: color_r
  {
    out << "color_r: ";
    rosidl_generator_traits::value_to_yaml(msg.color_r, out);
    out << ", ";
  }

  // member: color_g
  {
    out << "color_g: ";
    rosidl_generator_traits::value_to_yaml(msg.color_g, out);
    out << ", ";
  }

  // member: color_b
  {
    out << "color_b: ";
    rosidl_generator_traits::value_to_yaml(msg.color_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pattern
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
    out << "\n";
  }

  // member: color_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_r: ";
    rosidl_generator_traits::value_to_yaml(msg.color_r, out);
    out << "\n";
  }

  // member: color_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_g: ";
    rosidl_generator_traits::value_to_yaml(msg.color_g, out);
    out << "\n";
  }

  // member: color_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_b: ";
    rosidl_generator_traits::value_to_yaml(msg.color_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::srv::LedControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::srv::LedControl_Request & msg)
{
  return led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::srv::LedControl_Request>()
{
  return "led_interfaces::srv::LedControl_Request";
}

template<>
inline const char * name<led_interfaces::srv::LedControl_Request>()
{
  return "led_interfaces/srv/LedControl_Request";
}

template<>
struct has_fixed_size<led_interfaces::srv::LedControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<led_interfaces::srv::LedControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<led_interfaces::srv::LedControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LedControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::srv::LedControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::srv::LedControl_Response & msg)
{
  return led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::srv::LedControl_Response>()
{
  return "led_interfaces::srv::LedControl_Response";
}

template<>
inline const char * name<led_interfaces::srv::LedControl_Response>()
{
  return "led_interfaces/srv/LedControl_Response";
}

template<>
struct has_fixed_size<led_interfaces::srv::LedControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<led_interfaces::srv::LedControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<led_interfaces::srv::LedControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<led_interfaces::srv::LedControl>()
{
  return "led_interfaces::srv::LedControl";
}

template<>
inline const char * name<led_interfaces::srv::LedControl>()
{
  return "led_interfaces/srv/LedControl";
}

template<>
struct has_fixed_size<led_interfaces::srv::LedControl>
  : std::integral_constant<
    bool,
    has_fixed_size<led_interfaces::srv::LedControl_Request>::value &&
    has_fixed_size<led_interfaces::srv::LedControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<led_interfaces::srv::LedControl>
  : std::integral_constant<
    bool,
    has_bounded_size<led_interfaces::srv::LedControl_Request>::value &&
    has_bounded_size<led_interfaces::srv::LedControl_Response>::value
  >
{
};

template<>
struct is_service<led_interfaces::srv::LedControl>
  : std::true_type
{
};

template<>
struct is_service_request<led_interfaces::srv::LedControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<led_interfaces::srv::LedControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LED_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_
