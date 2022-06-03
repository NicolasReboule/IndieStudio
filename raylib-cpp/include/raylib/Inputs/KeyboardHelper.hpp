/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** KeyboardHelper
*/

#ifndef KEYBOARD_HPP_
#define KEYBOARD_HPP_

#include "raylib.h"

namespace raylib {
    class KeyboardHelper {
        public:
            // Input-related functions: keyboard
            static bool isKeyPressed(int key);                                             // Check if a key has been pressed once
            static bool isKeyDown(int key);                                                // Check if a key is being pressed
            static bool isKeyReleased(int key);                                            // Check if a key has been released once
            static bool isKeyUp(int key);                                                  // Check if a key is NOT being pressed
            static void setExitKey(int key);                                               // Set a custom key to exit program (default is ESC)
            static int getKeyPressed();                                                // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
            static int getCharPressed();                                               // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
        private:
    };
}

#endif /* !KEYBOARD_HPP_ */
