# Specify the minimum version for CMake
# https://cmake.org/download/
cmake_minimum_required(VERSION 4.0)

# Project Name
project(FurRailEngineers LANGUAGES CXX)

# Enable C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add deps subdirectory
add_subdirectory(deps)

# Get all source files from src
aux_source_directory(src SRC_LIST)
aux_source_directory(src/engine SRC_LIST)

# Get Include Directories
set (
        INCLUDE_DIRS
        include
        include/engine
        deps/glad/include
        deps/glad/include/glad
        deps/glfw/include/GLFW
)

include_directories(${INCLUDE_DIRS})

# Add executable to project
add_executable(${PROJECT_NAME} ${SRC_LIST})

# Link GLFW and GLEW to main executable
target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES}  )
