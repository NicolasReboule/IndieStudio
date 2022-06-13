/*
** EPITECH PROJECT, 2022
** ButtonQuit.cpp
** File description:
** ButtonQuit.cpp
*/

#include "mainMenu/ButtonQuit.hpp"

Indie::ButtonQuit::ButtonQuit(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void Indie::ButtonQuit::ready()
{
}

void Indie::ButtonQuit::pressed()
{
    std::cout << "Quit game" << std::endl;
}
