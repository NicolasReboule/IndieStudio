/*
** EPITECH PROJECT, 2022
** Button3p.cpp
** File description:
** Button3p.cpp
*/

#include "chooseNumberPlayer/Button3p.hpp"
#include "global/GlobalInstance.hpp"

indie::Button3p::Button3p(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::Button3p::ready()
{
}

void indie::Button3p::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 3;
    sceneManager->changeScene("game");
}
