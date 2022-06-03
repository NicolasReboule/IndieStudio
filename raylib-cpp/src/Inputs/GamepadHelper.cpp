/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** GamepadHelper
*/

#include "raylib/Inputs/GamepadHelper.hpp"

// Input-related functions: gamepads

bool raylib::GamepadHelper::isGamepadAvailable(int gamepad)
{
    return IsGamepadAvailable(gamepad);
}

const std::string raylib::GamepadHelper::getGamepadName(int gamepad)
{
    return std::string(GetGamepadName(gamepad));
}

bool raylib::GamepadHelper::isGamepadButtonPressed(int gamepad, int button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool raylib::GamepadHelper::isGamepadButtonDown(int gamepad, int button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool raylib::GamepadHelper::isGamepadButtonReleased(int gamepad, int button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool raylib::GamepadHelper::isGamepadButtonUp(int gamepad, int button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int raylib::GamepadHelper::getGamepadButtonPressed()
{
    return getGamepadButtonPressed();
}

int raylib::GamepadHelper::getGamepadAxisCount(int gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float raylib::GamepadHelper::getGamepadAxisMovement(int gamepad, int axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib::GamepadHelper::setGamepadMappings(const std::string &mappings)
{
    return SetGamepadMappings(mappings.c_str());
}
