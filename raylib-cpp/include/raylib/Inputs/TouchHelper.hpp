/*
** EPITECH PROJECT, 2022
** TouchHelper.hpp
** File description:
** TouchHelper.hpp
*/

#ifndef INDIESTUDIO_TOUCHHELPER_HPP
#define INDIESTUDIO_TOUCHHELPER_HPP

#include "raylib/Math.hpp"
#include <raylib.h>

namespace raylib::helper::input {
    /**
     * @brief Helper class for Input-related functions: touch
     */
    class TouchHelper {
    public:

        /**
         * @brief Get touch position X for touch point 0 (relative to screen size)
         * @return touch position X
         */
        static int getTouchX();

        /**
         * @brief Get touch position Y for touch point 0 (relative to screen size)
         * @return touch position Y
         */
        static int getTouchY();

        /**
         * @brief Get touch position XY for a touch point index (relative to screen size)
         * @param index touch point index
         * @return touch position XY
         */
        static Vector2f getTouchPosition(const int &index);

        /**
         * @brief Get touch point identifier for given index
         * @param index touch point index
         * @return touch point identifier
         */
        static int getTouchPointId(const int &index);

        /**
         * @brief Get number of touch points
         * @return touch point _count
         */
        static int getTouchPointCount();

        /**
         * @brief Enable a set of gestures using flags
         * @param flags touch gesture flags
         */
        static void setGesturesEnabled(const unsigned int &flags);

        /**
         * @brief Check if a gesture have been detected
         * @param gesture touch gesture
         * @return true if gesture have been detected
         */
        static bool isGestureDetected(const int &gesture);

        /**
         * @brief Get latest detected gesture
         * @return touch gesture
         */
        static int getGestureDetected();

        /**
         * @brief Get gesture hold time in milliseconds
         * @return touch gesture hold time in milliseconds
         */
        static float getGestureHoldDuration();

        /**
         * @brief Get gesture drag vector
         * @return touch gesture drag vector
         */
        static Vector2f getGestureDragVector();

        /**
         * @brief Get gesture drag angle in degrees
         * @return touch gesture drag angle
         */
        static float getGestureDragAngle();

        /**
         * @brief Get gesture pinch delta
         * @return touch gesture pinch delta
         */
        static Vector2f getGesturePinchVector();

        /**
         * @brief Get gesture pinch angle
         * @return touch gesture pinch angle
         */
        static float getGesturePinchAngle();
    };
}

#endif //INDIESTUDIO_TOUCHHELPER_HPP
