/*
** EPITECH PROJECT, 2022
** Base.cpp
** File description:
** Base.cpp
*/

#include "GameEngine/Nodes/Base.hpp"

gameengine::Base::Base(const std::string &name)
{
    this->_name = name;
}

const std::string &gameengine::Base::getName() const
{
    return this->_name;
}

const std::string &gameengine::Base::getGroup() const
{
    return this->_group;
}

void gameengine::Base::setGroup(const std::string &group)
{
    this->_group = group;
}

bool gameengine::Base::isHiding() const
{
    return this->_hiding;
}

void gameengine::Base::setHiding(bool value)
{
    this->_hiding = value;
}
