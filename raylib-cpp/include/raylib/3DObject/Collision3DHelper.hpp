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
     * @brief Helper class for 3D collision detection
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
        static bool checkCollisionSpheres(const Vector3f &center1, const float &radius1, const Vector3f &center2, const float &radius2);

        /**
         * @brief Check collision between two bounding boxes
         * @param box1 Bounding box of the first object
         * @param box2 Bounding box of the second object
         * @return If the two bounding boxes are colliding
         */
        static bool checkCollisionBoxes(const BoundingBox &box1, const BoundingBox &box2);

        /**
         * @brief Check collision between a bounding box and a sphere
         * @param box Bounding box of the object
         * @param center Center of the sphere
         * @param radius Radius of the sphere
         * @return If the bounding box and the sphere are colliding
         */
        static bool checkCollisionBoxSphere(const BoundingBox &box, const Vector3f &center, const float &radius);

        /**
         * @brief Get collision info between ray and sphere
         * @param ray Ray
         * @param center Center of the sphere
         * @param radius Radius of the sphere
         * @return If the ray and the sphere are colliding
         */
        static RayCollision getRayCollisionSphere(const Ray &ray, const Vector3f &center, const float &radius);

        /**
         * @brief Get collision info between ray and box
         * @param ray Ray
         * @param box Bounding box
         * @return If the ray and the box are colliding
         */
        static RayCollision getRayCollisionBox(const Ray &ray, const BoundingBox &box);

        /**
         * @brief Get collision info between ray and model
         * @param ray Ray
         * @param model Model
         * @return If the ray and the model are colliding
         */
        static RayCollision getRayCollisionModel(const Ray &ray, const model::RlModel &model);

        /**
         * @brief Get collision info between ray and mesh
         * @param ray Ray
         * @param mesh Mesh
         * @param transform Transform of the mesh
         * @return If the ray and the mesh are colliding
         */
        static RayCollision getRayCollisionMesh(const Ray &ray, const model::RlMesh &mesh, const Matrix &transform);

        /**
         * @brief Get collision info between ray and triangle
         * @param ray Ray
         * @param p1 Vertex 1 of the triangle
         * @param p2 Vertex 2 of the triangle
         * @param p3 Vertex 3 of the triangle
         * @return If the ray and the triangle are colliding
         */
        static RayCollision getRayCollisionTriangle(const Ray &ray, const Vector3f &p1, const Vector3f &p2, const Vector3f &p3);

        /**
         * @brief Get collision info between ray and quad
         * @param ray Ray
         * @param p1 Vertex 1 of the quad
         * @param p2 Vertex 2 of the quad
         * @param p3 Vertex 3 of the quad
         * @param p4 Vertex 4 of the quad
         * @return If the ray and the quad are colliding
         */
        static RayCollision getRayCollisionQuad(const Ray &ray, const Vector3f &p1, const Vector3f &p2, const Vector3f &p3, const Vector3f &p4);
    };
}

#endif //INDIESTUDIO_COLLISION3DHELPER_HPP
