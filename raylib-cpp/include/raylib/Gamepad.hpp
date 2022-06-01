/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Gamepad
*/

#ifndef GAMEPAD_HPP_
#define GAMEPAD_HPP_

#include <raylib.h>
#include <string>

namespace raylib {

    class Gamepad {
        public:
            Gamepad();
            ~Gamepad();
            // Input-related functions: gamepads
            static bool isGamepadAvailable(int gamepad);                                   // Check if a gamepad is available
            static const std::string getGamepadName(int gamepad);                                // Get gamepad internal name id
            static bool isGamepadButtonPressed(int gamepad, int button);                   // Check if a gamepad button has been pressed once
            static bool isGamepadButtonDown(int gamepad,int button);                      // Check if a gamepad button is being pressed
            static bool isGamepadButtonReleased(int gamepad, int button);                  // Check if a gamepad button has been released once
            static bool isGamepadButtonUp(int gamepad,int button);                        // Check if a gamepad button is NOT being pressed
            static int getGamepadButtonPressed();                                      // Get the last gamepad button pressed
            static int getGamepadAxisCount(int gamepad);                                   // Get gamepad axis count for a gamepad
            static float getGamepadAxisMovement(int gamepad, int axis);                    // Get axis movement value for a gamepad axis
            static int setGamepadMappings(const std::string &mappings);                           // Set internal gamepad mappings (SDL_GameControllerDB)
        private:
    };

}

#endif /* !GAMEPAD_HPP_ */
