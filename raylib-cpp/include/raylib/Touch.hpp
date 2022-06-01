/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Touch
*/

#ifndef TOUCH_HPP_
#define TOUCH_HPP_

#include <raylib.h>

namespace raylib {
    class Touch {
        public:
            Touch();
            ~Touch();
            // Input-related functions: touch
            static int getTouchX();                                                    // Get touch position X for touch point 0 (relative to screen size)
            static int getTouchY();                                                    // Get touch position Y for touch point 0 (relative to screen size)
            static Vector2 getTouchPosition(int index);                                    // Get touch position XY for a touch point index (relative to screen size)
            static int getTouchPointId(int index);                                         // Get touch point identifier for given index
            static int getTouchPointCount();                                           // Get number of touch points

            // Gestures and Touch Handling Functions (Module: rgestures)
            static void setGesturesEnabled(unsigned int flags);                            // Enable a set of gestures using flags
            static bool isGestureDetected(int gesture);                                    // Check if a gesture have been detected
            static int getGestureDetected();                                           // Get latest detected gesture
            static float getGestureHoldDuration();                                     // Get gesture hold time in milliseconds
            static Vector2 getGestureDragVector();                                     // Get gesture drag vector
            static float getGestureDragAngle();                                        // Get gesture drag angle
            static Vector2 getGesturePinchVector();                                    // Get gesture pinch delta
            static float getGesturePinchAngle();                                       // Get gesture pinch angle
        private:
    };
}

#endif /* !TOUCH_HPP_ */
