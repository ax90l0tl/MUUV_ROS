from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
import time
from ament_index_python import get_package_share_directory

def generate_launch_description():
    ld = LaunchDescription()

    motor_launch_file = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("muuv_control"),
                "launch/motor_controller.launch.py",
            )
        )
    ),
    pid_launch_file = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("muuv_control"),
                "launch/pid_node.launch.py",
            )
        )
    ),
    thruster_launch_file = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("muuv_control"),
                "launch/thrusters.launch.py",
            )
        )
    ),
    ld.add_action(pid_launch_file)
    ld.add_action(motor_launch_file)
    ld.add_action(thruster_launch_file)
    return ld
