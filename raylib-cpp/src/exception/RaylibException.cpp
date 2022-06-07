/*
** EPITECH PROJECT, 2022
** RaylibException.cpp
** File description:
** RaylibException.cpp
*/

#include "raylib/exception/RaylibException.hpp"

raylib::ex::RaylibException::RaylibException(const std::string &msg, bool prefix)
{
    this->_msg = (prefix ? "[Raylib]" : "") + msg;
}

const char *raylib::ex::RaylibException::what() const noexcept
{
    return this->_msg.c_str();
}
