/*
** EPITECH PROJECT, 2022
** ModelHelper.cpp
** FileHelper description:
** ModelHelper.cpp
*/

#include "raylib/3DObject/ModelHelper.hpp"

// Model drawing functions

void raylib::ModelHelper::drawModel(const raylib::RlModel &model)
{
    DrawModelEx(model.getModel(),
                raylib::VectorHelper::toRaylibVector(model.getPosition()),
                raylib::VectorHelper::toRaylibVector(model.getRotationAxis()), model.getRotationAngle(),
                raylib::VectorHelper::toRaylibVector(model.getScale()), model.getColor());
}

void raylib::ModelHelper::drawModelWires(const raylib::RlModel &model)
{
    DrawModelWiresEx(model.getModel(),
                    raylib::VectorHelper::toRaylibVector(model.getPosition()),
                    raylib::VectorHelper::toRaylibVector(model.getRotationAxis()), model.getRotationAngle(),
                    raylib::VectorHelper::toRaylibVector(model.getScale()), model.getColor());
}

BoundingBox raylib::ModelHelper::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

void raylib::ModelHelper::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}
