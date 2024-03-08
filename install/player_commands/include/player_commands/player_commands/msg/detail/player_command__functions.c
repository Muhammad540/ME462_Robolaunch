// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from player_commands:msg/PlayerCommand.idl
// generated code does not contain a copyright notice
#include "player_commands/msg/detail/player_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `head_pos`
// Member `frame_pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
player_commands__msg__PlayerCommand__init(player_commands__msg__PlayerCommand * msg)
{
  if (!msg) {
    return false;
  }
  // head_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->head_pos, 0)) {
    player_commands__msg__PlayerCommand__fini(msg);
    return false;
  }
  // frame_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->frame_pos, 0)) {
    player_commands__msg__PlayerCommand__fini(msg);
    return false;
  }
  return true;
}

void
player_commands__msg__PlayerCommand__fini(player_commands__msg__PlayerCommand * msg)
{
  if (!msg) {
    return;
  }
  // head_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->head_pos);
  // frame_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->frame_pos);
}

bool
player_commands__msg__PlayerCommand__are_equal(const player_commands__msg__PlayerCommand * lhs, const player_commands__msg__PlayerCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // head_pos
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->head_pos), &(rhs->head_pos)))
  {
    return false;
  }
  // frame_pos
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->frame_pos), &(rhs->frame_pos)))
  {
    return false;
  }
  return true;
}

bool
player_commands__msg__PlayerCommand__copy(
  const player_commands__msg__PlayerCommand * input,
  player_commands__msg__PlayerCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // head_pos
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->head_pos), &(output->head_pos)))
  {
    return false;
  }
  // frame_pos
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->frame_pos), &(output->frame_pos)))
  {
    return false;
  }
  return true;
}

player_commands__msg__PlayerCommand *
player_commands__msg__PlayerCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  player_commands__msg__PlayerCommand * msg = (player_commands__msg__PlayerCommand *)allocator.allocate(sizeof(player_commands__msg__PlayerCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(player_commands__msg__PlayerCommand));
  bool success = player_commands__msg__PlayerCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
player_commands__msg__PlayerCommand__destroy(player_commands__msg__PlayerCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    player_commands__msg__PlayerCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
player_commands__msg__PlayerCommand__Sequence__init(player_commands__msg__PlayerCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  player_commands__msg__PlayerCommand * data = NULL;

  if (size) {
    data = (player_commands__msg__PlayerCommand *)allocator.zero_allocate(size, sizeof(player_commands__msg__PlayerCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = player_commands__msg__PlayerCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        player_commands__msg__PlayerCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
player_commands__msg__PlayerCommand__Sequence__fini(player_commands__msg__PlayerCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      player_commands__msg__PlayerCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

player_commands__msg__PlayerCommand__Sequence *
player_commands__msg__PlayerCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  player_commands__msg__PlayerCommand__Sequence * array = (player_commands__msg__PlayerCommand__Sequence *)allocator.allocate(sizeof(player_commands__msg__PlayerCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = player_commands__msg__PlayerCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
player_commands__msg__PlayerCommand__Sequence__destroy(player_commands__msg__PlayerCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    player_commands__msg__PlayerCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
player_commands__msg__PlayerCommand__Sequence__are_equal(const player_commands__msg__PlayerCommand__Sequence * lhs, const player_commands__msg__PlayerCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!player_commands__msg__PlayerCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
player_commands__msg__PlayerCommand__Sequence__copy(
  const player_commands__msg__PlayerCommand__Sequence * input,
  player_commands__msg__PlayerCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(player_commands__msg__PlayerCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    player_commands__msg__PlayerCommand * data =
      (player_commands__msg__PlayerCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!player_commands__msg__PlayerCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          player_commands__msg__PlayerCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!player_commands__msg__PlayerCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
