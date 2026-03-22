cmake_minimum_required(VERSION 3.25)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the project name (must match your mod.json id or name)
project(OpenChests VERSION 1.0.0)

# Setup the Geode mod binary
# This tells the compiler to take your main.cpp and turn it into the mod
add_library(${PROJECT_NAME} SHARED main.cpp)

# This is the "magic" line that connects your code to Geode
# It handles all the complex background stuff automatically
setup_geode_mod(${PROJECT_NAME})
