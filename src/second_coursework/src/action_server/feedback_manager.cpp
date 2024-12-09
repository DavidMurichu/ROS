#include "action_server/feedback_manager.hpp"

FeedbackManager::FeedbackManager() :
    new_people_(0), new_dogs_(0), new_cats_(0) {}

void FeedbackManager::addDetection(const std::string &type, const geometry_msgs::msg::Pose &pose)
{
    if (type == "person")
    {
        people_positions_.push_back(pose);
        new_people_++;
    }
    else if (type == "dog")
    {
        dog_positions_.push_back(pose);
        new_dogs_++;
    }
    else if (type == "cat")
    {
        cat_positions_.push_back(pose);
        new_cats_++;
    }
    last_detected_position_ = pose;
}

int FeedbackManager::getNewPeople() { return new_people_; }
int FeedbackManager::getNewDogs() { return new_dogs_; }
int FeedbackManager::getNewCats() { return new_cats_; }

geometry_msgs::msg::Pose FeedbackManager::getLastDetectedPosition() { return last_detected_position_; }

std::vector<geometry_msgs::msg::Pose> FeedbackManager::getAllDetections(const std::string &type)
{
    if (type == "person")
        return people_positions_;
    else if (type == "dog")
        return dog_positions_;
    else
        return cat_positions_;
}
