cmake_minimum_required(VERSION 3.15)

# Set the project name
project(Learning_cmake VERSION 1.0)

# Configure version of the project
configure_file(config.h.in config.h)

# Add the executable
add_executable(Learning_cmake src/main.cpp)

# Add directory to the list of path to search for includes files
target_include_directories(Learning_cmake PUBLIC "${PROJECT_BINARY_DIR}")