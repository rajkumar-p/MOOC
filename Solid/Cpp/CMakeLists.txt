cmake_minimum_required(VERSION 3.7)

# Setup project name
project(Solid)

# Use C++14
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# Setup include directories
include_directories(include)

# Setup source files
file(GLOB SOURCE_FILES src/*.cpp)

# Executable targets
add_executable(solid ${SOURCE_FILES})
