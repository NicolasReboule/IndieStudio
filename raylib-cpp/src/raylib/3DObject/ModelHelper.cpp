/*
** EPITECH PROJECT, 2022
** ModelHelper.cpp
** FileHelper description:
** ModelHelper.cpp
*/

#include "raylib/3DObject/ModelHelper.hpp"

// Model drawing functions

BoundingBox raylib::helper::ModelHelper::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

void raylib::helper::ModelHelper::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}
