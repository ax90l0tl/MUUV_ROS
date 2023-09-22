import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("uuv_gazebo_worlds"),
                "launch",
                "empty_underwater_world.launch",
            )
        )
    )

    spawner = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("muuv_sim_description"),
                "launch",
                "upload.launch.py",
            )
        )
    )

    thruster_manager = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("muuv_sim_control"),
                "launch",
                "start_thruster_manager.launch.py",
            )
        )
    )

    # Launch them all!
    return LaunchDescription(
        [
            gazebo,
            spawner,
            thruster_manager,
        ]
    )
