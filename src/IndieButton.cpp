/*
** EPITECH PROJECT, 2022
** IndieButton.cpp
** File description:
** IndieButton.cpp
*/

#include "IndieButton.hpp"

indie::button::IndieButton::IndieButton(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture,
                                        const std::function<void(const std::string &buttonName)> &callback) : Button(name, texture)
{
    this->_callback = callback;
}

void indie::button::IndieButton::pressed()
{
    auto &audioManager = gameengine::AudioManager::getInstance();
    audioManager->playSound("click");
    if (_callback)
        _callback(this->_name);
}
