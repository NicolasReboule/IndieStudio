/*
** EPITECH PROJECT, 2022
** MeshGenerator.cpp
** FileHelper description:
** MeshGenerator.cpp
*/

#include "raylib/3DObject/MeshGenerator.hpp"

raylib::RlMesh raylib::MeshGenerator::genMeshPoly(int sides, float radius)
{
    return RlMesh(GenMeshPoly(sides, radius));
}

raylib::RlMesh raylib::MeshGenerator::genMeshPlane(float width, float length, int resX, int resZ)
{
    return RlMesh(GenMeshPlane(width, length, resX, resZ));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCube(float width, float height, float length)
{
    return RlMesh(GenMeshCube(width, height, length));
}

raylib::RlMesh raylib::MeshGenerator::genMeshSphere(float radius, int rings, int slices)
{
    return RlMesh(GenMeshSphere(radius, rings, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshHemiSphere(float radius, int rings, int slices)
{
    return RlMesh(GenMeshHemiSphere(radius, rings, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCylinder(float radius, float height, int slices)
{
    return RlMesh(GenMeshCylinder(radius, height, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCone(float radius, float height, int slices)
{
    return RlMesh(GenMeshCone(radius, height, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshTorus(float radius, float size, int radSeg, int sides)
{
    return RlMesh(GenMeshTorus(radius, size, radSeg, sides));
}

raylib::RlMesh raylib::MeshGenerator::genMeshKnot(float radius, float size, int radSeg, int sides)
{
    return RlMesh(GenMeshKnot(radius, size, radSeg, sides));
}

raylib::RlMesh raylib::MeshGenerator::genMeshHeightmap(Image heightmap, Vector3f size)
{
    return RlMesh(GenMeshHeightmap(heightmap, raylib::VectorHelper::toRaylibVector(size)));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCubicmap(Image cubicmap, Vector3f cubeSize)
{
    return RlMesh(GenMeshCubicmap(cubicmap, raylib::VectorHelper::toRaylibVector(cubeSize)));
}
