#ifndef FEEDBACK_MANAGER_HPP
#define FEEDBACK_MANAGER_HPP

#include <vector>
#include <geometry_msgs/msg/pose.hpp>

class FeedbackManager
{
public:
    FeedbackManager();
    void addDetection(const std::string &type, const geometry_msgs::msg::Pose &pose);
    int getNewPeople();
    int getNewDogs();
    int getNewCats();
    geometry_msgs::msg::Pose getLastDetectedPosition();
    std::vector<geometry_msgs::msg::Pose> getAllDetections(const std::string &type);

private:
    int new_people_;
    int new_dogs_;
    int new_cats_;
    geometry_msgs::msg::Pose last_detected_position_;
    std::vector<geometry_msgs::msg::Pose> people_positions_;
    std::vector<geometry_msgs::msg::Pose> dog_positions_;
    std::vector<geometry_msgs::msg::Pose> cat_positions_;
};

#endif // FEEDBACK_MANAGER_HPP
