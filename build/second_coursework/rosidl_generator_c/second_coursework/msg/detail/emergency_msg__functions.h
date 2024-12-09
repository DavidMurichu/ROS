// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__FUNCTIONS_H_
#define SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "second_coursework/msg/rosidl_generator_c__visibility_control.h"

#include "second_coursework/msg/detail/emergency_msg__struct.h"

/// Initialize msg/EmergencyMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__msg__EmergencyMsg
 * )) before or use
 * second_coursework__msg__EmergencyMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__init(second_coursework__msg__EmergencyMsg * msg);

/// Finalize msg/EmergencyMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__msg__EmergencyMsg__fini(second_coursework__msg__EmergencyMsg * msg);

/// Create msg/EmergencyMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__msg__EmergencyMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__msg__EmergencyMsg *
second_coursework__msg__EmergencyMsg__create();

/// Destroy msg/EmergencyMsg message.
/**
 * It calls
 * second_coursework__msg__EmergencyMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__msg__EmergencyMsg__destroy(second_coursework__msg__EmergencyMsg * msg);

/// Check for msg/EmergencyMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__are_equal(const second_coursework__msg__EmergencyMsg * lhs, const second_coursework__msg__EmergencyMsg * rhs);

/// Copy a msg/EmergencyMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__copy(
  const second_coursework__msg__EmergencyMsg * input,
  second_coursework__msg__EmergencyMsg * output);

/// Initialize array of msg/EmergencyMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__msg__EmergencyMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__Sequence__init(second_coursework__msg__EmergencyMsg__Sequence * array, size_t size);

/// Finalize array of msg/EmergencyMsg messages.
/**
 * It calls
 * second_coursework__msg__EmergencyMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__msg__EmergencyMsg__Sequence__fini(second_coursework__msg__EmergencyMsg__Sequence * array);

/// Create array of msg/EmergencyMsg messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__msg__EmergencyMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__msg__EmergencyMsg__Sequence *
second_coursework__msg__EmergencyMsg__Sequence__create(size_t size);

/// Destroy array of msg/EmergencyMsg messages.
/**
 * It calls
 * second_coursework__msg__EmergencyMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__msg__EmergencyMsg__Sequence__destroy(second_coursework__msg__EmergencyMsg__Sequence * array);

/// Check for msg/EmergencyMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__Sequence__are_equal(const second_coursework__msg__EmergencyMsg__Sequence * lhs, const second_coursework__msg__EmergencyMsg__Sequence * rhs);

/// Copy an array of msg/EmergencyMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__msg__EmergencyMsg__Sequence__copy(
  const second_coursework__msg__EmergencyMsg__Sequence * input,
  second_coursework__msg__EmergencyMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__FUNCTIONS_H_
