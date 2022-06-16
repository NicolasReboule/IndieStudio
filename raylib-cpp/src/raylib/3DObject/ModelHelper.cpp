/*
** EPITECH PROJECT, 2022
** ModelHelper.cpp
** FileHelper description:
** ModelHelper.cpp
*/

#include "raylib/3DObject/ModelHelper.hpp"
#include "raylib/Draw/DrawHelper.hpp"

// Model drawing functions

void raylib::ModelHelper::drawModel(const raylib::RlModel &model)
{
    DrawModelEx(model.getModel(),
                raylib::helper::VectorHelper::toRaylibVector(model.getPosition()),
                raylib::helper::VectorHelper::toRaylibVector(model.getRotationAxis()), model.getRotationAngle(),
                raylib::helper::VectorHelper::toRaylibVector(model.getScale()), model.getColor());
    raylib::helper::draw::DrawHelper::drawBoundingBox(model.getBoundingBox(), RlColor::Red); //TODO: remove this
}

void raylib::ModelHelper::drawModelWires(const raylib::RlModel &model)
{
    DrawModelWiresEx(model.getModel(),
                    raylib::helper::VectorHelper::toRaylibVector(model.getPosition()),
                    raylib::helper::VectorHelper::toRaylibVector(model.getRotationAxis()), model.getRotationAngle(),
                    raylib::helper::VectorHelper::toRaylibVector(model.getScale()), model.getColor());
}

BoundingBox raylib::ModelHelper::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

void raylib::ModelHelper::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}
