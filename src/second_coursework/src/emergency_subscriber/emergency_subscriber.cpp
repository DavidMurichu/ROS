#include "rclcpp/rclcpp.hpp"
#include "second_coursework/msg/emergency_msg.hpp"  // Include the custom message header
#include "std_msgs/msg/string.hpp"

class EmergencySubscriber : public rclcpp::Node
{
public:
    EmergencySubscriber()
    : Node("emergency_subscriber")
    {
        // Subscribe to the /emergency topic
        subscription_ = this->create_subscription<second_coursework::msg::EmergencyMsg>(
            "/emergency", 10, std::bind(&EmergencySubscriber::emergency_callback, this, std::placeholders::_1));
    }

private:
    void emergency_callback(const second_coursework::msg::EmergencyMsg::SharedPtr msg) const
    {
        // Print the emergency description and duration (robot patrol time)
        RCLCPP_INFO(this->get_logger(), "Emergency detected: '%s' | Duration: %f seconds",
            msg->description.c_str(), msg->duration);

        // Here you would trigger the robot's behavior
    }

    rclcpp::Subscription<second_coursework::msg::EmergencyMsg>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EmergencySubscriber>());
    rclcpp::shutdown();
    return 0;
}
