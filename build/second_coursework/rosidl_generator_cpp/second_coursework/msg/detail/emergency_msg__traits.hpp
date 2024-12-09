// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__TRAITS_HPP_
#define SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "second_coursework/msg/detail/emergency_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace second_coursework
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::msg::EmergencyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::msg::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::msg::EmergencyMsg & msg)
{
  return second_coursework::msg::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::msg::EmergencyMsg>()
{
  return "second_coursework::msg::EmergencyMsg";
}

template<>
inline const char * name<second_coursework::msg::EmergencyMsg>()
{
  return "second_coursework/msg/EmergencyMsg";
}

template<>
struct has_fixed_size<second_coursework::msg::EmergencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<second_coursework::msg::EmergencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<second_coursework::msg::EmergencyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__TRAITS_HPP_
