/*
** EPITECH PROJECT, 2022
** Collision3DHelper.hpp
** FileHelper description:
** Collision3DHelper.hpp
*/

#ifndef INDIESTUDIO_COLLISION3DHELPER_HPP
#define INDIESTUDIO_COLLISION3DHELPER_HPP

#include "raylib.h"
#include "raylib/Math.hpp"

namespace raylib {
    class Collision3dHelper {
    public:
        // Collision detection functions
        static bool checkCollisionSpheres(Vector3f center1, float radius1, Vector3f center2, float radius2);        // Check collision between two spheres
        static bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);                                      // Check collision between two bounding boxes
        static bool checkCollisionBoxSphere(BoundingBox box, Vector3f center, float radius);                       // Check collision between box and sphere
        static RayCollision getRayCollisionSphere(Ray ray, Vector3f center, float radius);                         // Get collision info between ray and sphere
        static RayCollision getRayCollisionBox(Ray ray, BoundingBox box);                                         // Get collision info between ray and box
        static RayCollision getRayCollisionModel(Ray ray, Model model);                                           // Get collision info between ray and model
        static RayCollision getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform);                            // Get collision info between ray and mesh
        static RayCollision getRayCollisionTriangle(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3);                 // Get collision info between ray and triangle
        static RayCollision getRayCollisionQuad(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3, Vector3f p4);         // Get collision info between ray and quad
    private:
    };
}

#endif //INDIESTUDIO_COLLISION3DHELPER_HPP
