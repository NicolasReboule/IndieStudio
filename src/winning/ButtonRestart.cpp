/*
** EPITECH PROJECT, 2022
** ButtonRestart.cpp
** File description:
** ButtonRestart.cpp
*/


#include "winning/ButtonRestart.hpp"
#include "global/GlobalInstance.hpp"

indie::ButtonRestartx05::ButtonRestartx05(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonRestartx05::ready()
{
}

void indie::ButtonRestartx05::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    globalInstance->_playersAlive = globalInstance->_numberPlayers;
    sceneManager->changeScene("game");
}
