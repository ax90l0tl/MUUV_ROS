import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

import subprocess


def generate_launch_description():
    ld = LaunchDescription()

    global_parameters = os.path.join(
        get_package_share_directory("muuv_ros"), "config", "global_params.yaml"
    )

    compile_command = ["g++", "pigpio_start.cpp", "-o", "pigpio_start", "-lpigpiod_if2"]
    run_command = ["./pigpio_start"]

    # Compile the C++ program
    compile_process = subprocess.run(
        compile_command, stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )

    # Check if the compilation was successful
    if compile_process.returncode == 0:
        print("Compilation successful.")
        # Run the compiled program
        run_process = subprocess.run(
            run_command, stdout=subprocess.PIPE, stderr=subprocess.PIPE
        )

        # Get the output and error messages from the program
        output = run_process.stdout.decode()
        error = run_process.stderr.decode()

        # Print the output and error messages
        print("Output:")
        print(output)

        print("Error:")
        print(error)
    else:
        # Print the compilation error messages
        print("Compilation failed.")
        print(compile_process.stderr.decode())

    global_param_node = Node(
        package="muuv_ros",
        executable="global_parameter_server",
        name="global_parameter_server",
        parameters=[global_parameters],
    )

    ld.add_action(global_param_node)

    return ld
