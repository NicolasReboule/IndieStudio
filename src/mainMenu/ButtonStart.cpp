/*
** EPITECH PROJECT, 2022
** ButtonPlay.cpp
** File description:
** ButtonPlay.cpp
*/

#include "mainMenu/ButtonPlay.hpp"

Indie::ButtonPlay::ButtonPlay(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::ButtonPlay::ready()
{
}

void Indie::ButtonPlay::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("chooseNumberPlayer");

}
