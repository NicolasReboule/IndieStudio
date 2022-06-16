/*
** EPITECH PROJECT, 2022
** myStaticBody.cpp
** File description:
** myStaticBody.cpp
*/

#include "GameEngine/myStaticBody.hpp"

gameengine::myStaticBody::myStaticBody(const std::string& modelPath, const std::string& texturePath) : gameengine::StaticBody(
    modelPath, texturePath)
{
}

void gameengine::myStaticBody::update()
{
    return;
    std::cout << "update" << std::endl;
}

void gameengine::myStaticBody::ready()
{
    return;
    std::cout << "ready" << std::endl;
}

