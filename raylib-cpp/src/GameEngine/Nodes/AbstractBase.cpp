/*
** EPITECH PROJECT, 2022
** AbstractBase.cpp
** File description:
** AbstractBase.cpp
*/

#include "GameEngine/Nodes/AbstractBase.hpp"

gameengine::AbstractBase::AbstractBase(const std::string &name)
{
    this->_name = name;
}

const std::string &gameengine::AbstractBase::getName() const
{
    return this->_name;
}

const std::string &gameengine::AbstractBase::getGroup() const
{
    return this->_group;
}

void gameengine::AbstractBase::setGroup(const std::string &group)
{
    this->_group = group;
}

bool gameengine::AbstractBase::isHiding() const
{
    return this->_hiding;
}

void gameengine::AbstractBase::setHiding(bool value)
{
    this->_hiding = value;
}
