cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

if (UNIX)
    set(CMAKE_CXX_FLAGS "-W -Wall -Wextra") #TODO: remove this line
endif (UNIX)

find_package(raylib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME}
        src/Core/Core.cpp
        src/Window/Window.cpp
        src/Text/Text.cpp
        src/2DObject/Shape.cpp
        src/Audio/Audio.cpp
        src/3DObject/RlModel.cpp
        src/Texture/Texture.cpp
        src/Core/DrawHelper.cpp
        src/Camera/RlCamera.cpp
        src/Inputs/Cursor.cpp
        src/Inputs/Touch.cpp
        src/Inputs/Mouse.cpp
        src/Inputs/Keyboard.cpp
        src/Inputs/Gamepad.cpp
        src/Shader/RlShader.cpp
        src/Text/Fonts.cpp
        src/Audio/RlSound.cpp
        src/Audio/RlWave.cpp
        include/raylib/Audio/RlWave.hpp
        src/Audio/RlMusic.cpp
        include/raylib/Audio/RlMusic.hpp
        src/Audio/RlAudioStream.cpp
        include/raylib/Audio/RlAudioStream.hpp
        src/3DObject/ModelAnim.cpp
        src/3DObject/RlMaterial.cpp
        src/3DObject/RlMesh.cpp
        src/3DObject/Shape3DHelper.cpp
        src/3DObject/ModelHelper.cpp
        src/3DObject/Collision3DHelper.cpp
        src/2DObject/Shape2DHelper.cpp
        src/2DObject/Collision2DHelper.cpp
        src/Image/RlImage.cpp
        src/Image/ImageHelper.cpp
        src/Image/ColorHelper.cpp
        src/Texture/TextureHelper.cpp
        src/3DObject/MeshGenerator.cpp
        )
target_link_libraries(${PROJECT_NAME} raylib)
