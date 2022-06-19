/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.cpp
** File description:
** ButtonQuitx05.cpp
*/

#include "mainMenu/ButtonQuit.hpp"

indie::ButtonQuit::ButtonQuit(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
}

void indie::ButtonQuit::init()
{
}

void indie::ButtonQuit::pressed()
{
    raylib::window::RlWindow::getInstance()->setIsOpen(false);
}
