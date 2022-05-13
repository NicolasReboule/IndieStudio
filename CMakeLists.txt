cmake_minimum_required(VERSION 3.22)
project(B_YEP_400_RUN_4_1_indiestudio_alwyn_mattapullut)

set(CMAKE_CXX_STANDARD 14)

add_executable(B_YEP_400_RUN_4_1_indiestudio_alwyn_mattapullut
        main.cpp
        raylib/camera/camera.cpp
        raylib/gamepad/gamepad.cpp
        raylib/raycast/raycast.cpp
        raylib/window/window.cpp
        raylib/mesh/cube/cube.cpp

        kinematicBody.cpp
        )
target_link_libraries(${PROJECT_NAME} -lraylib -lGL -lm -lpthread -ldl -lrt -lX11)