from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python import get_package_share_directory


def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
    get_package_share_directory('muuv_control'),
    'config',
    'motor_force_config.yaml'
    )
        
    ekf=Node(
        package="robot_localization",
        executable="ekf_node",
        name="ekf_node",
        output="screen",
        emulate_tty=True,
        parameters=[config],
    )

    ld.add_action(ekf)

    return ld
