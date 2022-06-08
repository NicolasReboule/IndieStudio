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

void raylib::ModelHelper::drawModel(Model model, Vector3f position, float scale, Color tint)
{
    DrawModel(model, raylib::VectorHelper::toRaylibVector(position), scale, tint);
}

void raylib::ModelHelper::drawModelEx(Model model, Vector3f position, Vector3f rotationAxis, float rotationAngle, Vector3f scale, Color tint)
{
    DrawModelEx(model, raylib::VectorHelper::toRaylibVector(position),
                raylib::VectorHelper::toRaylibVector(rotationAxis), rotationAngle,
                raylib::VectorHelper::toRaylibVector(scale), tint);
}

void raylib::ModelHelper::drawModelWires(Model model, Vector3f position, float scale, Color tint)
{
    DrawModelWires(model, raylib::VectorHelper::toRaylibVector(position), scale, tint);
}

void raylib::ModelHelper::drawModelWiresEx(Model model, Vector3f position, Vector3f rotationAxis, float rotationAngle, Vector3f scale, Color tint)
{
    DrawModelWiresEx(model, raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(rotationAxis), rotationAngle,
                     raylib::VectorHelper::toRaylibVector(scale), tint);
}

void raylib::ModelHelper::drawBoundingBox(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
}

void raylib::ModelHelper::drawBillboard(Camera camera, Texture2D texture, Vector3f position, float size, Color tint)
{
    DrawBillboard(camera, texture,
                  raylib::VectorHelper::toRaylibVector(position), size, tint);
}

void raylib::ModelHelper::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector2f size, Color tint)
{
    DrawBillboardRec(camera, texture, source,
                     raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(size), tint);
}

void raylib::ModelHelper::drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector3f up, Vector2f size, Vector2f origin, float rotation, Color tint)
{
    DrawBillboardPro(camera, texture, source,
                     raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(up),
                     raylib::VectorHelper::toRaylibVector(size),
                     raylib::VectorHelper::toRaylibVector(origin), rotation, tint);
}

BoundingBox raylib::ModelHelper::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

void raylib::ModelHelper::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}
