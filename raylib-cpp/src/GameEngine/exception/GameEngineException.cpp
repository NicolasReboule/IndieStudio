/*
** EPITECH PROJECT, 2022
** GameEngineException.cpp
** File description:
** GameEngineException.cpp
*/

#include "GameEngine/exception/GameEngineException.hpp"

gameengine::ex::GameEngineException::GameEngineException(const std::string &message, const bool &prefix)
{
    this->_msg = (prefix ? "[GameEngine]" : "") + message;
}

const char *gameengine::ex::GameEngineException::what() const noexcept
{
    return this->_msg.c_str();
}
