/*
** EPITECH PROJECT, 2022
** gamepad.cpp
** File description:
** gamepad.cpp
*/

#include "gamepad.hpp"

raylib::Gamepad::Gamepad()
{
    this->_number = 0;
}

raylib::Gamepad::Gamepad(int gamepadNumber)
{
    this->_number = gamepadNumber;
}

raylib::Gamepad::~Gamepad() {}

int raylib::Gamepad::getNumber()
{
    return this->_number;
}

void raylib::Gamepad::setNumber(int gamepadNumber)
{
    this->_number = gamepadNumber;
}

bool raylib::Gamepad::isButtonJustPressed(int button)
{
    return IsGamepadButtonPressed(this->_number, button);
}

bool raylib::Gamepad::isButtonPressed(int button)
{
    return IsGamepadButtonDown(this->_number, button);
}















































































