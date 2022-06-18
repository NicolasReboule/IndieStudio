/*
** EPITECH PROJECT, 2022
** AbstractBase.cpp
** File description:
** AbstractBase.cpp
*/

#include "GameEngine/Nodes/AbstractBase.hpp"

gameengine::node::AbstractBase::AbstractBase(const std::string &name)
{
    this->_name = name;
}

const std::string &gameengine::node::AbstractBase::getName() const
{
    return this->_name;
}

const std::string &gameengine::node::AbstractBase::getGroup() const
{
    return this->_group;
}

void gameengine::node::AbstractBase::setGroup(const std::string &group)
{
    this->_group = group;
}

const bool &gameengine::node::AbstractBase::isHiding() const
{
    return this->_hiding;
}

void gameengine::node::AbstractBase::setHiding(bool value)
{
    this->_hiding = value;
}

std::ostream &operator<<(std::ostream &os, const gameengine::node::AbstractBase &abstractBase)
{
    os << "AbstractBase: " << abstractBase.getName() << " - " << abstractBase.getGroup() << " | Hiding: " << abstractBase.isHiding();
    return os;
}