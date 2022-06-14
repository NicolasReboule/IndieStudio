/*
** EPITECH PROJECT, 2022
** Button2p.cpp
** File description:
** Button2p.cpp
*/


#include "chooseNumberPlayer/Button2p.hpp"

Indie::Button2p::Button2p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button2p::ready()
{
}

void Indie::Button2p::pressed()
{
    auto sceneManager = GameEngine::SceneManager::getInstance();
    sceneManager->_global.setNumberPlayers(2);
    sceneManager->changeScene("game");
}
