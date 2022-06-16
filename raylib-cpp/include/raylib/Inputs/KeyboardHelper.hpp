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
#include <vector>

namespace raylib::helper::input {
    /**
     * @brief Helper class for Input-related functions: keyboard
     */
    class KeyboardHelper {
    public:
        /**
         * @brief Check if a key has been pressed once
         * @param key the key to check
         * @return true if the key is pressed
         */
        static bool isKeyPressed(const KeyboardKey &key);

        /**
         * @brief Check if a key is being pressed
         * @param key the key to check
         * @return true if the key is being pressed
         */
        static bool isKeyDown(const KeyboardKey &key);

        /**
         * @brief Check if a key has been released once
         * @param key the key to check
         * @return true if the key is released
         */
        static bool isKeyReleased(const KeyboardKey &key);

        /**
         * @brief Check if a key is NOT being pressed
         * @param key the key to check
         * @return true if the key is NOT being pressed
         */
        static bool isKeyUp(const KeyboardKey &key);

        /**
         * @brief Set a custom key to exit program (default is ESC)
         * @param key the key to set
         */
        static void setExitKey(const KeyboardKey &key);

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
         * @brief Get all the queued pressed keys
         * @return the keys pressed
         */
        static std::vector<KeyboardKey> getPressedKeys();

        /**
         * @brief Get all the queued keys char (unicode)
         * @return the keys char
         */
        static std::vector<int> getPressedChars();

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
