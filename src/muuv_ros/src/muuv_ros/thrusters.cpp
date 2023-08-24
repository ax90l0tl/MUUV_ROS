#include "thrusters.hpp"

using std::placeholders::_1;

Thrusters::Thrusters() : rclcpp::Node("thrusters")
{
  ctrl_sub = this->create_subscription<geometry_msgs::msg::Twist>(
      "target", 10, std::bind(&Thrusters::ctrl_effort_Callback, this, _1));
  this->declare_parameter("pi_address", "192.168.8.157");
  this->declare_parameter("pi_port", "8888");
  pi = pigpio_start((const char *)this->get_parameter("pi_address").as_string().c_str(), this->get_parameter("pi_port").as_string().c_str());
  cout << "pigpio_id " << pi << endl;
  motor[0] = new PWM_obj(pi, 17);
  motor[1] = new PWM_obj(pi, 22);
  motor[2] = new PWM_obj(pi, 23);
}

Thrusters::~Thrusters()
{
  RCLCPP_INFO(this->get_logger(), "Destructing");
  for (int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    cout << "deleting motor " << i << endl;
    delete motor[i];
  }
}

void Thrusters::ctrl_effort_Callback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  double transform[6] = {msg->linear.x, msg->linear.y, msg->linear.z, msg->angular.x, msg->angular.y, msg->angular.z};
  // System of linear equation
  // speed*motor_wrench = direction
  speed[2] = transform[5] / sqrt(3) + (transform[0] + transform[4]) / 3;
  speed[1] = (transform[0] + transform[4]) / 1.5 - speed[2];
  speed[0] = transform[0] - speed[1] - speed[2];
  float max = *max_element(speed, speed + 3);
  for (int i = 0; i < 3; i++)
  {
    speed[i] = speed[i] / max;
  }
  run();
}

void Thrusters::run()
{
  for (int i = 0; i < 3; i++)
  {
    motor[i]->run(speed[i]);
  }
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Thrusters>());
  rclcpp::shutdown();
  return 0;
}