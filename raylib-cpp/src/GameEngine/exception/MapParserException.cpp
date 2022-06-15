/*
** EPITECH PROJECT, 2022
** MapParserException.cpp
** File description:
** MapParserException.cpp
*/

#include "GameEngine/exception/MapParserException.hpp"

gameengine::ex::MapParserException::MapParserException(const std::string &message) : GameEngineException("[MapParser] " + message)
{
}
