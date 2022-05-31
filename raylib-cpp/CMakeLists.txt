cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(raylib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME}
        src/Core.cpp
        src/Window/Window.cpp
        src/Text.cpp include/raylib/Text.hpp src/Shape.cpp include/raylib/Shape.hpp src/Audio.cpp include/raylib/Audio.hpp src/Models.cpp include/raylib/Models.hpp src/Texture.cpp include/raylib/Texture.hpp)
target_link_libraries(${PROJECT_NAME} raylib)
