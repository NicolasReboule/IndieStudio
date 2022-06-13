/*
** EPITECH PROJECT, 2022
** Fx.cpp
** File description:
** Fx.cpp
*/

#include "GameEngine/Audio/Fx.hpp"

GameEngine::Audio::Fx::Fx(const std::string &fileName, SoundCategory category) : ISound(fileName, category), RlSound("../assets/sounds/" + fileName)
{
}
