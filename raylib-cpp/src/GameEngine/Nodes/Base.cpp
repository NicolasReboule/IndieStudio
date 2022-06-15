/*
** EPITECH PROJECT, 2022
** Base.cpp
** File description:
** Base.cpp
*/

#include "GameEngine/Nodes/Base.hpp"

GameEngine::Base::Base(const std::string &name)
{
    this->_name = name;
}

const std::string &GameEngine::Base::getName() const
{
    return this->_name;
}

const std::string &GameEngine::Base::getGroup() const
{
    return this->_group;
}

void GameEngine::Base::setGroup(const std::string &group)
{
    this->_group = group;
}

bool GameEngine::Base::isHiding() const
{
    return this->_hiding;
}

void GameEngine::Base::setHiding(bool value)
{
    this->_hiding = value;
}
