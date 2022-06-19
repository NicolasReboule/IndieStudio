/*
** EPITECH PROJECT, 2022
** AbstractSound.cpp
** File description:
** AbstractSound.cpp
*/

#include "GameEngine/Audio/AbstractSound.hpp"

gameengine::AbstractSound::AbstractSound(const std::string &filePath, const SoundCategory &category)
{
    this->_category = category;
    this->_filePath = filePath;
    this->_name = raylib::helper::FileHelper::getFileNameWithoutExt(filePath);
}

gameengine::AbstractSound::SoundCategory gameengine::AbstractSound::getCategory() const
{
    return this->_category;
}

const std::string &gameengine::AbstractSound::getName() const
{
    return this->_filePath;
}

const std::string &gameengine::AbstractSound::getFilePath() const
{
    return this->_name;
}
