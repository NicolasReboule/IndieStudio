cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(raylib REQUIRED)
file(GLOB_RECURSE HEADERS RELATIVE ${PROJECT_SOURCE_DIR} "include/*.hpp")

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME} ${HEADERS}
        src/Window/Window.cpp
)
target_link_libraries(${PROJECT_NAME} raylib)