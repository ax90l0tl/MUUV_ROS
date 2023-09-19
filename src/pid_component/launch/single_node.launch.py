"""Launch pid nodes in a component container."""

import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    """Generate launch description with multiple components."""
    container = ComposableNodeContainer(
        name="pid_container",
        namespace="",
        package="rclcpp_components",
        executable="component_container",
        composable_node_descriptions=[
            ComposableNode(
                package="pid_component",
                plugin="Pid_component",
                name="pid_x",
                parameters=[
                    {
                        "ctrl_effort_name": "ctrl_effort_x",
                        "setpoint_name": "setpoint_x",
                        "state_name": "imu_x",
                        "gains.p": 0.5,
                        "gains.i": 0.02,
                        "gains.d": 0.01,
                        "gains.i_max": 1.0,
                        "gains.i_min": -1.0,
                        "antiwindup" : True,
                    }
                ],
            ),
        ],
        output="screen",
    )

    return launch.LaunchDescription([container])
