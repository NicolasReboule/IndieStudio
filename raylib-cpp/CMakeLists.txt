cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(raylib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME}
        src/GameEngine/GameEngine.cpp
        src/GameEngine/Component.cpp
        src/GameEngine/Node.cpp src/Core.cpp include/raylib/Core.hpp)
target_link_libraries(${PROJECT_NAME} raylib)
