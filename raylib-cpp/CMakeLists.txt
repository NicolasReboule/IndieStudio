cmake_minimum_required(VERSION 3.17)
project(raylib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

if (UNIX)
    set(CMAKE_CXX_FLAGS_RELEASE "-W -Wall -Wextra") #TODO: remove this line
endif(UNIX)

find_package(raylib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME}
        src/raylib/2DObject/Collision2DHelper.cpp
        src/raylib/3DObject/Collision3DHelper.cpp
        src/raylib/3DObject/MeshGenerator.cpp
        src/raylib/3DObject/RlAnimation.cpp
        src/raylib/3DObject/RlMaterial.cpp
        src/raylib/3DObject/RlMesh.cpp
        src/raylib/3DObject/RlMesh.cpp
        src/raylib/3DObject/RlMeshBuilder.cpp
        src/raylib/3DObject/RlModel.cpp
        src/raylib/3DObject/RlModelAnimation.cpp
        src/raylib/3DObject/RlModelBuilder.cpp
        src/raylib/Audio/AudioHelper.cpp
        src/raylib/Audio/RlAudioStream.cpp
        src/raylib/Audio/RlMusicStream.cpp
        src/raylib/Audio/RlMusicStream.cpp
        src/raylib/Audio/RlSound.cpp
        src/raylib/Audio/RlSound.cpp
        src/raylib/Audio/RlWave.cpp
        src/raylib/Camera/CameraHelper.cpp
        src/raylib/Camera/RlCamera.cpp
        src/raylib/Camera/RlCameraBuilder.cpp
        src/raylib/Color/ColorHelper.cpp
        src/raylib/Color/RlColor.cpp
        src/raylib/Core/CoreHelper.cpp
        src/raylib/Core/FileHelper.cpp
        src/raylib/Core/WorldHelper.cpp
        src/raylib/Draw/Draw2DHelper.cpp
        src/raylib/Draw/Draw3DHelper.cpp
        src/raylib/Draw/DrawHelper.cpp
        src/raylib/Draw/DrawModelHelper.cpp
        src/raylib/Draw/DrawTextHelper.cpp
        src/raylib/Draw/DrawTextureHelper.cpp
        src/raylib/exception/BuilderException.cpp
        src/raylib/exception/InvalidArgumentException.cpp
        src/raylib/exception/RaylibException.cpp
        src/raylib/exception/WindowException.cpp
        src/raylib/GlStateManager.cpp
        src/raylib/Image/ImageDrawHelper.cpp
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
        src/raylib/Random.cpp
        src/raylib/Shader/RlShader.cpp
        src/raylib/Text/RlFont.cpp
        src/raylib/Text/RlText.cpp
        src/raylib/Text/RlTextBuilder.cpp
        src/raylib/Text/TextCodepoint.cpp
        src/raylib/Text/TextHelper.cpp
        src/raylib/Texture/RlRenderTexture.cpp
        src/raylib/Texture/RlTexture.cpp
        src/raylib/Window/RlWindow.cpp
        src/raylib/Window/System.cpp

        src/GameEngine/Audio/AbstractSound.cpp
        src/GameEngine/Audio/AudioManager.cpp
        src/GameEngine/Audio/Music.cpp
        src/GameEngine/Audio/Sound.cpp
        src/GameEngine/exception/GameEngineException.cpp
        src/GameEngine/exception/MapParserException.cpp
        src/GameEngine/Nodes/2D/Button.cpp
        src/GameEngine/Nodes/2D/Label.cpp
        src/GameEngine/Nodes/2D/Node2D.cpp
        src/GameEngine/Nodes/2D/TextureRect.cpp
        src/GameEngine/Nodes/3D/Grid3D.cpp
        src/GameEngine/Nodes/3D/KinematicBody.cpp
        src/GameEngine/Nodes/3D/Node3D.cpp
        src/GameEngine/Nodes/3D/StaticBody.cpp
        src/GameEngine/Nodes/AbstractBase.cpp
        src/GameEngine/Scene.cpp
        src/GameEngine/SceneManager.cpp
        src/GameEngine/TextureManager.cpp
        )
target_link_libraries(${PROJECT_NAME} raylib)

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY include/raylib DESTINATION include)
install(DIRECTORY include/GameEngine DESTINATION include)