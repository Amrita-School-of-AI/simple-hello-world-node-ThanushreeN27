#include <chrono>
#include <functional>
#include <memory>
<<<<<<< HEAD
=======
#include <string>
>>>>>>> a1836a9da273a7f28624064c86f3d6d8b6386c01

#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

<<<<<<< HEAD
=======
/*
 * TODO: Create a Class named 'HelloNode' that inherits from rclcpp::Node.
 * Requirements:
 * 1. The constructor should name the node "hello_world_node".
 * 2. Create a timer that triggers every 1000ms (1 second).
 * 3. The timer callback should print "Hello, World!" using the RCLCPP_INFO macro.
 */

>>>>>>> a1836a9da273a7f28624064c86f3d6d8b6386c01
class HelloNode : public rclcpp::Node
{
public:
  HelloNode()
  : Node("hello_world_node")
  {
<<<<<<< HEAD
    timer_ = this->create_wall_timer(
      1000ms, std::bind(&HelloNode::timer_callback, this));
  }

private:
  void timer_callback()
  {
    RCLCPP_INFO(this->get_logger(), "Hello, World!");
  }
=======
    // TODO: Initialize the timer here
  }

private:
  // TODO: Define the timer_callback function here
>>>>>>> a1836a9da273a7f28624064c86f3d6d8b6386c01

  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HelloNode>());
  rclcpp::shutdown();
  return 0;
}
