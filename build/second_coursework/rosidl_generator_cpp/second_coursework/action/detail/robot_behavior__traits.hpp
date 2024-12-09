// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__TRAITS_HPP_
#define SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "second_coursework/action/detail/robot_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const RobotBehavior_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_Goal & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_Goal>()
{
  return "second_coursework::action::RobotBehavior_Goal";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_Goal>()
{
  return "second_coursework/action/RobotBehavior_Goal";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'people_positions'
// Member 'dogs_positions'
// Member 'cats_positions'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: people_positions
  {
    if (msg.people_positions.size() == 0) {
      out << "people_positions: []";
    } else {
      out << "people_positions: [";
      size_t pending_items = msg.people_positions.size();
      for (auto item : msg.people_positions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dogs_positions
  {
    if (msg.dogs_positions.size() == 0) {
      out << "dogs_positions: []";
    } else {
      out << "dogs_positions: [";
      size_t pending_items = msg.dogs_positions.size();
      for (auto item : msg.dogs_positions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cats_positions
  {
    if (msg.cats_positions.size() == 0) {
      out << "cats_positions: []";
    } else {
      out << "cats_positions: [";
      size_t pending_items = msg.cats_positions.size();
      for (auto item : msg.cats_positions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: people_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.people_positions.size() == 0) {
      out << "people_positions: []\n";
    } else {
      out << "people_positions:\n";
      for (auto item : msg.people_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: dogs_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dogs_positions.size() == 0) {
      out << "dogs_positions: []\n";
    } else {
      out << "dogs_positions:\n";
      for (auto item : msg.dogs_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cats_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cats_positions.size() == 0) {
      out << "cats_positions: []\n";
    } else {
      out << "cats_positions:\n";
      for (auto item : msg.cats_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_Result & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_Result>()
{
  return "second_coursework::action::RobotBehavior_Result";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_Result>()
{
  return "second_coursework/action/RobotBehavior_Result";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'last_seen_position'
// already included above
// #include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: people_found
  {
    out << "people_found: ";
    rosidl_generator_traits::value_to_yaml(msg.people_found, out);
    out << ", ";
  }

  // member: dogs_found
  {
    out << "dogs_found: ";
    rosidl_generator_traits::value_to_yaml(msg.dogs_found, out);
    out << ", ";
  }

  // member: cats_found
  {
    out << "cats_found: ";
    rosidl_generator_traits::value_to_yaml(msg.cats_found, out);
    out << ", ";
  }

  // member: last_seen_position
  {
    out << "last_seen_position: ";
    to_flow_style_yaml(msg.last_seen_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: people_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "people_found: ";
    rosidl_generator_traits::value_to_yaml(msg.people_found, out);
    out << "\n";
  }

  // member: dogs_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dogs_found: ";
    rosidl_generator_traits::value_to_yaml(msg.dogs_found, out);
    out << "\n";
  }

  // member: cats_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cats_found: ";
    rosidl_generator_traits::value_to_yaml(msg.cats_found, out);
    out << "\n";
  }

  // member: last_seen_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_seen_position:\n";
    to_block_style_yaml(msg.last_seen_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_Feedback & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_Feedback>()
{
  return "second_coursework::action::RobotBehavior_Feedback";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_Feedback>()
{
  return "second_coursework/action/RobotBehavior_Feedback";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "second_coursework/action/detail/robot_behavior__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_SendGoal_Request & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_SendGoal_Request>()
{
  return "second_coursework::action::RobotBehavior_SendGoal_Request";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_SendGoal_Request>()
{
  return "second_coursework/action/RobotBehavior_SendGoal_Request";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<second_coursework::action::RobotBehavior_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<second_coursework::action::RobotBehavior_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_SendGoal_Response & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_SendGoal_Response>()
{
  return "second_coursework::action::RobotBehavior_SendGoal_Response";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_SendGoal_Response>()
{
  return "second_coursework/action/RobotBehavior_SendGoal_Response";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_SendGoal>()
{
  return "second_coursework::action::RobotBehavior_SendGoal";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_SendGoal>()
{
  return "second_coursework/action/RobotBehavior_SendGoal";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<second_coursework::action::RobotBehavior_SendGoal_Request>::value &&
    has_fixed_size<second_coursework::action::RobotBehavior_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<second_coursework::action::RobotBehavior_SendGoal_Request>::value &&
    has_bounded_size<second_coursework::action::RobotBehavior_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<second_coursework::action::RobotBehavior_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<second_coursework::action::RobotBehavior_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<second_coursework::action::RobotBehavior_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_GetResult_Request & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_GetResult_Request>()
{
  return "second_coursework::action::RobotBehavior_GetResult_Request";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_GetResult_Request>()
{
  return "second_coursework/action/RobotBehavior_GetResult_Request";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "second_coursework/action/detail/robot_behavior__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_GetResult_Response & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_GetResult_Response>()
{
  return "second_coursework::action::RobotBehavior_GetResult_Response";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_GetResult_Response>()
{
  return "second_coursework/action/RobotBehavior_GetResult_Response";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<second_coursework::action::RobotBehavior_Result>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<second_coursework::action::RobotBehavior_Result>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_GetResult>()
{
  return "second_coursework::action::RobotBehavior_GetResult";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_GetResult>()
{
  return "second_coursework/action/RobotBehavior_GetResult";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<second_coursework::action::RobotBehavior_GetResult_Request>::value &&
    has_fixed_size<second_coursework::action::RobotBehavior_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<second_coursework::action::RobotBehavior_GetResult_Request>::value &&
    has_bounded_size<second_coursework::action::RobotBehavior_GetResult_Response>::value
  >
{
};

template<>
struct is_service<second_coursework::action::RobotBehavior_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<second_coursework::action::RobotBehavior_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<second_coursework::action::RobotBehavior_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "second_coursework/action/detail/robot_behavior__traits.hpp"

namespace second_coursework
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotBehavior_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBehavior_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBehavior_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace second_coursework

namespace rosidl_generator_traits
{

[[deprecated("use second_coursework::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_coursework::action::RobotBehavior_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_coursework::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_coursework::action::to_yaml() instead")]]
inline std::string to_yaml(const second_coursework::action::RobotBehavior_FeedbackMessage & msg)
{
  return second_coursework::action::to_yaml(msg);
}

template<>
inline const char * data_type<second_coursework::action::RobotBehavior_FeedbackMessage>()
{
  return "second_coursework::action::RobotBehavior_FeedbackMessage";
}

template<>
inline const char * name<second_coursework::action::RobotBehavior_FeedbackMessage>()
{
  return "second_coursework/action/RobotBehavior_FeedbackMessage";
}

template<>
struct has_fixed_size<second_coursework::action::RobotBehavior_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<second_coursework::action::RobotBehavior_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<second_coursework::action::RobotBehavior_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<second_coursework::action::RobotBehavior_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<second_coursework::action::RobotBehavior_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<second_coursework::action::RobotBehavior>
  : std::true_type
{
};

template<>
struct is_action_goal<second_coursework::action::RobotBehavior_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<second_coursework::action::RobotBehavior_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<second_coursework::action::RobotBehavior_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__TRAITS_HPP_
