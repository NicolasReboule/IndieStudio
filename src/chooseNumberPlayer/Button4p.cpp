/*
** EPITECH PROJECT, 2022
** Button4p.cpp
** File description:
** Button4p.cpp
*/


#include "chooseNumberPlayer/Button4p.hpp"

Indie::Button4p::Button4p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button4p::ready()
{
}

void Indie::Button4p::pressed()
{
    auto sceneManager = GameEngine::SceneManager::getInstance();
    //sceneManager->_global.setNumberPlayers(4);
    sceneManager->changeScene("game");
}
