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
        src/scene/ChooseNumberPlayerScene.cpp
        src/game/Bomb.cpp
        src/game/Bonus.cpp
        src/button/ButtonMainMenu.cpp
        src/button/ButtonResume.cpp
        src/scene/GameScene.cpp
        src/game/Magma.cpp
        src/game/Player.cpp
        src/game/Wall.cpp
        src/game/WallDestroyable.cpp
        src/global/GlobalInstance.cpp
        src/scene/MainMenuScene.cpp
        src/Image.cpp
        src/scene/StartScene.cpp
        src/scene/WinningScene.cpp
        src/button/IndieButton.cpp
        src/button/ButtonQuit.cpp
        src/button/ButtonRestart.cpp src/map/Map3DLoader.cpp include/map/Map3DLoader.hpp src/map/Map.cpp include/map/Map.hpp)

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

install(TARGETS ${BINARY_NAME} RUNTIME DESTINATION bin)
install(DIRECTORY assets DESTINATION bin)

include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
set(CPACK_PACKAGE_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/dist")
set(CPACK_SOURCE_GENERATOR "TGZ")
include(CPack)
