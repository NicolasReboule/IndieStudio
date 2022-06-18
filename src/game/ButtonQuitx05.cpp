/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.cpp
** File description:
** ButtonQuitx05.cpp
*/


#include "game/ButtonQuitx05.hpp"

indie::ButtonQuitx05::ButtonQuitx05(const std::string &name,  const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : Button(name, texture)
{
}

void indie::ButtonQuitx05::init()
{
}

void indie::ButtonQuitx05::pressed()
{
    std::cout << "Quit game" << std::endl;
}
