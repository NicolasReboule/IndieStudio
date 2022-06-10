/*
** EPITECH PROJECT, 2022
** Music.cpp
** File description:
** Music.cpp
*/

#include "GameEngine/GameEngine.hpp"
#include "GameEngine/Audio/Music.hpp"

GameEngine::Audio::Music::Music(const std::string &fileName, int category) : Isound(fileName, category), RlMusic("../assets/sounds/" + fileName)
{

}
