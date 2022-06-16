/*
** EPITECH PROJECT, 2022
** Collision3DHelper.cpp
** FileHelper description:
** Collision3DHelper.cpp
*/

#include "raylib/3DObject/Collision3DHelper.hpp"


// Collision detection functions

bool raylib::Collision3dHelper::checkCollisionSpheres(Vector3f center1, float radius1, Vector3f center2, float radius2)
{
    return CheckCollisionSpheres(raylib::helper::VectorHelper::toRaylibVector(center1), radius1, raylib::helper::VectorHelper::toRaylibVector(center2), radius2);
}

bool raylib::Collision3dHelper::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
    return CheckCollisionBoxes(box1, box2);
}

bool raylib::Collision3dHelper::checkCollisionBoxSphere(BoundingBox box, Vector3f center, float radius)
{
    return CheckCollisionBoxSphere(box, raylib::helper::VectorHelper::toRaylibVector(center), radius);
}

RayCollision raylib::Collision3dHelper::getRayCollisionSphere(Ray ray, Vector3f center, float radius)
{
    return GetRayCollisionSphere(ray, raylib::helper::VectorHelper::toRaylibVector(center), radius);
}

RayCollision raylib::Collision3dHelper::getRayCollisionBox(Ray ray, BoundingBox box)
{
    return GetRayCollisionBox(ray, box);
}

RayCollision raylib::Collision3dHelper::getRayCollisionModel(Ray ray, RlModel model)
{
    return GetRayCollisionModel(ray, model.getModel());
}

RayCollision raylib::Collision3dHelper::getRayCollisionMesh(Ray ray, RlMesh mesh, Matrix transform)
{
    return GetRayCollisionMesh(ray, mesh.getMesh(), transform);
}

RayCollision raylib::Collision3dHelper::getRayCollisionTriangle(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3)
{
    return GetRayCollisionTriangle(ray, raylib::helper::VectorHelper::toRaylibVector(p1), raylib::helper::VectorHelper::toRaylibVector(p2), raylib::helper::VectorHelper::toRaylibVector(p3));
}

RayCollision raylib::Collision3dHelper::getRayCollisionQuad(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3, Vector3f p4)
{
    return GetRayCollisionQuad(ray, raylib::helper::VectorHelper::toRaylibVector(p1), raylib::helper::VectorHelper::toRaylibVector(p2),
                               raylib::helper::VectorHelper::toRaylibVector(p3), raylib::helper::VectorHelper::toRaylibVector(p4));
}
