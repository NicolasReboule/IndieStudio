cmake_minimum_required(VERSION 3.17) # Set minimum required cmake version
project(IndieStudio) # Project name

set(CMAKE_CXX_STANDARD 20) # Standard version to use of C++
set(BINARY_NAME "bomberman") # Binary name
set(ASSETS_PATH "${CMAKE_CURRENT_SOURCE_DIR}/assets/") # Directory containing resources

if (UNIX)
    set(CMAKE_CXX_FLAGS "-W -Wall -Wextra")
endif (UNIX)

add_subdirectory(raylib-cpp/) # Depend on raylib-cpp

include_directories(include raylib-cpp/include/) # Add the good includes
add_executable(${BINARY_NAME} main.cpp
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
