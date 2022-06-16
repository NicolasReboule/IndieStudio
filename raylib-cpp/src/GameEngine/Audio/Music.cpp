/*
** EPITECH PROJECT, 2022
** Music.cpp
** File description:
** Music.cpp
*/

#include "GameEngine/Audio/Music.hpp"

gameengine::audio::Music::Music(const std::string &fileName, SoundCategory category) : ISound(fileName, category), RlMusic("./assets/sounds/" + fileName)
{
}
