/*
** EPITECH PROJECT, 2022
** Music.cpp
** File description:
** Music.cpp
*/

#include "GameEngine/Audio/Music.hpp"

gameengine::audio::Music::Music(const std::string &fileName, SoundCategory category) : AbstractSound(fileName, category), RlMusic(fileName)
{
}

void gameengine::audio::Music::setVolume(const float &volume)
{
    raylib::audio::RlMusic::setVolume(volume);
}
