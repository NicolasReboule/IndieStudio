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
        src/raylib/2DObject/Collision2DHelper.cpp
        src/raylib/2DObject/Shape2DHelper.cpp
        src/raylib/3DObject/Collision3DHelper.cpp
        src/raylib/3DObject/MeshGenerator.cpp
        src/raylib/3DObject/MeshHelper.cpp
        src/raylib/3DObject/ModelHelper.cpp
        src/raylib/3DObject/RlMaterial.cpp
        src/raylib/3DObject/RlMesh.cpp
        src/raylib/3DObject/RlMesh.cpp
        src/raylib/3DObject/RlMeshBuilder.cpp
        src/raylib/3DObject/RlModel.cpp
        src/raylib/3DObject/RlModelAnim.cpp
        src/raylib/3DObject/Shape3DHelper.cpp
        src/raylib/Audio/AudioHelper.cpp
        src/raylib/Audio/RlAudioStream.cpp
        src/raylib/Audio/RlMusic.cpp
        src/raylib/Audio/RlMusic.cpp
        src/raylib/Audio/RlSound.cpp
        src/raylib/Audio/RlSound.cpp
        src/raylib/Audio/RlWave.cpp
        src/raylib/Audio/WaveHelper.cpp
        src/raylib/Camera/CameraHelper.cpp
        src/raylib/Camera/RlCamera.cpp
        src/raylib/Color/ColorHelper.cpp
        src/raylib/Color/RlColor.cpp
        src/raylib/Core/CoreHelper.cpp
        src/raylib/Core/DrawHelper.cpp
        src/raylib/Core/FileHelper.cpp
        src/raylib/Core/WorldHelper.cpp
        src/raylib/exception/BuilderException.cpp
        src/raylib/exception/RaylibException.cpp
        src/raylib/exception/WindowException.cpp
        src/raylib/Image/ImageGenerator.cpp
        src/raylib/Image/ImageHelper.cpp
        src/raylib/Image/RlImage.cpp
        src/raylib/Image/RlImageBuilder.cpp
        src/raylib/Inputs/CursorHelper.cpp
        src/raylib/Inputs/GamepadHelper.cpp
        src/raylib/Inputs/KeyboardHelper.cpp
        src/raylib/Inputs/MouseHelper.cpp
        src/raylib/Inputs/TouchHelper.cpp
        src/raylib/Math/VectorHelper.cpp
        src/raylib/Shader/RlShader.cpp
        src/raylib/Shader/ShaderUtils.cpp
        src/raylib/Text/Codepoint.cpp
        src/raylib/Text/RlFont.cpp
        src/raylib/Text/Text.cpp
        src/raylib/Text/TextHelper.cpp
        src/raylib/Texture/RlTexture.cpp
        src/raylib/Texture/TextureHelper.cpp
        src/raylib/Random.cpp
        src/raylib/Window/RlWindow.cpp
        src/raylib/Window/System.cpp

        src/GameEngine/Audio/AudioManager.cpp
        src/GameEngine/Audio/Isound.cpp
        src/GameEngine/Audio/Fx.cpp
        src/GameEngine/Audio/Music.cpp
        src/GameEngine/Nodes/StaticBody.cpp
        src/GameEngine/SceneManager.cpp
        src/GameEngine/Scene.cpp
        src/GameEngine/MainScene.cpp
        src/GameEngine/Nodes/2D/Button.cpp

        )
target_link_libraries(${PROJECT_NAME} raylib)
