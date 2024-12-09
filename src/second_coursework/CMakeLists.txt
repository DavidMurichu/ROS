cmake_minimum_required(VERSION 3.8)
project(second_coursework)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED) # For action types

# Find your action dependencies
find_package(action_msgs REQUIRED)
# Include directories
include_directories(include)


# Generate message interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/EmergencyMsg.msg"  
  "action/RobotBehavior.action"
  # "action/FindEntities.action"
  DEPENDENCIES std_msgs geometry_msgs
)


rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)

add_executable(emergency_subscriber src/emergency_subscriber/emergency_subscriber.cpp)
ament_target_dependencies(emergency_subscriber
  rclcpp
  std_msgs
  rosidl_default_runtime
)
target_link_libraries(emergency_subscriber ${cpp_typesupport_target})


install(TARGETS
  emergency_subscriber
  DESTINATION lib/${PROJECT_NAME}
)


# # Add the executable
# add_executable(find_entities_server src/find_entities_server/find_entities_server.cpp)
# ament_target_dependencies(find_entities_server 
# rclcpp 
# rclcpp_action 
# geometry_msgs 
# action_msgs
# )

# # Link libraries for action support
# target_link_libraries(find_entities_server ${cpp_typesupport_target})




add_executable(action_server_node src/main.cpp src/action_server/action_server.cpp src/action_server/feedback_manager.cpp)

ament_target_dependencies(action_server_node 
rclcpp 
std_msgs 
geometry_msgs 
rclcpp_action 
rosidl_default_runtime
 )

target_link_libraries(action_server_node ${cpp_typesupport_target})



install(TARGETS
  action_server_node
  DESTINATION lib/${PROJECT_NAME}
)


# Install Python scripts
install(PROGRAMS scripts/smach_node.py
  DESTINATION lib/${PROJECT_NAME}
)






# install(TARGETS
#   find_entities_server
#   DESTINATION lib/${PROJECT_NAME}
# )


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
