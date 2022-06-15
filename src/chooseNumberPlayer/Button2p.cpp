/*
** EPITECH PROJECT, 2022
** Button2p.cpp
** File description:
** Button2p.cpp
*/

#include "chooseNumberPlayer/Button2p.hpp"
#include "global/GlobalInstance.hpp"

indie::Button2p::Button2p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::Button2p::ready()
{
}

void indie::Button2p::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 2;
    sceneManager->changeScene("game");
}
