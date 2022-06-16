/*
** EPITECH PROJECT, 2022
** myButton.cpp
** File description:
** myButton.cpp
*/

#include "GameEngine/myButton.hpp"

gameengine::myButton::myButton(const std::string &filename) : Button(filename)
{
}

void gameengine::myButton::pressed()
{
    std::cout << "pressed" << std::endl;
}
