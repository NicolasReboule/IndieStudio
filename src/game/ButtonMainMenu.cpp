/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.cpp
** File description:
** ButtonMainMenu.cpp
*/

#include "game/ButtonMainMenu.hpp"

Indie::ButtonMainMenu::ButtonMainMenu(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::ButtonMainMenu::ready()
{
}

void Indie::ButtonMainMenu::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("mainMenu");
}
