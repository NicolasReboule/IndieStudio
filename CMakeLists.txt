cmake_minimum_required(VERSION 3.17) # Set minimum required cmake version
project(IndieStudio) # Project name

set(CMAKE_CXX_STANDARD 20) # Standard version to use of C++
set(BINARY_NAME "bomberman") # Binary name
set(ASSETS_PATH "${CMAKE_CURRENT_SOURCE_DIR}/assets/") # Directory containing resources

if (UNIX)
    set(CMAKE_CXX_FLAGS_RELEASE "-W -Wall -Wextra") #TODO: remove this line
endif(UNIX)

add_subdirectory(raylib-cpp/) # Depend on raylib-cpp

include_directories(include raylib-cpp/include/) # Add the good includes

add_executable(${BINARY_NAME}
        main.cpp
        src/start/StartScene.cpp
        src/start/Logo.cpp
        src/mainMenu/MainMenuScene.cpp
        src/mainMenu/ButtonStart.cpp
        src/mainMenu/ButtonQuit.cpp
        src/game/GameScene.cpp
        src/game/Wall.cpp
        src/game/Player.cpp
        src/game/Bomb.cpp
        src/game/WallDestroyable.cpp
        src/chooseNumberPlayer/ChooseNumberPlayerScene.cpp
        src/chooseNumberPlayer/Button1p.cpp
        src/chooseNumberPlayer/Button2p.cpp
        src/chooseNumberPlayer/Button3p.cpp
        src/chooseNumberPlayer/Button4p.cpp
        src/global/GlobalScene.cpp
        src/global/Global.cpp
        src/global/GlobalInstance.cpp
        src/game/Magma.cpp
        src/game/ButtonMainMenu.cpp
        src/game/ButtonQuitx05.cpp
        src/game/ButtonResume.cpp
        )

target_link_libraries(${BINARY_NAME} raylib-cpp) # Link raylib-cpp to the executable

# Change default target on Visual Studio
if (MSVC)
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${BINARY_NAME})
endif (MSVC)

# Copy assets if the current binary dir is not where the CMakeLists.txt is located
if ((EXISTS ${ASSETS_PATH}) AND (NOT CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR))
    add_custom_target(setup_assets
			COMMAND ${CMAKE_COMMAND} -E copy_directory ${ASSETS_PATH} ${CMAKE_CURRENT_BINARY_DIR}/assets
	)
    add_dependencies(${BINARY_NAME} setup_assets)
endif ()
