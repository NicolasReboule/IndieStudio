/*
** EPITECH PROJECT, 2022
** Button2p.cpp
** File description:
** Button2p.cpp
*/

#include "chooseNumberPlayer/Button2p.hpp"
#include "global/GlobalInstance.hpp"

Indie::Button2p::Button2p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button2p::ready()
{
}

void Indie::Button2p::pressed()
{
    auto sceneManager = GameEngine::SceneManager::getInstance();
    auto &globalInstnace = Indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 2;
    sceneManager->changeScene("game");
}
