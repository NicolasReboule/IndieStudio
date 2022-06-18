/*
** EPITECH PROJECT, 2022
** MeshGenerator.hpp
** FileHelper description:
** MeshGenerator.hpp
*/

#ifndef INDIESTUDIO_MESHGENERATOR_HPP
#define INDIESTUDIO_MESHGENERATOR_HPP

#include "raylib/Math.hpp"
#include "raylib/Image/RlImage.hpp"
#include "raylib/3DObject/RlMesh.hpp"
#include <raylib.h>

namespace raylib::model {
    /**
     * @brief Generate some type of mesh
     */
    class MeshGenerator {
    public:

        /**
         * @brief Generate a mesh of a cube
         * @warning Don't use this, instead use RlMeshBuilder
         * @param width Width of the cube
         * @param height Height of the cube
         * @param length Length of the cube
         * @return Mesh of the cube
         */
        static RlMesh genMeshCube(const float &width, const float &height, const float &length);

        /**
         * @brief Generate a mesh of a cylinder
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the cylinder
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the cylinder
         */
        static RlMesh genMeshCylinder(const float &radius, const float &height, const int &slices);

        /**
         * @brief Generate a mesh of a cone
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the cone
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the cone
         */
        static RlMesh genMeshCone(const float &radius, const float &height, const int &slices);

        /**
         * @brief Generate a mesh of a sphere
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the sphere
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the sphere
         */
        static RlMesh genMeshSphere(const float &radius, const int &rings, const int &slices);

        /**
         * @brief Generate a mesh of an hemisphere
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the hemisphere
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the hemisphere
         */
        static RlMesh genMeshHemiSphere(const float &radius, const int &rings, const int &slices);

        /**
         * @brief Generate a mesh of a plane
         * @warning Don't use this, instead use RlMeshBuilder
         * @param width Width of the plane
         * @param length Length of the plane
         * @param resX resolution on the X axis
         * @param resZ resolution on the Z axis
         * @return Mesh of the plane
         */
        static RlMesh genMeshPlane(const float &width, const float &length, const int &resX, const int &resZ);

        /**
         * @brief Generate a mesh of a torus
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the torus
         * @param size Size of the torus
         * @param radSeg Number of segments on the radius
         * @param sides Number of sides
         * @return Mesh of the torus
         */
        static RlMesh genMeshTorus(const float &radius, const float &size, const int &radSeg, const int &sides);

        /**
         * @brief Generate a mesh of a knot
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the knot
         * @param size Size of the knot
         * @param radSeg Number of segments on the radius
         * @param sides Number of sides
         * @return Mesh of the knot
         */
        static RlMesh genMeshKnot(const float &radius, const float &size, const int &radSeg, const int &sides);

        /**
         * @brief Generate a mesh of a heightmap
         * @warning Don't use this, instead use RlMeshBuilder
         * @param heightMap Heightmap image
         * @param size Size of the heightmap
         * @return Mesh of the heightmap
         */
        static RlMesh genMeshHeightmap(const image::RlImage &heightmap, const Vector3f &size);

        /**
         * @brief Generate a mesh of a polygon
         * @warning Don't use this, instead use RlMeshBuilder
         * @param sides Number of sides
         * @param radius Radius of the polygon
         * @return Mesh of the polygon
         */
        static RlMesh genMeshPoly(const int &sides, const float &radius);

        /**
         * @brief Generate a mesh of a cubicmap
         * @warning Don't use this, instead use RlMeshBuilder
         * @param cubicmap Cubicmap image
         * @param cubeSize Size of the cubicmap
         * @return Mesh of the cubicmap
         */
        static RlMesh genMeshCubicmap(const image::RlImage &cubicmap, const Vector3f &cubeSize);
    };
}

#endif //INDIESTUDIO_MESHGENERATOR_HPP
