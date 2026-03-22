cmake_minimum_required(VERSION 3.25)

# 1. This is the crucial part: it tells CMake to look for the Geode SDK
find_package(GeodeSDK REQUIRED)

# 2. Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 3. Define the project name
project(OpenChests VERSION 1.0.0)

# 4. Create the mod library from your main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 5. Now it will recognize this command!
setup_geode_mod(${PROJECT_NAME})
