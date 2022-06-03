/*
** EPITECH PROJECT, 2022
** MeshGenerator.cpp
** FileHelper description:
** MeshGenerator.cpp
*/

#include "raylib/3DObject/MeshGenerator.hpp"

// Mesh generation functions

Mesh raylib::MeshGenerator::genMeshPoly(int sides, float radius)
{
    return GenMeshPoly(sides, radius);
}

Mesh raylib::MeshGenerator::genMeshPlane(float width, float length, int resX, int resZ)
{
    return GenMeshPlane(width, length, resX, resZ);
}

Mesh raylib::MeshGenerator::genMeshCube(float width, float height, float length)
{
    return GenMeshCube(width, height, length);
}

Mesh raylib::MeshGenerator::genMeshSphere(float radius, int rings, int slices)
{
    return GenMeshSphere(radius, rings, slices);
}

Mesh raylib::MeshGenerator::genMeshHemiSphere(float radius, int rings, int slices)
{
    return GenMeshHemiSphere(radius, rings, slices);
}

Mesh raylib::MeshGenerator::genMeshCylinder(float radius, float height, int slices)
{
    return GenMeshCylinder(radius, height, slices);
}

Mesh raylib::MeshGenerator::genMeshCone(float radius, float height, int slices)
{
    return GenMeshCone(radius, height, slices);
}

Mesh raylib::MeshGenerator::genMeshTorus(float radius, float size, int radSeg, int sides)
{
    return GenMeshTorus(radius, size, radSeg, sides);
}

Mesh raylib::MeshGenerator::genMeshKnot(float radius, float size, int radSeg, int sides)
{
    return GenMeshKnot(radius, size, radSeg, sides);
}

Mesh raylib::MeshGenerator::genMeshHeightmap(Image heightmap, Vector3 size)
{
    return GenMeshHeightmap(heightmap, size);
}

Mesh raylib::MeshGenerator::genMeshCubicmap(Image cubicmap, Vector3 cubeSize)
{
    return GenMeshCubicmap(cubicmap, cubeSize);
}
