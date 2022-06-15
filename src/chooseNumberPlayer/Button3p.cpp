/*
** EPITECH PROJECT, 2022
** Button3p.cpp
** File description:
** Button3p.cpp
*/

#include "chooseNumberPlayer/Button3p.hpp"
#include "global/GlobalInstance.hpp"

Indie::Button3p::Button3p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::Button3p::ready()
{
}

void Indie::Button3p::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = Indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 3;
    sceneManager->changeScene("game");
}
