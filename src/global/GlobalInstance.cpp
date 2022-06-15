/*
** EPITECH PROJECT, 2022
** GlobalInstance.cpp
** File description:
** GlobalInstance.cpp
*/

#include "global/GlobalInstance.hpp"

std::shared_ptr<Indie::GlobalInstance> Indie::GlobalInstance::_instance;

std::shared_ptr<Indie::GlobalInstance> &Indie::GlobalInstance::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<Indie::GlobalInstance>();
    return _instance;
}
