// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#ifndef PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_HPP_
#define PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__player_commands__msg__PlayerCommand __attribute__((deprecated))
#else
# define DEPRECATED__player_commands__msg__PlayerCommand __declspec(deprecated)
#endif

namespace player_commands
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlayerCommand_
{
  using Type = PlayerCommand_<ContainerAllocator>;

  explicit PlayerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PlayerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _head_pos_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _head_pos_type head_pos;
  using _frame_pos_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _frame_pos_type frame_pos;

  // setters for named parameter idiom
  Type & set__head_pos(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->head_pos = _arg;
    return *this;
  }
  Type & set__frame_pos(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->frame_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    player_commands::msg::PlayerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const player_commands::msg::PlayerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      player_commands::msg::PlayerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      player_commands::msg::PlayerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__player_commands__msg__PlayerCommand
    std::shared_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__player_commands__msg__PlayerCommand
    std::shared_ptr<player_commands::msg::PlayerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayerCommand_ & other) const
  {
    if (this->head_pos != other.head_pos) {
      return false;
    }
    if (this->frame_pos != other.frame_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayerCommand_

// alias to use template instance with default allocator
using PlayerCommand =
  player_commands::msg::PlayerCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace player_commands

#endif  // PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_HPP_
