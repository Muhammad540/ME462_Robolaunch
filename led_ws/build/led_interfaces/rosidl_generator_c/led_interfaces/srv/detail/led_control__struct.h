// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from led_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_H_
#define LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pattern'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LedControl in the package led_interfaces.
typedef struct led_interfaces__srv__LedControl_Request
{
  rosidl_runtime_c__String pattern;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
} led_interfaces__srv__LedControl_Request;

// Struct for a sequence of led_interfaces__srv__LedControl_Request.
typedef struct led_interfaces__srv__LedControl_Request__Sequence
{
  led_interfaces__srv__LedControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__srv__LedControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LedControl in the package led_interfaces.
typedef struct led_interfaces__srv__LedControl_Response
{
  bool success;
  rosidl_runtime_c__String message;
} led_interfaces__srv__LedControl_Response;

// Struct for a sequence of led_interfaces__srv__LedControl_Response.
typedef struct led_interfaces__srv__LedControl_Response__Sequence
{
  led_interfaces__srv__LedControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__srv__LedControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LED_INTERFACES__SRV__DETAIL__LED_CONTROL__STRUCT_H_
