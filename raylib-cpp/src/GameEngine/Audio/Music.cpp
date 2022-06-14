/*
** EPITECH PROJECT, 2022
** Music.cpp
** File description:
** Music.cpp
*/

#include "GameEngine/Audio/Music.hpp"

GameEngine::Audio::Music::Music(const std::string &fileName, SoundCategory category) : ISound(fileName, category), RlMusic("./assets/sounds/" + fileName)
{
}
