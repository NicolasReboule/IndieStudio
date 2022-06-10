/*
** EPITECH PROJECT, 2022
** Base.cpp
** File description:
** Base.cpp
*/

#include "GameEngine/Nodes/Base.hpp"

#include <utility>

GameEngine::Base::Base(std::string name)
{
    this->_name = std::move(name);
}

std::string &GameEngine::Base::getName()
{
    return this->_name;
}
