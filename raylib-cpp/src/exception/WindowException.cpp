/*
** EPITECH PROJECT, 2022
** WIndowException.cpp
** File description:
** WIndowException.cpp
*/

#include "raylib/exception/WindowException.hpp"

raylib::ex::WindowException::WindowException(const std::string &msg) : raylib::ex::RaylibException("[RlWindow] " + msg)
{
}

