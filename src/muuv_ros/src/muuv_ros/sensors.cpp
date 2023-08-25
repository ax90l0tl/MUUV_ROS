#include "sensors.hpp"

using std::placeholders::_1;

Sensors::Sensors() : rclcpp::Node("sensors"), count_(0)
{
    this->declare_parameter("pi_address", "192.168.8.157");
    this->declare_parameter("pi_port", "8888");
    pi = pigpio_start(this->get_parameter("pi_address").as_string().c_str(),
                      this->get_parameter("pi_port").as_string().c_str());
    if (pi < 0)
    {
        RCLCPP_INFO(this->get_logger(), "PI not detected!");
    }
    cout << "pigpio_id " << pi << endl;
    // create a dummy pointer for the class obj imu
    unique_ptr<MTi> dummy(new MTi(pi));
    imu = move(dummy);
    if (imu->detect(1000))
    {
        const string modes[3] = {"QUATERNION", "RATEOFTURNHR", "ACCELERATION"};
        const uint16_t hz[3] = {100, 100, 100};
        imu->configureOutputs(modes, hz, 3);
        imu->goToMeasurement();
        imu_pub = this->create_publisher<sensor_msgs::msg::Imu>("imu_data", 1);
        int n = sizeof(hz) / sizeof(hz[0]);
        int period = 1000 / (*max_element(hz, hz + n));
        timer_ = this->create_wall_timer(chrono::milliseconds(period), bind(&Sensors::timer_Callback, this));
        RCLCPP_INFO(this->get_logger(), "Publishing to topic: imu_data at '%i' hz", 1000 / period);
    }
    else
    {
        RCLCPP_INFO(this->get_logger(), "IMU not detected!");
    }
}

Sensors::~Sensors()
{
    RCLCPP_INFO(this->get_logger(), "Destructing");
}

void Sensors::timer_Callback()
{
    auto msg = sensor_msgs::msg::Imu();
    // imu->printData();
    imu->readData();
    msg.header.stamp = now();

    msg.orientation.x = imu->getQuat()[0];
    msg.orientation.y = imu->getQuat()[1];
    msg.orientation.z = imu->getQuat()[2];
    msg.orientation.w = imu->getQuat()[3];
    msg.orientation_covariance = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    msg.angular_velocity.x = imu->getRateOfTurn()[0];
    msg.angular_velocity.y = imu->getRateOfTurn()[1];
    msg.angular_velocity.z = imu->getRateOfTurn()[2];
    msg.angular_velocity_covariance = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    msg.linear_acceleration.x = imu->getAcceleration()[0];
    msg.linear_acceleration.y = imu->getAcceleration()[1];
    msg.linear_acceleration.z = imu->getAcceleration()[2];
    msg.linear_acceleration_covariance = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    imu_pub->publish(msg);
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Sensors>());
    rclcpp::shutdown();
    return 0;
}