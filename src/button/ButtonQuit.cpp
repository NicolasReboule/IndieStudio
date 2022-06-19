/*
** EPITECH PROJECT, 2022
** ButtonQuit.cpp
** File description:
** ButtonQuit.cpp
*/

#include "button/ButtonQuit.hpp"

indie::button::ButtonQuit::ButtonQuit(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : IndieButton(name, texture, nullptr)
{
    this->_callback = [](const std::string &buttonName) {
        raylib::window::RlWindow::getInstance()->setIsOpen(false);
    };
}

