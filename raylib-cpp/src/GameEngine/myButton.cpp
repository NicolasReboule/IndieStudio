/*
** EPITECH PROJECT, 2022
** myButton.cpp
** File description:
** myButton.cpp
*/

#include "GameEngine/myButton.hpp"

GameEngine::myButton::myButton(const std::string &filename) : Button(filename)
{
}

void GameEngine::myButton::pressed()
{
    std::cout << "pressed" << std::endl;
}
