/*
** EPITECH PROJECT, 2022
** ISound.cpp
** File description:
** ISound.cpp
*/

#include "GameEngine/Audio/ISound.hpp"

gameengine::ISound::ISound(std::string fileName, SoundCategory category)
{
    this->_category = category;
    this->_name = std::move(fileName);
}

SoundCategory gameengine::ISound::getCategory() const
{
    return this->_category;
}

std::string gameengine::ISound::getName()
{
    return (this->_name);
}
