/*
** EPITECH PROJECT, 2022
** Button4p.cpp
** File description:
** Button4p.cpp
*/


#include "chooseNumberPlayer/Button4p.hpp"
#include "global/GlobalInstance.hpp"

Indie::Button4p::Button4p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button4p::ready()
{
}

void Indie::Button4p::pressed()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = Indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 4;
    sceneManager->changeScene("game");
}
