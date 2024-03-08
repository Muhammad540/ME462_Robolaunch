// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#ifndef PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__BUILDER_HPP_
#define PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "player_commands/msg/detail/player_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace player_commands
{

namespace msg
{

namespace builder
{

class Init_PlayerCommand_frame_pos
{
public:
  explicit Init_PlayerCommand_frame_pos(::player_commands::msg::PlayerCommand & msg)
  : msg_(msg)
  {}
  ::player_commands::msg::PlayerCommand frame_pos(::player_commands::msg::PlayerCommand::_frame_pos_type arg)
  {
    msg_.frame_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::player_commands::msg::PlayerCommand msg_;
};

class Init_PlayerCommand_head_pos
{
public:
  Init_PlayerCommand_head_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayerCommand_frame_pos head_pos(::player_commands::msg::PlayerCommand::_head_pos_type arg)
  {
    msg_.head_pos = std::move(arg);
    return Init_PlayerCommand_frame_pos(msg_);
  }

private:
  ::player_commands::msg::PlayerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::player_commands::msg::PlayerCommand>()
{
  return player_commands::msg::builder::Init_PlayerCommand_head_pos();
}

}  // namespace player_commands

#endif  // PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__BUILDER_HPP_
