/*
** EPITECH PROJECT, 2022
** Button1p.cpp
** File description:
** Button1p.cpp
*/

#include "chooseNumberPlayer/Button1p.hpp"
#include "global/GlobalInstance.hpp"

indie::Button1p::Button1p(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
}

void indie::Button1p::init()
{
}

void indie::Button1p::pressed()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 1;
    sceneManager->changeScene("game");
}
