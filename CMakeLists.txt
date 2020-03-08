cmake_minimum_required(VERSION 3.15)

# Set the cxx standard
set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the project name
project(Learning_cmake VERSION 1.0)

# Configure version of the project
configure_file(config.h.in config.h)

# Bring all header files because they are stored in a separate folder.
include_directories(include)

# Add all files
file(GLOB SOURCES src/*.cpp)

# Add the executable
add_executable(Learning_cmake ${SOURCES})

# Add directory to the list of path to search for includes files
target_include_directories(Learning_cmake PUBLIC "${PROJECT_BINARY_DIR}")