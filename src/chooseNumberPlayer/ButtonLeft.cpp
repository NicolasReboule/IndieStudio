/*
** EPITECH PROJECT, 2022
** ButtonLeft.cpp
** File description:
** ButtonLeft.cpp
*/

#include "chooseNumberPlayer/ButtonLeft.hpp"
#include "global/GlobalInstance.hpp"

indie::ButtonLeft::ButtonLeft(const std::string &name,  const std::shared_ptr<raylib::texture::RlTexture> &texture) : Button(name, texture)
{
    this->_index = 0;
}

void indie::ButtonLeft::init()
{
}

void indie::ButtonLeft::pressed()
{
    auto &globalInstnace = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    this->_index = globalInstnace->_indexMap;

    if (this->_index > 0)
        globalInstnace->_indexMap = this->_index - 1;

    std::cout << "pressed left" << std::endl;

}

void indie::ButtonLeft::setIndex(int index)
{
    this->_index = index;
}

int indie::ButtonLeft::getIndex() const
{
    return this->_index;
}
