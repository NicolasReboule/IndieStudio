/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** GamepadHelper
*/

#include "raylib/Inputs/GamepadHelper.hpp"

//TODO: change this, for the event, need to save gamepad id, and register a gamepad handler
bool raylib::input::GamepadHelper::isGamepadAvailable(const int &gamepad)
{
    return IsGamepadAvailable(gamepad);
}

std::string raylib::input::GamepadHelper::getGamepadName(const int &gamepad)
{
    return GetGamepadName(gamepad);
}

bool raylib::input::GamepadHelper::isGamepadButtonPressed(const int &gamepad, const int &button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool raylib::input::GamepadHelper::isGamepadButtonDown(const int &gamepad, const int &button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool raylib::input::GamepadHelper::isGamepadButtonReleased(const int &gamepad, const int &button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool raylib::input::GamepadHelper::isGamepadButtonUp(const int &gamepad, const int &button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int raylib::input::GamepadHelper::getGamepadButtonPressed()
{
    return GetGamepadButtonPressed();
}

int raylib::input::GamepadHelper::getGamepadAxisCount(const int &gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float raylib::input::GamepadHelper::getGamepadAxisMovement(const int &gamepad, const int &axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib::input::GamepadHelper::setGamepadMappings(const std::string &mappings)
{
    return SetGamepadMappings(mappings.c_str());
}
