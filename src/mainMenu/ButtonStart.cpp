/*
** EPITECH PROJECT, 2022
** ButtonPlay.cpp
** File description:
** ButtonPlay.cpp
*/

#include "mainMenu/ButtonPlay.hpp"

indie::ButtonPlay::ButtonPlay(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonPlay::ready()
{
}

void indie::ButtonPlay::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("chooseNumberPlayer");

}
