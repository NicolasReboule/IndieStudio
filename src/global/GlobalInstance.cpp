/*
** EPITECH PROJECT, 2022
** GlobalInstance.cpp
** File description:
** GlobalInstance.cpp
*/

#include "global/GlobalInstance.hpp"

std::shared_ptr<indie::GlobalInstance> indie::GlobalInstance::_instance;

std::shared_ptr<indie::GlobalInstance> &indie::GlobalInstance::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<indie::GlobalInstance>();
    return _instance;
}
