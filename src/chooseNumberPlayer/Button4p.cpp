/*
** EPITECH PROJECT, 2022
** Button4p.cpp
** File description:
** Button4p.cpp
*/


#include "chooseNumberPlayer/Button4p.hpp"
#include "global/GlobalInstance.hpp"

indie::Button4p::Button4p(const std::string &name,  const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
}

void indie::Button4p::init()
{
}

void indie::Button4p::pressed()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    globalInstnace->_numberPlayers = 4;
    sceneManager->changeScene("game");
}
