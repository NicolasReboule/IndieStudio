/*
** EPITECH PROJECT, 2022
** MouseHelper.hpp
** File description:
** MouseHelper.hpp
*/

#ifndef INDIESTUDIO_MOUSEHELPER_HPP
#define INDIESTUDIO_MOUSEHELPER_HPP

#include <raylib.h>
#include "raylib/Math.hpp"

namespace raylib {
    /**
     * @brief Input-related functions: mouse
     */
    class MouseHelper {
    public:
        static bool isMouseButtonPressed(int button);                                  // Check if a mouse button has been pressed once
        static bool isMouseButtonDown(int button);                                     // Check if a mouse button is being pressed
        static bool isMouseButtonReleased(int button);                                 // Check if a mouse button has been released once
        static bool isMouseButtonUp(int button);                                       // Check if a mouse button is NOT being pressed
        static int getMouseX();                                                    // Get mouse position X
        static int getMouseY();                                                    // Get mouse position Y
        static Vector2f getMousePosition();                                         // Get mouse position XY
        static Vector2f getMouseDelta();                                            // Get mouse delta between frames
        static void setMousePosition(int x, int y);                                    // Set mouse position XY
        static void setMouseOffset(int offsetX, int offsetY);                          // Set mouse offset
        static void setMouseScale(float scaleX, float scaleY);                         // Set mouse scaling
        static float getMouseWheelMove();                                          // Get mouse wheel movement Y
        static void setMouseCursor(int cursor);                                        // Set mouse cursor

        /**
         * @brief Get a ray trace from mouse position
         * @param mousePosition the mouse position
         * @param camera the camera
         * @return the ray trace
         */
        static Ray getMouseRay(Vector2f mousePosition,Camera camera);
    };
}

#endif //INDIESTUDIO_MOUSEHELPER_HPP
