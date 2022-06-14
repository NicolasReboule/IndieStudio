/*
** EPITECH PROJECT, 2022
** KeyboardHelper.hpp
** File description:
** KeyboardHelper.hpp
*/

#ifndef INDIESTUDIO_KEYBOARDHELPER_HPP
#define INDIESTUDIO_KEYBOARDHELPER_HPP

#include <raylib.h>
#include <string>
#include <GLFW/glfw3.h>

namespace raylib::input {
    /**
     * @brief Input-related functions: keyboard
     */
    class KeyboardHelper {
    public:
        /**
         * @brief Check if a key has been pressed once
         * @param key the key to check
         * @return true if the key is pressed
         */
        static bool isKeyPressed(const int &key);

        /**
         * @brief Check if a key is being pressed
         * @param key the key to check
         * @return true if the key is being pressed
         */
        static bool isKeyDown(const int &key);

        /**
         * @brief Check if a key has been released once
         * @param key the key to check
         * @return true if the key is released
         */
        static bool isKeyReleased(const int &key);

        /**
         * @brief Check if a key is NOT being pressed
         * @param key the key to check
         * @return true if the key is NOT being pressed
         */
        static bool isKeyUp(const int &key);

        /**
         * @brief Set a custom key to exit program (default is ESC)
         * @param key the key to set
         */
        static void setExitKey(const int &key);

        /**
         * @brief Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
         * @return the key pressed
         */
        static int getKeyPressed();

        /**
         * @brief Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
         * @return the char pressed
         */
        static int getCharPressed();

        /**
         * @brief Get key name
         * @param key the key to get the name
         * @param scancode the scancode to get the name
         * @return the key name
         */
        static std::string getKeyName(const int &key, const int &scancode);
    };
}

#endif //INDIESTUDIO_KEYBOARDHELPER_HPP
