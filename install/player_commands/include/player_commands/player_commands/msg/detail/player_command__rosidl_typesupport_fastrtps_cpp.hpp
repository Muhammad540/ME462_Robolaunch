// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#ifndef PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "player_commands/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "player_commands/msg/detail/player_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace player_commands
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_player_commands
cdr_serialize(
  const player_commands::msg::PlayerCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_player_commands
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  player_commands::msg::PlayerCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_player_commands
get_serialized_size(
  const player_commands::msg::PlayerCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_player_commands
max_serialized_size_PlayerCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace player_commands

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_player_commands
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, player_commands, msg, PlayerCommand)();

#ifdef __cplusplus
}
#endif

#endif  // PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
