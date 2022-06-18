/*
** EPITECH PROJECT, 2022
** Collision3DHelper.hpp
** FileHelper description:
** Collision3DHelper.hpp
*/

#ifndef INDIESTUDIO_COLLISION3DHELPER_HPP
#define INDIESTUDIO_COLLISION3DHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/3DObject/RlModel.hpp"
#include "raylib/3DObject/RlMesh.hpp"
#include <raylib.h>

namespace raylib::helper {
    /**
     * @brief Helper for collisions
     */
    class Collision3dHelper {
    public:

        /**
         * @brief Check collision between two spheres
         * @param center1 Center of the first sphere
         * @param radius1 Radius of the first sphere
         * @param center2 Center of the second sphere
         * @param radius2 Radius of the second sphere
         * @return If the two spheres are colliding
         */
        static bool checkCollisionSpheres(Vector3f center1, float radius1, Vector3f center2, float radius2);

        /**
         * @brief Check collision between two bounding boxes
         * @param box1 Bounding box of the first object
         * @param box2 Bounding box of the second object
         * @return If the two bounding boxes are colliding
         */
        static bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);

        /**
         * @brief Check collision between a bounding box and a sphere
         * @param box Bounding box of the object
         * @param center Center of the sphere
         * @param radius Radius of the sphere
         * @return If the bounding box and the sphere are colliding
         */
        static bool checkCollisionBoxSphere(BoundingBox box, Vector3f center, float radius);

        /**
         * @brief Get collision info between ray and sphere
         * @param ray Ray
         * @param center Center of the sphere
         * @param radius Radius of the sphere
         * @return If the ray and the sphere are colliding
         */
        static RayCollision getRayCollisionSphere(Ray ray, Vector3f center, float radius);

        /**
         * @brief Get collision info between ray and box
         * @param ray Ray
         * @param box Bounding box
         * @return If the ray and the box are colliding
         */
        static RayCollision getRayCollisionBox(Ray ray, BoundingBox box);

        /**
         * @brief Get collision info between ray and model
         * @param ray Ray
         * @param model Model
         * @return If the ray and the model are colliding
         */
        static RayCollision getRayCollisionModel(Ray ray, RlModel model);

        /**
         * @brief Get collision info between ray and mesh
         * @param ray Ray
         * @param mesh Mesh
         * @param transform Transform of the mesh
         * @return If the ray and the mesh are colliding
         */
        static RayCollision getRayCollisionMesh(Ray ray, models::RlMesh mesh, Matrix transform);

        /**
         * @brief Get collision info between ray and triangle
         * @param ray Ray
         * @param p1 Vertex 1 of the triangle
         * @param p2 Vertex 2 of the triangle
         * @param p3 Vertex 3 of the triangle
         * @return If the ray and the triangle are colliding
         */
        static RayCollision getRayCollisionTriangle(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3);

        /**
         * @brief Get collision info between ray and quad
         * @param ray Ray
         * @param p1 Vertex 1 of the quad
         * @param p2 Vertex 2 of the quad
         * @param p3 Vertex 3 of the quad
         * @param p4 Vertex 4 of the quad
         * @return If the ray and the quad are colliding
         */
        static RayCollision getRayCollisionQuad(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3, Vector3f p4);
    private:
    };
}

#endif //INDIESTUDIO_COLLISION3DHELPER_HPP
