/*
** EPITECH PROJECT, 2022
** ISound.cpp
** File description:
** ISound.cpp
*/

#include "GameEngine/Audio/ISound.hpp"

GameEngine::ISound::ISound(std::string fileName, SoundCategory category)
{
    this->_category = category;
    this->_name = std::move(fileName);
}

SoundCategory GameEngine::ISound::getCategory() const
{
    return this->_category;
}

std::string GameEngine::ISound::getName()
{
    return (this->_name);
}
