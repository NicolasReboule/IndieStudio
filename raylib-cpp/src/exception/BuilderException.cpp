/*
** EPITECH PROJECT, 2022
** BuilderException.cpp
** File description:
** BuilderException.cpp
*/

#include "raylib/exception/BuilderException.hpp"

raylib::ex::BuilderException::BuilderException(const std::string &msg) : raylib::ex::RaylibException("[Builder] " + msg)
{
}
