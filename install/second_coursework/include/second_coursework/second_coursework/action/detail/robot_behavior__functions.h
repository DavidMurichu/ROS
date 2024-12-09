// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__FUNCTIONS_H_
#define SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "second_coursework/msg/rosidl_generator_c__visibility_control.h"

#include "second_coursework/action/detail/robot_behavior__struct.h"

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_Goal
 * )) before or use
 * second_coursework__action__RobotBehavior_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Goal__init(second_coursework__action__RobotBehavior_Goal * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Goal__fini(second_coursework__action__RobotBehavior_Goal * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Goal *
second_coursework__action__RobotBehavior_Goal__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Goal__destroy(second_coursework__action__RobotBehavior_Goal * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Goal__are_equal(const second_coursework__action__RobotBehavior_Goal * lhs, const second_coursework__action__RobotBehavior_Goal * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_Goal__copy(
  const second_coursework__action__RobotBehavior_Goal * input,
  second_coursework__action__RobotBehavior_Goal * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Goal__Sequence__init(second_coursework__action__RobotBehavior_Goal__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Goal__Sequence__fini(second_coursework__action__RobotBehavior_Goal__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Goal__Sequence *
second_coursework__action__RobotBehavior_Goal__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Goal__Sequence__destroy(second_coursework__action__RobotBehavior_Goal__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Goal__Sequence__are_equal(const second_coursework__action__RobotBehavior_Goal__Sequence * lhs, const second_coursework__action__RobotBehavior_Goal__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_Goal__Sequence__copy(
  const second_coursework__action__RobotBehavior_Goal__Sequence * input,
  second_coursework__action__RobotBehavior_Goal__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_Result
 * )) before or use
 * second_coursework__action__RobotBehavior_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Result__init(second_coursework__action__RobotBehavior_Result * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Result__fini(second_coursework__action__RobotBehavior_Result * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Result *
second_coursework__action__RobotBehavior_Result__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Result__destroy(second_coursework__action__RobotBehavior_Result * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Result__are_equal(const second_coursework__action__RobotBehavior_Result * lhs, const second_coursework__action__RobotBehavior_Result * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_Result__copy(
  const second_coursework__action__RobotBehavior_Result * input,
  second_coursework__action__RobotBehavior_Result * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Result__Sequence__init(second_coursework__action__RobotBehavior_Result__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Result__Sequence__fini(second_coursework__action__RobotBehavior_Result__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Result__Sequence *
second_coursework__action__RobotBehavior_Result__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Result__Sequence__destroy(second_coursework__action__RobotBehavior_Result__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Result__Sequence__are_equal(const second_coursework__action__RobotBehavior_Result__Sequence * lhs, const second_coursework__action__RobotBehavior_Result__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_Result__Sequence__copy(
  const second_coursework__action__RobotBehavior_Result__Sequence * input,
  second_coursework__action__RobotBehavior_Result__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_Feedback
 * )) before or use
 * second_coursework__action__RobotBehavior_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Feedback__init(second_coursework__action__RobotBehavior_Feedback * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Feedback__fini(second_coursework__action__RobotBehavior_Feedback * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Feedback *
second_coursework__action__RobotBehavior_Feedback__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Feedback__destroy(second_coursework__action__RobotBehavior_Feedback * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Feedback__are_equal(const second_coursework__action__RobotBehavior_Feedback * lhs, const second_coursework__action__RobotBehavior_Feedback * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_Feedback__copy(
  const second_coursework__action__RobotBehavior_Feedback * input,
  second_coursework__action__RobotBehavior_Feedback * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Feedback__Sequence__init(second_coursework__action__RobotBehavior_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Feedback__Sequence__fini(second_coursework__action__RobotBehavior_Feedback__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_Feedback__Sequence *
second_coursework__action__RobotBehavior_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_Feedback__Sequence__destroy(second_coursework__action__RobotBehavior_Feedback__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_Feedback__Sequence__are_equal(const second_coursework__action__RobotBehavior_Feedback__Sequence * lhs, const second_coursework__action__RobotBehavior_Feedback__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_Feedback__Sequence__copy(
  const second_coursework__action__RobotBehavior_Feedback__Sequence * input,
  second_coursework__action__RobotBehavior_Feedback__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_SendGoal_Request
 * )) before or use
 * second_coursework__action__RobotBehavior_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Request__init(second_coursework__action__RobotBehavior_SendGoal_Request * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Request__fini(second_coursework__action__RobotBehavior_SendGoal_Request * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_SendGoal_Request *
second_coursework__action__RobotBehavior_SendGoal_Request__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Request__destroy(second_coursework__action__RobotBehavior_SendGoal_Request * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Request__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Request * lhs, const second_coursework__action__RobotBehavior_SendGoal_Request * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_SendGoal_Request__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Request * input,
  second_coursework__action__RobotBehavior_SendGoal_Request * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__init(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__fini(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence *
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__destroy(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * lhs, const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * input,
  second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_SendGoal_Response
 * )) before or use
 * second_coursework__action__RobotBehavior_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Response__init(second_coursework__action__RobotBehavior_SendGoal_Response * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Response__fini(second_coursework__action__RobotBehavior_SendGoal_Response * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_SendGoal_Response *
second_coursework__action__RobotBehavior_SendGoal_Response__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Response__destroy(second_coursework__action__RobotBehavior_SendGoal_Response * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Response__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Response * lhs, const second_coursework__action__RobotBehavior_SendGoal_Response * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_SendGoal_Response__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Response * input,
  second_coursework__action__RobotBehavior_SendGoal_Response * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__init(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__fini(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence *
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__destroy(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * lhs, const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * input,
  second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_GetResult_Request
 * )) before or use
 * second_coursework__action__RobotBehavior_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Request__init(second_coursework__action__RobotBehavior_GetResult_Request * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Request__fini(second_coursework__action__RobotBehavior_GetResult_Request * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_GetResult_Request *
second_coursework__action__RobotBehavior_GetResult_Request__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Request__destroy(second_coursework__action__RobotBehavior_GetResult_Request * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Request__are_equal(const second_coursework__action__RobotBehavior_GetResult_Request * lhs, const second_coursework__action__RobotBehavior_GetResult_Request * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_GetResult_Request__copy(
  const second_coursework__action__RobotBehavior_GetResult_Request * input,
  second_coursework__action__RobotBehavior_GetResult_Request * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__init(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__fini(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_GetResult_Request__Sequence *
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__destroy(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__are_equal(const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * lhs, const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__copy(
  const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * input,
  second_coursework__action__RobotBehavior_GetResult_Request__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_GetResult_Response
 * )) before or use
 * second_coursework__action__RobotBehavior_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Response__init(second_coursework__action__RobotBehavior_GetResult_Response * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Response__fini(second_coursework__action__RobotBehavior_GetResult_Response * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_GetResult_Response *
second_coursework__action__RobotBehavior_GetResult_Response__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Response__destroy(second_coursework__action__RobotBehavior_GetResult_Response * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Response__are_equal(const second_coursework__action__RobotBehavior_GetResult_Response * lhs, const second_coursework__action__RobotBehavior_GetResult_Response * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_GetResult_Response__copy(
  const second_coursework__action__RobotBehavior_GetResult_Response * input,
  second_coursework__action__RobotBehavior_GetResult_Response * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__init(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__fini(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_GetResult_Response__Sequence *
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__destroy(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__are_equal(const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * lhs, const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__copy(
  const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * input,
  second_coursework__action__RobotBehavior_GetResult_Response__Sequence * output);

/// Initialize action/RobotBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_coursework__action__RobotBehavior_FeedbackMessage
 * )) before or use
 * second_coursework__action__RobotBehavior_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_FeedbackMessage__init(second_coursework__action__RobotBehavior_FeedbackMessage * msg);

/// Finalize action/RobotBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_FeedbackMessage__fini(second_coursework__action__RobotBehavior_FeedbackMessage * msg);

/// Create action/RobotBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_FeedbackMessage *
second_coursework__action__RobotBehavior_FeedbackMessage__create();

/// Destroy action/RobotBehavior message.
/**
 * It calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_FeedbackMessage__destroy(second_coursework__action__RobotBehavior_FeedbackMessage * msg);

/// Check for action/RobotBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_FeedbackMessage__are_equal(const second_coursework__action__RobotBehavior_FeedbackMessage * lhs, const second_coursework__action__RobotBehavior_FeedbackMessage * rhs);

/// Copy a action/RobotBehavior message.
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
second_coursework__action__RobotBehavior_FeedbackMessage__copy(
  const second_coursework__action__RobotBehavior_FeedbackMessage * input,
  second_coursework__action__RobotBehavior_FeedbackMessage * output);

/// Initialize array of action/RobotBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__init(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__fini(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array);

/// Create array of action/RobotBehavior messages.
/**
 * It allocates the memory for the array and calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence *
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RobotBehavior messages.
/**
 * It calls
 * second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
void
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__destroy(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array);

/// Check for action/RobotBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_coursework
bool
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__are_equal(const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * lhs, const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RobotBehavior messages.
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
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__copy(
  const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * input,
  second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__FUNCTIONS_H_
