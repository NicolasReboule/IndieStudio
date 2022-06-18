/*
** EPITECH PROJECT, 2022
** ButtonPlay.cpp
** File description:
** ButtonPlay.cpp
*/

#include "mainMenu/ButtonPlay.hpp"

indie::ButtonPlay::ButtonPlay(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
}

void indie::ButtonPlay::init()
{
}

void indie::ButtonPlay::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    sceneManager->changeScene("chooseNumberPlayer");

}
