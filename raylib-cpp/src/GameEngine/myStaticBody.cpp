/*
** EPITECH PROJECT, 2022
** myStaticBody.cpp
** File description:
** myStaticBody.cpp
*/

#include "GameEngine/myStaticBody.hpp"

GameEngine::myStaticBody::myStaticBody(const std::string& modelPath, const std::string& texturePath) : GameEngine::StaticBody(
    modelPath, texturePath)
{
}

void GameEngine::myStaticBody::update()
{
    return;
    std::cout << "update" << std::endl;
}

void GameEngine::myStaticBody::ready()
{
    return;
    std::cout << "ready" << std::endl;
}

