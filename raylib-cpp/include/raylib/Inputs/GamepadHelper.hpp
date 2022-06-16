/*
** EPITECH PROJECT, 2022
** GamepadHelper.hpp
** File description:
** GamepadHelper.hpp
*/

#ifndef INDIESTUDIO_GAMEPADHELPER_HPP
#define INDIESTUDIO_GAMEPADHELPER_HPP

#include <raylib.h>
#include <string>
#include <GLFW/glfw3.h>

namespace raylib::helper::input {
    /**
     * @brief Helper class for Input-related functions: gamepads
     */
    class GamepadHelper {
    public:

        /**
         * @brief Check if a gamepad is available
         * @param gamepad the gamepad to check
         * @return true if the gamepad is available
         */
        static bool isGamepadAvailable(const int &gamepad);

        /**
         * @brief Get the name of a gamepad
         * @param gamepad the gamepad to get the name from
         * @return the name of the gamepad
         */
        static std::string getGamepadName(const int &gamepad);

        /**
         * @brief Check if a gamepad button is pressed (once)
         * @param gamepad the gamepad to check
         * @param button the button to check
         * @return true if the button is pressed
         */
        static bool isGamepadButtonPressed(const int &gamepad, const GamepadButton &button);

        /**
         * @brief Check if a gamepad button is down
         * @param gamepad the gamepad to check
         * @param button the button to check
         * @return true if the button is down
         */
        static bool isGamepadButtonDown(const int &gamepad, const GamepadButton &button);

        /**
         * @brief Check if a gamepad button is released (once)
         * @param gamepad the gamepad to check
         * @param button the button to check
         * @return true if the button is released
         */
        static bool isGamepadButtonReleased(const int &gamepad, const GamepadButton &button);

        /**
         * @brief Check if a gamepad button is NOT being pressed
         * @param gamepad the gamepad to check
         * @param button the button to check
         * @return true if the button is NOT being pressed
         */
        static bool isGamepadButtonUp(const int &gamepad, const GamepadButton &button);

        /**
         * @brief Get the last pressed gamepad button
         * @return the last pressed gamepad button
         */
        static int getGamepadButtonPressed();

        /**
         * @brief Get gamepad axis count for a gamepad
         * @param gamepad the gamepad to get the axis count from
         * @return the axis count of the gamepad
         */
        static int getGamepadAxisCount(const int &gamepad);

        /**
         * @brief Get axis movement value for a gamepad axis
         * @param gamepad the gamepad to get the axis movement from
         * @param axis the axis to get the movement from
         * @return the axis movement value
         */
        static float getGamepadAxisMovement(const int &gamepad, const GamepadAxis &axis);

        /**
         * @brief Set internal gamepad mappings (SDL_GameControllerDB)
         * @param mappings the mappings to set
         * @return the number of mappings set
         */
        static int setGamepadMappings(const std::string &mappings);

    };
}

#endif //INDIESTUDIO_GAMEPADHELPER_HPP
