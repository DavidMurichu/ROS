// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_H_
#define SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EmergencyMsg in the package second_coursework.
typedef struct second_coursework__msg__EmergencyMsg
{
  rosidl_runtime_c__String description;
  float duration;
} second_coursework__msg__EmergencyMsg;

// Struct for a sequence of second_coursework__msg__EmergencyMsg.
typedef struct second_coursework__msg__EmergencyMsg__Sequence
{
  second_coursework__msg__EmergencyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__msg__EmergencyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_H_
