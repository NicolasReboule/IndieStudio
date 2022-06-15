/*
** EPITECH PROJECT, 2022
** ButtonResume.cpp
** File description:
** ButtonResume.cpp
*/

#include "game/ButtonResume.hpp"
#include "game/ButtonMainMenu.hpp"
#include "game/ButtonQuitx05.hpp"

indie::ButtonResume::ButtonResume(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonResume::ready()
{
    Button::ready();
}

void indie::ButtonResume::pressed()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));

    this->setHiding(true);
    buttonMainMenu.setHiding(true);
    buttonQuit.setHiding(true);
    sceneManager->setPaused(false);
}