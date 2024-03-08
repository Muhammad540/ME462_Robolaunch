// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#ifndef PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_H_
#define PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'head_pos'
// Member 'frame_pos'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlayerCommand in the package player_commands.
/**
  * pressed can be 0 or 1, 0 means not pressed, 1 means pressed 
 */
typedef struct player_commands__msg__PlayerCommand
{
  /// x , y
  rosidl_runtime_c__float__Sequence head_pos;
  /// x, y
  rosidl_runtime_c__float__Sequence frame_pos;
} player_commands__msg__PlayerCommand;

// Struct for a sequence of player_commands__msg__PlayerCommand.
typedef struct player_commands__msg__PlayerCommand__Sequence
{
  player_commands__msg__PlayerCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} player_commands__msg__PlayerCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLAYER_COMMANDS__MSG__DETAIL__PLAYER_COMMAND__STRUCT_H_
