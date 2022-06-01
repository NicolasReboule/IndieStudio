cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(raylib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME}
        src/Core.cpp
        src/Window/Window.cpp
        src/Text.cpp
        src/Shape.cpp
        src/Audio.cpp
        src/Models.cpp
        src/Texture.cpp
        src/Draw.cpp
        src/Cameras.cpp
        src/Cursor.cpp
        src/Touch.cpp
        src/Mouse.cpp
        src/Keyboard.cpp
        src/Gamepad.cpp
        src/Shaders.cpp
        src/Fonts.cpp
        )
target_link_libraries(${PROJECT_NAME} raylib)
