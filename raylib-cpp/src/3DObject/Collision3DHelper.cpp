/*
** EPITECH PROJECT, 2022
** Collision3DHelper.cpp
** File description:
** Collision3DHelper.cpp
*/

#include "raylib/3DObject/Collision3DHelper.hpp"


// Collision detection functions

bool raylib::Collision3dHelper::checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
{
    return CheckCollisionSpheres(center1, radius1, center2, radius2);
}

bool raylib::Collision3dHelper::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
    return CheckCollisionBoxes(box1, box2);
}

bool raylib::Collision3dHelper::checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
{
    return CheckCollisionBoxSphere(box, center, radius);
}

RayCollision raylib::Collision3dHelper::getRayCollisionSphere(Ray ray, Vector3 center, float radius)
{
    return GetRayCollisionSphere(ray, center, radius);
}

RayCollision raylib::Collision3dHelper::getRayCollisionBox(Ray ray, BoundingBox box)
{
    return GetRayCollisionBox(ray, box);
}

RayCollision raylib::Collision3dHelper::getRayCollisionModel(Ray ray, Model model)
{
    return GetRayCollisionModel(ray, model);
}

RayCollision raylib::Collision3dHelper::getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)
{
    return GetRayCollisionMesh(ray, mesh, transform);
}

RayCollision raylib::Collision3dHelper::getRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
{
    return GetRayCollisionTriangle(ray, p1, p2, p3);
}

RayCollision raylib::Collision3dHelper::getRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
{
    return GetRayCollisionQuad(ray, p1, p2, p3, p4);
}
