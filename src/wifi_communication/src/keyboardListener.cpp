#include <ros/ros.h>
#include <std_msgs/Char.h>

#include <iostream>
#include <string>

void subscriberCallback(const std_msgs::Char::ConstPtr& msg)
{
    std::cout << "Recebido: " << msg->data << std::endl; 
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "keyboardListener");
    ros::NodeHandle _nh;

    ros::Subscriber listener = _nh.subscribe("keyboard", 1, subscriberCallback);

    ros::spin();
}