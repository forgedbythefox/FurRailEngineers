# Specify the minimum version for CMake
# https://cmake.org/download/
cmake_minimum_required(VERSION 4.0)

# Project Name
project(FurRailEngineers LANGUAGES CXX)

# Add GLFW as a subdirectory
add_subdirectory(external/glfw)

# Enable C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
)

add_executable(FurRailEngineers src/main.cpp)

# Link GLFW target
target_link_libraries(FurRailEngineers glfw)
