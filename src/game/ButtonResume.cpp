/*
** EPITECH PROJECT, 2022
** ButtonResume.cpp
** File description:
** ButtonResume.cpp
*/

#include "game/ButtonResume.hpp"
#include "game/ButtonMainMenu.hpp"
#include "game/ButtonQuitx05.hpp"
#include "winning/ButtonRestart.hpp"

indie::ButtonResume::ButtonResume(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : Button(name, texture)
{
}

void indie::ButtonResume::init()
{
    Button::init();
}

void indie::ButtonResume::pressed()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonRestart = dynamic_cast<indie::ButtonRestartx05 &>(*sceneManager->getNode("buttonRestart"));
    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));

    this->setHiding(true);
    buttonRestart.setHiding(true);
    buttonMainMenu.setHiding(true);
    buttonQuit.setHiding(true);
    sceneManager->setPaused(false);
}