// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
#include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "second_coursework/action/detail/robot_behavior__functions.h"
#include "second_coursework/action/detail/robot_behavior__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_Goal__init(message_memory);
}

void second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_member_array[1] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Goal, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_Goal",  // message name
  1,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_Goal),
  second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_member_array,  // message members
  second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Goal)() {
  if (!second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_Goal__rosidl_typesupport_introspection_c__RobotBehavior_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `people_positions`
// Member `dogs_positions`
// Member `cats_positions`
#include "geometry_msgs/msg/pose.h"
// Member `people_positions`
// Member `dogs_positions`
// Member `cats_positions`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_Result__init(message_memory);
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_Result__fini(message_memory);
}

size_t second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__people_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__people_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__people_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__people_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__people_positions(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__people_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__people_positions(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__people_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__dogs_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__dogs_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__dogs_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__dogs_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__dogs_positions(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__dogs_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__dogs_positions(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__dogs_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__cats_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__cats_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__cats_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__cats_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__cats_positions(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__cats_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__cats_positions(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__cats_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_member_array[3] = {
  {
    "people_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Result, people_positions),  // bytes offset in struct
    NULL,  // default value
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__people_positions,  // size() function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__people_positions,  // get_const(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__people_positions,  // get(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__people_positions,  // fetch(index, &value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__people_positions,  // assign(index, value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__people_positions  // resize(index) function pointer
  },
  {
    "dogs_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Result, dogs_positions),  // bytes offset in struct
    NULL,  // default value
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__dogs_positions,  // size() function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__dogs_positions,  // get_const(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__dogs_positions,  // get(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__dogs_positions,  // fetch(index, &value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__dogs_positions,  // assign(index, value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__dogs_positions  // resize(index) function pointer
  },
  {
    "cats_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Result, cats_positions),  // bytes offset in struct
    NULL,  // default value
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__size_function__RobotBehavior_Result__cats_positions,  // size() function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_const_function__RobotBehavior_Result__cats_positions,  // get_const(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__get_function__RobotBehavior_Result__cats_positions,  // get(index) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__fetch_function__RobotBehavior_Result__cats_positions,  // fetch(index, &value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__assign_function__RobotBehavior_Result__cats_positions,  // assign(index, value) function pointer
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__resize_function__RobotBehavior_Result__cats_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_Result",  // message name
  3,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_Result),
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_member_array,  // message members
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Result)() {
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_Result__rosidl_typesupport_introspection_c__RobotBehavior_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `last_seen_position`
// already included above
// #include "geometry_msgs/msg/pose.h"
// Member `last_seen_position`
// already included above
// #include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_Feedback__init(message_memory);
}

void second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_member_array[4] = {
  {
    "people_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Feedback, people_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dogs_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Feedback, dogs_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cats_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Feedback, cats_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_seen_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_Feedback, last_seen_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_Feedback",  // message name
  4,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_Feedback),
  second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_member_array,  // message members
  second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Feedback)() {
  second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_Feedback__rosidl_typesupport_introspection_c__RobotBehavior_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "second_coursework/action/robot_behavior.h"
// Member `goal`
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_SendGoal_Request__init(message_memory);
}

void second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_SendGoal_Request),
  second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_member_array,  // message members
  second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Request)() {
  second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Goal)();
  if (!second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_SendGoal_Response__init(message_memory);
}

void second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_SendGoal_Response),
  second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_member_array,  // message members
  second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Response)() {
  second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_members = {
  "second_coursework__action",  // service namespace
  "RobotBehavior_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_type_support_handle = {
  0,
  &second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal)() {
  if (!second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_type_support_handle.typesupport_identifier) {
    second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_SendGoal_Response)()->data;
  }

  return &second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_GetResult_Request__init(message_memory);
}

void second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_GetResult_Request),
  second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_member_array,  // message members
  second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Request)() {
  second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_GetResult_Request__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "second_coursework/action/robot_behavior.h"
// Member `result`
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_GetResult_Response__init(message_memory);
}

void second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_GetResult_Response),
  second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_member_array,  // message members
  second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Response)() {
  second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Result)();
  if (!second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_GetResult_Response__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_members = {
  "second_coursework__action",  // service namespace
  "RobotBehavior_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_type_support_handle = {
  0,
  &second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult)() {
  if (!second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_type_support_handle.typesupport_identifier) {
    second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_GetResult_Response)()->data;
  }

  return &second_coursework__action__detail__robot_behavior__rosidl_typesupport_introspection_c__RobotBehavior_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "second_coursework/action/robot_behavior.h"
// Member `feedback`
// already included above
// #include "second_coursework/action/detail/robot_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__action__RobotBehavior_FeedbackMessage__init(message_memory);
}

void second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_fini_function(void * message_memory)
{
  second_coursework__action__RobotBehavior_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__action__RobotBehavior_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_members = {
  "second_coursework__action",  // message namespace
  "RobotBehavior_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(second_coursework__action__RobotBehavior_FeedbackMessage),
  second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_member_array,  // message members
  second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_type_support_handle = {
  0,
  &second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_FeedbackMessage)() {
  second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, action, RobotBehavior_Feedback)();
  if (!second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__action__RobotBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__RobotBehavior_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
