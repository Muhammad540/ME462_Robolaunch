// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "player_commands/msg/detail/player_command__rosidl_typesupport_introspection_c.h"
#include "player_commands/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "player_commands/msg/detail/player_command__functions.h"
#include "player_commands/msg/detail/player_command__struct.h"


// Include directives for member types
// Member `head_pos`
// Member `frame_pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  player_commands__msg__PlayerCommand__init(message_memory);
}

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_fini_function(void * message_memory)
{
  player_commands__msg__PlayerCommand__fini(message_memory);
}

size_t player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__size_function__PlayerCommand__head_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__head_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__head_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__fetch_function__PlayerCommand__head_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__head_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__assign_function__PlayerCommand__head_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__head_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__resize_function__PlayerCommand__head_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__size_function__PlayerCommand__frame_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__frame_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__frame_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__fetch_function__PlayerCommand__frame_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__frame_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__assign_function__PlayerCommand__frame_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__frame_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__resize_function__PlayerCommand__frame_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_member_array[2] = {
  {
    "head_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(player_commands__msg__PlayerCommand, head_pos),  // bytes offset in struct
    NULL,  // default value
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__size_function__PlayerCommand__head_pos,  // size() function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__head_pos,  // get_const(index) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__head_pos,  // get(index) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__fetch_function__PlayerCommand__head_pos,  // fetch(index, &value) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__assign_function__PlayerCommand__head_pos,  // assign(index, value) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__resize_function__PlayerCommand__head_pos  // resize(index) function pointer
  },
  {
    "frame_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(player_commands__msg__PlayerCommand, frame_pos),  // bytes offset in struct
    NULL,  // default value
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__size_function__PlayerCommand__frame_pos,  // size() function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_const_function__PlayerCommand__frame_pos,  // get_const(index) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__get_function__PlayerCommand__frame_pos,  // get(index) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__fetch_function__PlayerCommand__frame_pos,  // fetch(index, &value) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__assign_function__PlayerCommand__frame_pos,  // assign(index, value) function pointer
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__resize_function__PlayerCommand__frame_pos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_members = {
  "player_commands__msg",  // message namespace
  "PlayerCommand",  // message name
  2,  // number of fields
  sizeof(player_commands__msg__PlayerCommand),
  player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_member_array,  // message members
  player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_type_support_handle = {
  0,
  &player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_player_commands
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, player_commands, msg, PlayerCommand)() {
  if (!player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_type_support_handle.typesupport_identifier) {
    player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &player_commands__msg__PlayerCommand__rosidl_typesupport_introspection_c__PlayerCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
