import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.substitutions import FindPackageShare
from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    DeclareLaunchArgument,
    ExecuteProcess,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    LaunchConfiguration,
    PythonExpression,
    PathJoinSubstitution,
    TextSubstitution,
)
from launch.conditions import IfCondition

from launch_ros.actions import Node

# !!! MAKE SURE YOU SET THE PACKAGE NAME CORRECTLY !!!

package_name = "muuv_sim_control"  # <--- CHANGE ME
# Name of the robot model
model_name = DeclareLaunchArgument("model_name", default_value="muuv_sim")
# Namespace of the robot in the simulation (it can be different from the original model name)
uuv_name = DeclareLaunchArgument(
    "uuv_name", default_value=LaunchConfiguration('model_name')
)
# Name of the base link
base_link = DeclareLaunchArgument("base_link", default_value="base_link")
# Thruster manager timeout.
# If no wrench topic is received in the thruster
# manager input for the time determined by the timeout, the manager will
# publish zeros.
# If the timeout is set to -1, the latest received input is always going to
# be redistributed to the thruster units.
timeout = DeclareLaunchArgument("timeout", default_value="-1")

# In case the TAM.yaml must be generated or updated, you can set this flag to
# true. The thruster allocation matrix is stored in a file because the
# tf listener, that retrieves the pose of the thrusters wrt the vehicle's
# base link in runtime, takes a long time to start. This initialization time
# can make the vehicle's inactive until the tf frames are available. Be
# sure to keep the thruster allocation matrix stored in a TAM.yaml to
# improve the initialization of the thruster manager.
# To generate the TAM.yaml, start the simulation with the vehicle and run:

# >> roslaunch $CATKIN_PACKAGE start_thruster_manager.launch reset_tam:=true

# The TAM.yaml file will be store in the folder defined by the following
# argument output_dir

reset_tam = DeclareLaunchArgument("reset_tam", default_value="true")

#  Output folder to store the TAM.yaml and thruster_manager.yaml files
output_dir = DeclareLaunchArgument("output_dir", default_value="package")
# Thruster manager configuration file path
config_file = DeclareLaunchArgument(
    "config_file",
    default_value=TextSubstitution(text=str("$(find muuv_sim_control)/config/thruster_manager.yaml"))
)
# Thruster allocation matrix file path
tam_file = DeclareLaunchArgument(
    "tam_file", default_value=TextSubstitution(text=str("$(find muuv_sim_control)/config/TAM.yaml"))
)


def generate_launch_description():
    # Launch them all!
    return LaunchDescription(
        [
            model_name, uuv_name, base_link, timeout,
            reset_tam, output_dir, config_file, tam_file,
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare('uuv_thruster_manager'),
                                "launch",
                                "thruster_manager.launch",
                            ])
                    ]),
                launch_arguments={
                    "model_name" : LaunchConfiguration('model_name'),
                    "uuv_name" : LaunchConfiguration('uuv_name'),
                    "base_link" : LaunchConfiguration('base_link'),
                    "timeout" : LaunchConfiguration('timeout'),
                    "reset_tam" : LaunchConfiguration('reset_tam'),
                    "output_dir" : LaunchConfiguration('output_dir'),
                    "config_file" : LaunchConfiguration('config_file'),
                    "tam_file" : LaunchConfiguration('tam_file'),
                    }.items(),
            )
        ]
    )
