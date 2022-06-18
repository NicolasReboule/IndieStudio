/*
** EPITECH PROJECT, 2022
** ButtonRight.cpp
** File description:
** ButtonRight.cpp
*/

#include "chooseNumberPlayer/ButtonRight.hpp"
#include "global/GlobalInstance.hpp"

indie::ButtonRight::ButtonRight(const std::string &name,  const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
}

void indie::ButtonRight::init()
{
    Button::init();
}

void indie::ButtonRight::pressed()
{
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    this->_index = globalInstnace->_indexMap;

    if (this->_index < 2)
        globalInstnace->_indexMap = this->_index + 1;
}

void indie::ButtonRight::setIndex(int index)
{
    this->_index = index;
}

int indie::ButtonRight::getIndex() const
{
    return this->_index;
}