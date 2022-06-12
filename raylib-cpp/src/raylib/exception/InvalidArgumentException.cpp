/*
** EPITECH PROJECT, 2022
** InvalidArgumentException.cpp
** File description:
** InvalidArgumentException.cpp
*/

#include "raylib/exception/InvalidArgumentException.hpp"

raylib::ex::InvalidArgumentException::InvalidArgumentException(const std::string &msg) : raylib::ex::RaylibException(msg)
{

}
