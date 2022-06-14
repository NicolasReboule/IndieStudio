/*
** EPITECH PROJECT, 2022
** Button3p.cpp
** File description:
** Button3p.cpp
*/

#include "chooseNumberPlayer/Button3p.hpp"

Indie::Button3p::Button3p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button3p::ready()
{
}

void Indie::Button3p::pressed()
{
    auto sceneManager = GameEngine::SceneManager::getInstance();
    //sceneManager->_global.setNumberPlayers(3);
    sceneManager->changeScene("game");
}
