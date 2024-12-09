// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "second_coursework/msg/detail/emergency_msg__rosidl_typesupport_introspection_c.h"
#include "second_coursework/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "second_coursework/msg/detail/emergency_msg__functions.h"
#include "second_coursework/msg/detail/emergency_msg__struct.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  second_coursework__msg__EmergencyMsg__init(message_memory);
}

void second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_fini_function(void * message_memory)
{
  second_coursework__msg__EmergencyMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_member_array[2] = {
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__msg__EmergencyMsg, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework__msg__EmergencyMsg, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_members = {
  "second_coursework__msg",  // message namespace
  "EmergencyMsg",  // message name
  2,  // number of fields
  sizeof(second_coursework__msg__EmergencyMsg),
  second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_member_array,  // message members
  second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_type_support_handle = {
  0,
  &second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_coursework
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, second_coursework, msg, EmergencyMsg)() {
  if (!second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_type_support_handle.typesupport_identifier) {
    second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &second_coursework__msg__EmergencyMsg__rosidl_typesupport_introspection_c__EmergencyMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
