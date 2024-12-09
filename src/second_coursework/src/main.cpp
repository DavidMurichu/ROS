#include <rclcpp/rclcpp.hpp>
#include "action_server/action_server.hpp"

int main(int argc, char *argv[])
{
    // Initialize the ROS 2 system
    rclcpp::init(argc, argv);

    // Create an instance of your ActionServer node
    auto action_server_node = std::make_shared<ActionServer>(rclcpp::NodeOptions());

    // Spin the node to process callbacks
    rclcpp::spin(action_server_node);

    // Shutdown ROS 2 after execution
    rclcpp::shutdown();

    return 0;
}
