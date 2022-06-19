/*
** EPITECH PROJECT, 2022
** Sound.cpp
** File description:
** Sound.cpp
*/

#include "GameEngine/Audio/Sound.hpp"

gameengine::audio::Sound::Sound(const std::string &fileName, SoundCategory category) : AbstractSound(fileName, category), RlSound(fileName)
{
}

void gameengine::audio::Sound::setVolume(const float &volume)
{
    raylib::audio::RlSound::setVolume(volume);
}
