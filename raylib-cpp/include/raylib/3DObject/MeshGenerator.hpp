/*
** EPITECH PROJECT, 2022
** MeshGenerator.hpp
** FileHelper description:
** MeshGenerator.hpp
*/

#ifndef INDIESTUDIO_MESHGENERATOR_HPP
#define INDIESTUDIO_MESHGENERATOR_HPP

#include <raylib.h>
#include "raylib/Math.hpp"
#include "raylib/3DObject/RlMesh.hpp"

namespace raylib {
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
        static RlMesh genMeshCube(float width, float height, float length);

        /**
         * @brief Generate a mesh of a cylinder
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the cylinder
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the cylinder
         */
        static RlMesh genMeshCylinder(float radius, float height, int slices);

        /**
         * @brief Generate a mesh of a cone
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the cone
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the cone
         */
        static RlMesh genMeshCone(float radius, float height, int slices);

        /**
         * @brief Generate a mesh of a sphere
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the sphere
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the sphere
         */
        static RlMesh genMeshSphere(float radius, int rings, int slices);

        /**
         * @brief Generate a mesh of an hemisphere
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the hemisphere
         * @param rings Number of rings
         * @param slices Number of slices
         * @return Mesh of the hemisphere
         */
        static RlMesh genMeshHemiSphere(float radius, int rings, int slices);

        /**
         * @brief Generate a mesh of a plane
         * @warning Don't use this, instead use RlMeshBuilder
         * @param width Width of the plane
         * @param length Length of the plane
         * @param resX resolution on the X axis
         * @param resZ resolution on the Z axis
         * @return Mesh of the plane
         */
        static RlMesh genMeshPlane(float width, float length, int resX, int resZ);

        /**
         * @brief Generate a mesh of a torus
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the torus
         * @param size Size of the torus
         * @param radSeg Number of segments on the radius
         * @param sides Number of sides
         * @return Mesh of the torus
         */
        static RlMesh genMeshTorus(float radius, float size, int radSeg, int sides);

        /**
         * @brief Generate a mesh of a knot
         * @warning Don't use this, instead use RlMeshBuilder
         * @param radius Radius of the knot
         * @param size Size of the knot
         * @param radSeg Number of segments on the radius
         * @param sides Number of sides
         * @return Mesh of the knot
         */
        static RlMesh genMeshKnot(float radius, float size, int radSeg, int sides);

        /**
         * @brief Generate a mesh of a heightmap
         * @warning Don't use this, instead use RlMeshBuilder
         * @param heightMap Heightmap image
         * @param size Size of the heightmap
         * @return Mesh of the heightmap
         */
        static RlMesh genMeshHeightmap(Image heightmap, Vector3f size);

        /**
         * @brief Generate a mesh of a polygon
         * @warning Don't use this, instead use RlMeshBuilder
         * @param sides Number of sides
         * @param radius Radius of the polygon
         * @return Mesh of the polygon
         */
        static RlMesh genMeshPoly(int sides, float radius);

        /**
         * @brief Generate a mesh of a cubicmap
         * @warning Don't use this, instead use RlMeshBuilder
         * @param cubicmap Cubicmap image
         * @param cubeSize Size of the cubicmap
         * @return Mesh of the cubicmap
         */
        static RlMesh genMeshCubicmap(Image cubicmap, Vector3f cubeSize);
    };
}

#endif //INDIESTUDIO_MESHGENERATOR_HPP
