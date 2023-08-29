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

  const std::map<std::string, int> &motor_pins = {{"0", 17}, {"1", 22}, {"2", 27}};
  this->declare_parameters("motor", motor_pins);
  
  int motor[3] = {int(this->get_parameter("motor.0").as_int()),
                  int(this->get_parameter("motor.1").as_int()),
                  int(this->get_parameter("motor.2").as_int())};
  for (int i = 0; i < 3; i++)
  {
    unique_ptr<PWM_obj> temp(new PWM_obj(pi, motor[i]));
    motor_[i] = move(temp);
  }
}

Thrusters::~Thrusters()
{
  RCLCPP_INFO(this->get_logger(), "Destructing");
}

void Thrusters::ctrl_effort_Callback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  double transform[6] = {msg->linear.x, msg->linear.y, msg->linear.z, msg->angular.x, msg->angular.y, msg->angular.z};
  // int n = sizeof(transform) / sizeof(transform[0]);
  // double min = *min_element(transform, transform + n);
  // double max = *max_element(transform, transform + n);
  // for(int i = 0; i < n; i++){
  //   transform[i] = (1/(max-min))*transform[i];
  // }
  // System of linear equation
  // speed*motor_wrench = direction
  speed[2] = transform[5];
  speed[1] = transform[3];
  speed[0] = transform[4];
  // float max = *max_element(speed, speed + 3);
  // for (int i = 0; i < 3; i++)
  // {
  // speed[i] = speed[i] / max;
  // }
  run();
}

void Thrusters::run()
{
  for (int i = 0; i < 3; i++)
  {
    motor_[i]->run(speed[i]);
  }
}


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Thrusters>());
  rclcpp::shutdown();
  return 0;
}