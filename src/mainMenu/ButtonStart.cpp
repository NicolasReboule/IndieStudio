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
    auto sceneManager = GameEngine::SceneManager::getInstance();

    sceneManager->changeScene("chooseNumberPlayer");

    std::cout << "change scene to game" << std::endl;
}
