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

        /**
         * @brief Check if a mouse button has been pressed once
         * @param button the button to check
         * @return true if the button has been pressed once
         */
        static bool isMouseButtonPressed(const MouseButton &button);

        /**
         * @brief Check if a mouse button is being pressed
         * @param button the button to check
         * @return true if the button is being pressed
         */
        static bool isMouseButtonDown(const MouseButton &button);

        /**
         * @brief Check if a mouse button has been released once
         * @param button the button to check
         * @return true if the button has been released once
         */
        static bool isMouseButtonReleased(const MouseButton &button);

        /**
         * @brief Check if a mouse button is NOT being pressed
         * @param button the button to check
         * @return true if the button is NOT being pressed
         */
        static bool isMouseButtonUp(const MouseButton &button);

        /**
         * @brief Get the mouse X position
         * @return the mouse X position
         */
        static int getMouseX();

        /**
         * @brief Get the mouse Y position
         * @return the mouse Y position
         */
        static int getMouseY();

        /**
         * @brief Get the mouse position
         * @return the mouse position
         */
        static Vector2f getMousePosition();

        /**
         * @brief Get mouse delta between frames
         * @return the mouse delta
         */
        static Vector2f getMouseDelta();

        /**
         * @brief Set mouse position XY
         * @param x the X position
         * @param y the Y position
         */
        static void setMousePosition(int x, int y);

        /**
         * @brief Set mouse offset
         * @param offsetX the X offset
         * @param offsetY the Y offset
         */
        static void setMouseOffset(int offsetX, int offsetY);

        /**
         * @brief Set mouse scaling
         * @param scaleX the X scaling
         * @param scaleY the Y scaling
         */
        static void setMouseScale(float scaleX, float scaleY);

        /**
         * @brief Get mouse wheel movement Y
         * @return the mouse wheel movement Y
         */
        static float getMouseWheelMove();

        /**
         * @brief Set mouse cursor
         * @param cursor the cursor to set
         */
        static void setMouseCursor(const MouseCursor &cursor);

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
