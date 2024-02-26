// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice
#include "led_interfaces/srv/detail/led_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pattern`
#include "rosidl_runtime_c/string_functions.h"

bool
led_interfaces__srv__LedControl_Request__init(led_interfaces__srv__LedControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pattern
  if (!rosidl_runtime_c__String__init(&msg->pattern)) {
    led_interfaces__srv__LedControl_Request__fini(msg);
    return false;
  }
  // color_r
  // color_g
  // color_b
  return true;
}

void
led_interfaces__srv__LedControl_Request__fini(led_interfaces__srv__LedControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // pattern
  rosidl_runtime_c__String__fini(&msg->pattern);
  // color_r
  // color_g
  // color_b
}

bool
led_interfaces__srv__LedControl_Request__are_equal(const led_interfaces__srv__LedControl_Request * lhs, const led_interfaces__srv__LedControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pattern
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pattern), &(rhs->pattern)))
  {
    return false;
  }
  // color_r
  if (lhs->color_r != rhs->color_r) {
    return false;
  }
  // color_g
  if (lhs->color_g != rhs->color_g) {
    return false;
  }
  // color_b
  if (lhs->color_b != rhs->color_b) {
    return false;
  }
  return true;
}

bool
led_interfaces__srv__LedControl_Request__copy(
  const led_interfaces__srv__LedControl_Request * input,
  led_interfaces__srv__LedControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pattern
  if (!rosidl_runtime_c__String__copy(
      &(input->pattern), &(output->pattern)))
  {
    return false;
  }
  // color_r
  output->color_r = input->color_r;
  // color_g
  output->color_g = input->color_g;
  // color_b
  output->color_b = input->color_b;
  return true;
}

led_interfaces__srv__LedControl_Request *
led_interfaces__srv__LedControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Request * msg = (led_interfaces__srv__LedControl_Request *)allocator.allocate(sizeof(led_interfaces__srv__LedControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(led_interfaces__srv__LedControl_Request));
  bool success = led_interfaces__srv__LedControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
led_interfaces__srv__LedControl_Request__destroy(led_interfaces__srv__LedControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    led_interfaces__srv__LedControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
led_interfaces__srv__LedControl_Request__Sequence__init(led_interfaces__srv__LedControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Request * data = NULL;

  if (size) {
    data = (led_interfaces__srv__LedControl_Request *)allocator.zero_allocate(size, sizeof(led_interfaces__srv__LedControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = led_interfaces__srv__LedControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        led_interfaces__srv__LedControl_Request__fini(&data[i - 1]);
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
led_interfaces__srv__LedControl_Request__Sequence__fini(led_interfaces__srv__LedControl_Request__Sequence * array)
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
      led_interfaces__srv__LedControl_Request__fini(&array->data[i]);
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

led_interfaces__srv__LedControl_Request__Sequence *
led_interfaces__srv__LedControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Request__Sequence * array = (led_interfaces__srv__LedControl_Request__Sequence *)allocator.allocate(sizeof(led_interfaces__srv__LedControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = led_interfaces__srv__LedControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
led_interfaces__srv__LedControl_Request__Sequence__destroy(led_interfaces__srv__LedControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    led_interfaces__srv__LedControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
led_interfaces__srv__LedControl_Request__Sequence__are_equal(const led_interfaces__srv__LedControl_Request__Sequence * lhs, const led_interfaces__srv__LedControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!led_interfaces__srv__LedControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
led_interfaces__srv__LedControl_Request__Sequence__copy(
  const led_interfaces__srv__LedControl_Request__Sequence * input,
  led_interfaces__srv__LedControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(led_interfaces__srv__LedControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    led_interfaces__srv__LedControl_Request * data =
      (led_interfaces__srv__LedControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!led_interfaces__srv__LedControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          led_interfaces__srv__LedControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!led_interfaces__srv__LedControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
led_interfaces__srv__LedControl_Response__init(led_interfaces__srv__LedControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    led_interfaces__srv__LedControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
led_interfaces__srv__LedControl_Response__fini(led_interfaces__srv__LedControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
led_interfaces__srv__LedControl_Response__are_equal(const led_interfaces__srv__LedControl_Response * lhs, const led_interfaces__srv__LedControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
led_interfaces__srv__LedControl_Response__copy(
  const led_interfaces__srv__LedControl_Response * input,
  led_interfaces__srv__LedControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

led_interfaces__srv__LedControl_Response *
led_interfaces__srv__LedControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Response * msg = (led_interfaces__srv__LedControl_Response *)allocator.allocate(sizeof(led_interfaces__srv__LedControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(led_interfaces__srv__LedControl_Response));
  bool success = led_interfaces__srv__LedControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
led_interfaces__srv__LedControl_Response__destroy(led_interfaces__srv__LedControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    led_interfaces__srv__LedControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
led_interfaces__srv__LedControl_Response__Sequence__init(led_interfaces__srv__LedControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Response * data = NULL;

  if (size) {
    data = (led_interfaces__srv__LedControl_Response *)allocator.zero_allocate(size, sizeof(led_interfaces__srv__LedControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = led_interfaces__srv__LedControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        led_interfaces__srv__LedControl_Response__fini(&data[i - 1]);
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
led_interfaces__srv__LedControl_Response__Sequence__fini(led_interfaces__srv__LedControl_Response__Sequence * array)
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
      led_interfaces__srv__LedControl_Response__fini(&array->data[i]);
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

led_interfaces__srv__LedControl_Response__Sequence *
led_interfaces__srv__LedControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__srv__LedControl_Response__Sequence * array = (led_interfaces__srv__LedControl_Response__Sequence *)allocator.allocate(sizeof(led_interfaces__srv__LedControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = led_interfaces__srv__LedControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
led_interfaces__srv__LedControl_Response__Sequence__destroy(led_interfaces__srv__LedControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    led_interfaces__srv__LedControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
led_interfaces__srv__LedControl_Response__Sequence__are_equal(const led_interfaces__srv__LedControl_Response__Sequence * lhs, const led_interfaces__srv__LedControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!led_interfaces__srv__LedControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
led_interfaces__srv__LedControl_Response__Sequence__copy(
  const led_interfaces__srv__LedControl_Response__Sequence * input,
  led_interfaces__srv__LedControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(led_interfaces__srv__LedControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    led_interfaces__srv__LedControl_Response * data =
      (led_interfaces__srv__LedControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!led_interfaces__srv__LedControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          led_interfaces__srv__LedControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!led_interfaces__srv__LedControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
