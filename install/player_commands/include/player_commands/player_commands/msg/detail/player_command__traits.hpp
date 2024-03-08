// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#ifndef PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__TRAITS_HPP_
#define PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "player_commands/msg/detail/player_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace player_commands
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlayerCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: head_pos
  {
    if (msg.head_pos.size() == 0) {
      out << "head_pos: []";
    } else {
      out << "head_pos: [";
      size_t pending_items = msg.head_pos.size();
      for (auto item : msg.head_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_pos
  {
    if (msg.frame_pos.size() == 0) {
      out << "frame_pos: []";
    } else {
      out << "frame_pos: [";
      size_t pending_items = msg.frame_pos.size();
      for (auto item : msg.frame_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: head_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.head_pos.size() == 0) {
      out << "head_pos: []\n";
    } else {
      out << "head_pos:\n";
      for (auto item : msg.head_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: frame_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frame_pos.size() == 0) {
      out << "frame_pos: []\n";
    } else {
      out << "frame_pos:\n";
      for (auto item : msg.frame_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayerCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace player_commands

namespace rosidl_generator_traits
{

[[deprecated("use player_commands::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const player_commands::msg::PlayerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  player_commands::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use player_commands::msg::to_yaml() instead")]]
inline std::string to_yaml(const player_commands::msg::PlayerCommand & msg)
{
  return player_commands::msg::to_yaml(msg);
}

template<>
inline const char * data_type<player_commands::msg::PlayerCommand>()
{
  return "player_commands::msg::PlayerCommand";
}

template<>
inline const char * name<player_commands::msg::PlayerCommand>()
{
  return "player_commands/msg/PlayerCommand";
}

template<>
struct has_fixed_size<player_commands::msg::PlayerCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<player_commands::msg::PlayerCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<player_commands::msg::PlayerCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__TRAITS_HPP_
