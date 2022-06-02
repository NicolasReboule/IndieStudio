/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Mouse
*/

#ifndef MOUSE_HPP_
#define MOUSE_HPP_

#include "raylib.h"

namespace raylib {
    class Mouse {
        public:
            // Input-related functions: mouse
            static bool isMouseButtonPressed(int button);                                  // Check if a mouse button has been pressed once
            static bool isMouseButtonDown(int button);                                     // Check if a mouse button is being pressed
            static bool isMouseButtonReleased(int button);                                 // Check if a mouse button has been released once
            static bool isMouseButtonUp(int button);                                       // Check if a mouse button is NOT being pressed
            static int getMouseX();                                                    // Get mouse position X
            static int getMouseY();                                                    // Get mouse position Y
            static Vector2 getMousePosition();                                         // Get mouse position XY
            static Vector2 getMouseDelta();                                            // Get mouse delta between frames
            static void setMousePosition(int x, int y);                                    // Set mouse position XY
            static void setMouseOffset(int offsetX, int offsetY);                          // Set mouse offset
            static void setMouseScale(float scaleX, float scaleY);                         // Set mouse scaling
            static float getMouseWheelMove();                                          // Get mouse wheel movement Y
            static void setMouseCursor(int cursor);                                        // Set mouse cursor
            static Ray getMouseRay(Vector2 mousePosition,Camera camera);                  // Get a ray trace from mouse position
    private:
    };
}

#endif /* !MOUSE_HPP_ */
