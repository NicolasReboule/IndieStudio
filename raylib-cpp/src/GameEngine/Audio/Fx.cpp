/*
** EPITECH PROJECT, 2022
** Fx.cpp
** File description:
** Fx.cpp
*/

#include "GameEngine/Audio/Fx.hpp"

GameEngine::Audio::Fx::Fx(const std::string &fileName, int category) : Isound(fileName, category), RlSound("../assets/sounds/" + fileName)
{
}
