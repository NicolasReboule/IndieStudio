/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.cpp
** File description:
** ButtonMainMenu.cpp
*/

#include "game/ButtonMainMenu.hpp"

indie::ButtonMainMenu::ButtonMainMenu(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonMainMenu::ready()
{
}

void indie::ButtonMainMenu::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("mainMenu");
}
