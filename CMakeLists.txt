cmake_minimum_required(VERSION 3.17)
project(IndieStudio)

set(CMAKE_CXX_STANDARD 20)
set(BINARY_NAME "bomberman")

if (UNIX)
    set(CMAKE_CXX_FLAGS "-W -Wall -Wextra")
endif (UNIX)

add_subdirectory(raylib-cpp/)

include_directories(include raylib-cpp/include/)
add_executable(${BINARY_NAME} main.cpp
        )
target_link_libraries(${BINARY_NAME} raylib-cpp)
