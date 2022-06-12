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

namespace raylib {
    class MeshGenerator {
    public:
        // Mesh generation functions

        static Mesh genMeshCube(float width, float height, float length);
        static Mesh genMeshCylinder(float radius, float height, int slices);
        static Mesh genMeshCone(float radius, float height, int slices);
        static Mesh genMeshSphere(float radius, int rings, int slices);
        static Mesh genMeshHemiSphere(float radius, int rings, int slices);
        static Mesh genMeshPlane(float width, float length, int resX, int resZ);
        static Mesh genMeshTorus(float radius, float size, int radSeg, int sides);
        static Mesh genMeshKnot(float radius, float size, int radSeg, int sides);
        static Mesh genMeshHeightmap(Image heightmap, Vector3f size);
        static Mesh genMeshPoly(int sides, float radius);
        static Mesh genMeshCubicmap(Image cubicmap, Vector3f cubeSize);
    private:
    };
}

#endif //INDIESTUDIO_MESHGENERATOR_HPP
