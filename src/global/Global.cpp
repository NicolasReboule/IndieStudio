/*
** EPITECH PROJECT, 2022
** Global.cpp
** File description:
** Global.cpp
*/

#include "global/Global.hpp"

void Indie::Global::setNumberPlayers(int numberPlayers)
{
    this->_numberPlayers = numberPlayers;
}

int &Indie::Global::getNumberPlayers()
{
    return this->_numberPlayers;
}
