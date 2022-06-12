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
