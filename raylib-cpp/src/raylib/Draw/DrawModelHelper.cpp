/*
** EPITECH PROJECT, 2022
** DrawModelHelper.cpp
** File description:
** DrawModelHelper.cpp
*/

#include "raylib/Draw/DrawModelHelper.hpp"

void raylib::helper::draw::DrawModelHelper::drawMesh(const raylib::model::RlMesh &mesh, \
const raylib::model::RlMaterial &material, const Matrix &transform)
{
    DrawMesh(mesh.getMesh(), material.getMaterial(), transform);
}

void raylib::helper::draw::DrawModelHelper::drawMeshInstanced(const raylib::model::RlMesh &mesh, const raylib::model::RlMaterial &material, \
std::vector<Matrix> &transforms)
{
    DrawMeshInstanced(mesh.getMesh(), material.getMaterial(), transforms.data(), (int) transforms.size());
}

void raylib::helper::draw::DrawModelHelper::drawModel(const raylib::model::RlModel &model)
{
    drawModel(model, model.getPosition(), model.getScale(), model.getRotationAngle(), model.getScale(), model.getColor());
}

void raylib::helper::draw::DrawModelHelper::drawModel(const raylib::model::RlModel &model, const Vector3f &position, \
const float &scale, const RlColor &tint)
{
    Vector3f vScale = { scale, scale, scale };
    Vector3f rotationAxis = { 0.0f, 1.0f, 0.0f };

    drawModel(model, position, rotationAxis, 0.0f, vScale, tint);
}

void raylib::helper::draw::DrawModelHelper::drawModel(const raylib::model::RlModel &model, const Vector3f &position, \
const Vector3f &rotationAxis, const float &rotationAngle, const Vector3f &scale, const RlColor &tint)
{
    DrawModelEx(model.getModel(), raylib::helper::VectorHelper::toRaylibVector(position),
                raylib::helper::VectorHelper::toRaylibVector(rotationAxis), rotationAngle,
                raylib::helper::VectorHelper::toRaylibVector(scale), tint.getColor());
}

void raylib::helper::draw::DrawModelHelper::drawModelWires(const raylib::model::RlModel &model)
{
    raylib::GlStateManager::enableWireMode();
    drawModel(model);
    raylib::GlStateManager::disableWireMode();
}

void raylib::helper::draw::DrawModelHelper::drawModelWires(const raylib::model::RlModel &model, const Vector3f &position, \
const float &scale, const RlColor &tint)
{
    raylib::GlStateManager::enableWireMode();
    drawModel(model, position, scale, tint);
    raylib::GlStateManager::disableWireMode();
}

void raylib::helper::draw::DrawModelHelper::drawModelWires(const raylib::model::RlModel &model, const Vector3f &position, \
const Vector3f &rotationAxis, const float &rotationAngle, const Vector3f &scale, const RlColor &tint)
{
    raylib::GlStateManager::enableWireMode();
    drawModel(model, position, rotationAxis, rotationAngle, scale, tint);
    raylib::GlStateManager::disableWireMode();
}

