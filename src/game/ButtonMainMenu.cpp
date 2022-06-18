/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.cpp
** File description:
** ButtonMainMenu.cpp
*/

#include "game/ButtonMainMenu.hpp"

indie::ButtonMainMenu::ButtonMainMenu(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : Button(name, texture)
{
}

void indie::ButtonMainMenu::init()
{
}

void indie::ButtonMainMenu::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("mainMenu");
}
