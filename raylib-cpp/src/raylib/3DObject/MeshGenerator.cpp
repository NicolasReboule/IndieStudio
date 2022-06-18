/*
** EPITECH PROJECT, 2022
** MeshGenerator.cpp
** FileHelper description:
** MeshGenerator.cpp
*/

#include "raylib/3DObject/MeshGenerator.hpp"

raylib::RlMesh raylib::MeshGenerator::genMeshPoly(const int &sides, const float &radius)
{
    return RlMesh(GenMeshPoly(sides, radius));
}

raylib::RlMesh raylib::MeshGenerator::genMeshPlane(const float &width, const float &length, const int &resX, const int &resZ)
{
    return RlMesh(GenMeshPlane(width, length, resX, resZ));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCube(const float &width, const float &height, const float &length)
{
    return RlMesh(GenMeshCube(width, height, length));
}

raylib::RlMesh raylib::MeshGenerator::genMeshSphere(const float &radius, const int &rings, const int &slices)
{
    return RlMesh(GenMeshSphere(radius, rings, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshHemiSphere(const float &radius, const int &rings, const int &slices)
{
    return RlMesh(GenMeshHemiSphere(radius, rings, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCylinder(const float &radius, const float &height, const int &slices)
{
    return RlMesh(GenMeshCylinder(radius, height, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCone(const float &radius, const float &height, const int &slices)
{
    return RlMesh(GenMeshCone(radius, height, slices));
}

raylib::RlMesh raylib::MeshGenerator::genMeshTorus(const float &radius, const float &size, const int &radSeg, const int &sides)
{
    return RlMesh(GenMeshTorus(radius, size, radSeg, sides));
}

raylib::RlMesh raylib::MeshGenerator::genMeshKnot(const float &radius, const float &size, const int &radSeg, const int &sides)
{
    return RlMesh(GenMeshKnot(radius, size, radSeg, sides));
}

raylib::RlMesh raylib::MeshGenerator::genMeshHeightmap(const raylib::image::RlImage &heightmap, const Vector3f &size)
{
    return RlMesh(GenMeshHeightmap(heightmap.getImage(), raylib::helper::VectorHelper::toRaylibVector(size)));
}

raylib::RlMesh raylib::MeshGenerator::genMeshCubicmap(const raylib::image::RlImage &cubicmap, const Vector3f &cubeSize)
{
    return RlMesh(GenMeshCubicmap(cubicmap.getImage(), raylib::helper::VectorHelper::toRaylibVector(cubeSize)));
}
