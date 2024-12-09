// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_H_
#define SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_Goal
{
  float duration;
} second_coursework__action__RobotBehavior_Goal;

// Struct for a sequence of second_coursework__action__RobotBehavior_Goal.
typedef struct second_coursework__action__RobotBehavior_Goal__Sequence
{
  second_coursework__action__RobotBehavior_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'people_positions'
// Member 'dogs_positions'
// Member 'cats_positions'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_Result
{
  geometry_msgs__msg__Pose__Sequence people_positions;
  geometry_msgs__msg__Pose__Sequence dogs_positions;
  geometry_msgs__msg__Pose__Sequence cats_positions;
} second_coursework__action__RobotBehavior_Result;

// Struct for a sequence of second_coursework__action__RobotBehavior_Result.
typedef struct second_coursework__action__RobotBehavior_Result__Sequence
{
  second_coursework__action__RobotBehavior_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'last_seen_position'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_Feedback
{
  int32_t people_found;
  int32_t dogs_found;
  int32_t cats_found;
  geometry_msgs__msg__Pose last_seen_position;
} second_coursework__action__RobotBehavior_Feedback;

// Struct for a sequence of second_coursework__action__RobotBehavior_Feedback.
typedef struct second_coursework__action__RobotBehavior_Feedback__Sequence
{
  second_coursework__action__RobotBehavior_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "second_coursework/action/detail/robot_behavior__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  second_coursework__action__RobotBehavior_Goal goal;
} second_coursework__action__RobotBehavior_SendGoal_Request;

// Struct for a sequence of second_coursework__action__RobotBehavior_SendGoal_Request.
typedef struct second_coursework__action__RobotBehavior_SendGoal_Request__Sequence
{
  second_coursework__action__RobotBehavior_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} second_coursework__action__RobotBehavior_SendGoal_Response;

// Struct for a sequence of second_coursework__action__RobotBehavior_SendGoal_Response.
typedef struct second_coursework__action__RobotBehavior_SendGoal_Response__Sequence
{
  second_coursework__action__RobotBehavior_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} second_coursework__action__RobotBehavior_GetResult_Request;

// Struct for a sequence of second_coursework__action__RobotBehavior_GetResult_Request.
typedef struct second_coursework__action__RobotBehavior_GetResult_Request__Sequence
{
  second_coursework__action__RobotBehavior_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_GetResult_Response
{
  int8_t status;
  second_coursework__action__RobotBehavior_Result result;
} second_coursework__action__RobotBehavior_GetResult_Response;

// Struct for a sequence of second_coursework__action__RobotBehavior_GetResult_Response.
typedef struct second_coursework__action__RobotBehavior_GetResult_Response__Sequence
{
  second_coursework__action__RobotBehavior_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"

/// Struct defined in action/RobotBehavior in the package second_coursework.
typedef struct second_coursework__action__RobotBehavior_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  second_coursework__action__RobotBehavior_Feedback feedback;
} second_coursework__action__RobotBehavior_FeedbackMessage;

// Struct for a sequence of second_coursework__action__RobotBehavior_FeedbackMessage.
typedef struct second_coursework__action__RobotBehavior_FeedbackMessage__Sequence
{
  second_coursework__action__RobotBehavior_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_coursework__action__RobotBehavior_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_H_
