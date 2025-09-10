cmake_minimum_required(VERSION 4.0)
project(GLAD)

# Get all source files from src
aux_source_directory(src SRC_LIST)

# Get Include Directories
set (
        INCLUDE_DIRS
        include
)

include_directories(${INCLUDE_DIRS})
