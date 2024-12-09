// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "second_coursework/msg/detail/emergency_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace second_coursework
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EmergencyMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) second_coursework::msg::EmergencyMsg(_init);
}

void EmergencyMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<second_coursework::msg::EmergencyMsg *>(message_memory);
  typed_message->~EmergencyMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyMsg_message_member_array[2] = {
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework::msg::EmergencyMsg, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(second_coursework::msg::EmergencyMsg, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyMsg_message_members = {
  "second_coursework::msg",  // message namespace
  "EmergencyMsg",  // message name
  2,  // number of fields
  sizeof(second_coursework::msg::EmergencyMsg),
  EmergencyMsg_message_member_array,  // message members
  EmergencyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace second_coursework


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<second_coursework::msg::EmergencyMsg>()
{
  return &::second_coursework::msg::rosidl_typesupport_introspection_cpp::EmergencyMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, second_coursework, msg, EmergencyMsg)() {
  return &::second_coursework::msg::rosidl_typesupport_introspection_cpp::EmergencyMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
