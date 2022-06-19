/*
** EPITECH PROJECT, 2022
** ButtonResume.cpp
** File description:
** ButtonResume.cpp
*/

#include "button/ButtonResume.hpp"

indie::button::ButtonResume::ButtonResume(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : IndieButton(name, texture, nullptr)
{
    this->_callback = [this](auto &name) {
        auto &sceneManager = gameengine::SceneManager::getInstance();
        auto &buttonRestart = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRestart"));
        auto &buttonMainMenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));
        auto &buttonQuit = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonQuit"));

        this->setHiding(true);
        buttonRestart.setHiding(true);
        buttonMainMenu.setHiding(true);
        buttonQuit.setHiding(true);
        sceneManager->setPaused(false);
    };
}
