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
    DrawModelEx(model.getModel(), model.getPosition(), model.getRotationAxis(), model.getRotationAngle(), model.getScale(), model.getColor());
}

void raylib::ModelHelper::drawModel(Model model, Vector3 position, float scale, Color tint)
{
    DrawModel(model, position, scale, tint);
}

void raylib::ModelHelper::drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void raylib::ModelHelper::drawModelWires(Model model, Vector3 position, float scale, Color tint)
{
    DrawModelWires(model, position, scale, tint);
}

void raylib::ModelHelper::drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void raylib::ModelHelper::drawBoundingBox(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
}

void raylib::ModelHelper::drawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint)
{
    DrawBillboard(camera, texture, position, size, tint);
}

void raylib::ModelHelper::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)
{
    DrawBillboardRec(camera, texture, source, position, size, tint);
}

void raylib::ModelHelper::drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)
{
    DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint);
}

BoundingBox raylib::ModelHelper::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

void raylib::ModelHelper::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}
