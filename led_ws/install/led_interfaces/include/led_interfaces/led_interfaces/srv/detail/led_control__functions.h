// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef LED_INTERFACES__SRV__DETAIL__LED_CONTROL__FUNCTIONS_H_
#define LED_INTERFACES__SRV__DETAIL__LED_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "led_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "led_interfaces/srv/detail/led_control__struct.h"

/// Initialize srv/LedControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * led_interfaces__srv__LedControl_Request
 * )) before or use
 * led_interfaces__srv__LedControl_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__init(led_interfaces__srv__LedControl_Request * msg);

/// Finalize srv/LedControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Request__fini(led_interfaces__srv__LedControl_Request * msg);

/// Create srv/LedControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * led_interfaces__srv__LedControl_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
led_interfaces__srv__LedControl_Request *
led_interfaces__srv__LedControl_Request__create();

/// Destroy srv/LedControl message.
/**
 * It calls
 * led_interfaces__srv__LedControl_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Request__destroy(led_interfaces__srv__LedControl_Request * msg);

/// Check for srv/LedControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__are_equal(const led_interfaces__srv__LedControl_Request * lhs, const led_interfaces__srv__LedControl_Request * rhs);

/// Copy a srv/LedControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__copy(
  const led_interfaces__srv__LedControl_Request * input,
  led_interfaces__srv__LedControl_Request * output);

/// Initialize array of srv/LedControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * led_interfaces__srv__LedControl_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__Sequence__init(led_interfaces__srv__LedControl_Request__Sequence * array, size_t size);

/// Finalize array of srv/LedControl messages.
/**
 * It calls
 * led_interfaces__srv__LedControl_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Request__Sequence__fini(led_interfaces__srv__LedControl_Request__Sequence * array);

/// Create array of srv/LedControl messages.
/**
 * It allocates the memory for the array and calls
 * led_interfaces__srv__LedControl_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
led_interfaces__srv__LedControl_Request__Sequence *
led_interfaces__srv__LedControl_Request__Sequence__create(size_t size);

/// Destroy array of srv/LedControl messages.
/**
 * It calls
 * led_interfaces__srv__LedControl_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Request__Sequence__destroy(led_interfaces__srv__LedControl_Request__Sequence * array);

/// Check for srv/LedControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__Sequence__are_equal(const led_interfaces__srv__LedControl_Request__Sequence * lhs, const led_interfaces__srv__LedControl_Request__Sequence * rhs);

/// Copy an array of srv/LedControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Request__Sequence__copy(
  const led_interfaces__srv__LedControl_Request__Sequence * input,
  led_interfaces__srv__LedControl_Request__Sequence * output);

/// Initialize srv/LedControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * led_interfaces__srv__LedControl_Response
 * )) before or use
 * led_interfaces__srv__LedControl_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__init(led_interfaces__srv__LedControl_Response * msg);

/// Finalize srv/LedControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Response__fini(led_interfaces__srv__LedControl_Response * msg);

/// Create srv/LedControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * led_interfaces__srv__LedControl_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
led_interfaces__srv__LedControl_Response *
led_interfaces__srv__LedControl_Response__create();

/// Destroy srv/LedControl message.
/**
 * It calls
 * led_interfaces__srv__LedControl_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Response__destroy(led_interfaces__srv__LedControl_Response * msg);

/// Check for srv/LedControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__are_equal(const led_interfaces__srv__LedControl_Response * lhs, const led_interfaces__srv__LedControl_Response * rhs);

/// Copy a srv/LedControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__copy(
  const led_interfaces__srv__LedControl_Response * input,
  led_interfaces__srv__LedControl_Response * output);

/// Initialize array of srv/LedControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * led_interfaces__srv__LedControl_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__Sequence__init(led_interfaces__srv__LedControl_Response__Sequence * array, size_t size);

/// Finalize array of srv/LedControl messages.
/**
 * It calls
 * led_interfaces__srv__LedControl_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Response__Sequence__fini(led_interfaces__srv__LedControl_Response__Sequence * array);

/// Create array of srv/LedControl messages.
/**
 * It allocates the memory for the array and calls
 * led_interfaces__srv__LedControl_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
led_interfaces__srv__LedControl_Response__Sequence *
led_interfaces__srv__LedControl_Response__Sequence__create(size_t size);

/// Destroy array of srv/LedControl messages.
/**
 * It calls
 * led_interfaces__srv__LedControl_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
void
led_interfaces__srv__LedControl_Response__Sequence__destroy(led_interfaces__srv__LedControl_Response__Sequence * array);

/// Check for srv/LedControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__Sequence__are_equal(const led_interfaces__srv__LedControl_Response__Sequence * lhs, const led_interfaces__srv__LedControl_Response__Sequence * rhs);

/// Copy an array of srv/LedControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
bool
led_interfaces__srv__LedControl_Response__Sequence__copy(
  const led_interfaces__srv__LedControl_Response__Sequence * input,
  led_interfaces__srv__LedControl_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LED_INTERFACES__SRV__DETAIL__LED_CONTROL__FUNCTIONS_H_
