/*
** EPITECH PROJECT, 2022
** ButtonQuit.cpp
** File description:
** ButtonQuit.cpp
*/

#include "mainMenu/ButtonQuit.hpp"

indie::ButtonQuit::ButtonQuit(const std::string &name, const std::string &filename) : Button(name, filename)
{
}

void indie::ButtonQuit::ready()
{
}

void indie::ButtonQuit::pressed()
{
    std::cout << "Quit game" << std::endl;
}
