/*
** EPITECH PROJECT, 2022
** Logo.cpp
** File description:
** Logo.cpp
*/

#include "start/Logo.hpp"

#include <utility>

Indie::Logo::Logo(std::string name, const std::string &filename) : TextureRect(std::move(name), filename)
{
}

void Indie::Logo::ready()
{
}

void Indie::Logo::update(float delta)
{
}
