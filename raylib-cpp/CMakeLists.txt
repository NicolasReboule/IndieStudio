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
        src/Core/CoreHelper.cpp
        src/Window/Window.cpp
        src/Text/Text.cpp
        src/2DObject/Shape.cpp
        src/Audio/AudioHelper.cpp
        src/3DObject/RlModel.cpp
        src/Texture/Texture.cpp
        src/Core/DrawHelper.cpp
        src/Camera/RlCamera.cpp
        src/Inputs/CursorHelper.cpp
        src/Inputs/TouchHelper.cpp
        src/Inputs/MouseHelper.cpp
        src/Inputs/KeyboardHelper.cpp
        src/Inputs/GamepadHelper.cpp
        src/Shader/RlShader.cpp
        src/Text/Fonts.cpp
        src/Audio/RlSound.cpp
        src/Audio/RlWave.cpp
        src/Audio/RlMusic.cpp
        src/Audio/RlAudioStream.cpp
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
        src/Text/Codepoint.cpp
        src/Text/TextHelper.cpp
        src/Image/ImageGenerator.cpp
        src/Audio/WaveHelper.cpp
        src/Core/WorldHelper.cpp
        src/Core/FileHelper.cpp
        src/Core/CompressHelper.cpp
        )
target_link_libraries(${PROJECT_NAME} raylib)
