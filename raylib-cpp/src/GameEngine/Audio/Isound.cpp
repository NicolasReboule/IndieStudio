/*
** EPITECH PROJECT, 2022
** Isound.cpp
** File description:
** Isound.cpp
*/

#include "GameEngine/Audio/Isound.hpp"

GameEngine::Isound::Isound(std::string fileName, int category)
{
    this->_category = category;
    this->_name = std::move(fileName);
}

int GameEngine::Isound::getCategory() const
{
    return this->_category;
}

std::string GameEngine::Isound::getName()
{
    return (this->_name);
}
