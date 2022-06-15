/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.cpp
** File description:
** ButtonQuitx05.cpp
*/


#include "game/ButtonQuitx05.hpp"

indie::ButtonQuitx05::ButtonQuitx05(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonQuitx05::ready()
{
}

void indie::ButtonQuitx05::pressed()
{
    std::cout << "Quit game" << std::endl;
}
