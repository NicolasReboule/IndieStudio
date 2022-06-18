/*
** EPITECH PROJECT, 2022
** Collision3DHelper.cpp
** FileHelper description:
** Collision3DHelper.cpp
*/

#include "raylib/3DObject/Collision3DHelper.hpp"

bool raylib::helper::Collision3dHelper::checkCollisionSpheres(const Vector3f &center1, const float &radius1, const Vector3f &center2, const float &radius2)
{
    return CheckCollisionSpheres(raylib::helper::VectorHelper::toRaylibVector(center1), radius1, raylib::helper::VectorHelper::toRaylibVector(center2), radius2);
}

bool raylib::helper::Collision3dHelper::checkCollisionBoxes(const BoundingBox &box1, const BoundingBox &box2)
{
    return CheckCollisionBoxes(box1, box2);
}

bool raylib::helper::Collision3dHelper::checkCollisionBoxSphere(const BoundingBox &box, const Vector3f &center, const float &radius)
{
    return CheckCollisionBoxSphere(box, raylib::helper::VectorHelper::toRaylibVector(center), radius);
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionSphere(const Ray &ray, const Vector3f &center, const float &radius)
{
    return GetRayCollisionSphere(ray, raylib::helper::VectorHelper::toRaylibVector(center), radius);
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionBox(const Ray &ray, const BoundingBox &box)
{
    return GetRayCollisionBox(ray, box);
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionModel(const Ray &ray, const model::RlModel &model)
{
    return GetRayCollisionModel(ray, model.getModel());
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionMesh(const Ray &ray, const model::RlMesh &mesh, const Matrix &transform)
{
    return GetRayCollisionMesh(ray, mesh.getMesh(), transform);
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionTriangle(const Ray &ray, const Vector3f &p1, const Vector3f &p2, const Vector3f &p3)
{
    return GetRayCollisionTriangle(ray, raylib::helper::VectorHelper::toRaylibVector(p1),
                                   raylib::helper::VectorHelper::toRaylibVector(p2),
                                   raylib::helper::VectorHelper::toRaylibVector(p3));
}

RayCollision raylib::helper::Collision3dHelper::getRayCollisionQuad(const Ray &ray, const Vector3f &p1, const Vector3f &p2, const Vector3f &p3, const Vector3f &p4)
{
    return GetRayCollisionQuad(ray, raylib::helper::VectorHelper::toRaylibVector(p1),
                               raylib::helper::VectorHelper::toRaylibVector(p2),
                               raylib::helper::VectorHelper::toRaylibVector(p3),
                               raylib::helper::VectorHelper::toRaylibVector(p4));
}
