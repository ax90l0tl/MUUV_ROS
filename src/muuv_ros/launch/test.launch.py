from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python import get_package_share_directory


def generate_launch_description():
    ld = LaunchDescription(
        [
            Node(
                package="muuv_ros",
                executable="sensors",
                name="sensors",
                output="screen",
                emulate_tty=True,
                parameters=[{"pi_address": "192.168.8.157"}],
            ),
            Node(
                package="muuv_ros",
                executable="pid_recombiner",
                name="pid_recombiner",
                output="screen",
                emulate_tty=True,
            ),
            Node(
                package="muuv_ros",
                executable="imu_repub",
                name="imu_repub",
                output="screen",
                emulate_tty=True,
            ),
        ]
    )
    pid_launch_file = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("pid_component"), "launch/pid.launch.py"
            )
        )
    )

    ld.add_action(pid_launch_file)

    return ld
