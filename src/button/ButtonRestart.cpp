/*
** EPITECH PROJECT, 2022
** ButtonRestart.cpp
** File description:
** ButtonRestart.cpp
*/
#include "button/ButtonRestart.hpp"

indie::button::ButtonRestart::ButtonRestart(const std::string &name,const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : IndieButton(name, texture, nullptr)
{
    this->_callback = [](auto &name) {
        auto sceneManager = gameengine::SceneManager::getInstance();
        auto &globalInstance = indie::GlobalInstance::getInstance();
        globalInstance->_playersAlive = globalInstance->_numberPlayers;
        sceneManager->changeScene("game");
    };
}

