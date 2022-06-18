/*
** EPITECH PROJECT, 2022
** MeshGenerator.cpp
** FileHelper description:
** MeshGenerator.cpp
*/

#include "raylib/3DObject/MeshGenerator.hpp"

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshPoly(const int &sides, const float &radius)
{
    return RlMesh(GenMeshPoly(sides, radius));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshPlane(const float &width, const float &length, const int &resX, const int &resZ)
{
    return RlMesh(GenMeshPlane(width, length, resX, resZ));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshCube(const float &width, const float &height, const float &length)
{
    return RlMesh(GenMeshCube(width, height, length));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshSphere(const float &radius, const int &rings, const int &slices)
{
    return RlMesh(GenMeshSphere(radius, rings, slices));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshHemiSphere(const float &radius, const int &rings, const int &slices)
{
    return RlMesh(GenMeshHemiSphere(radius, rings, slices));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshCylinder(const float &radius, const float &height, const int &slices)
{
    return RlMesh(GenMeshCylinder(radius, height, slices));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshCone(const float &radius, const float &height, const int &slices)
{
    return RlMesh(GenMeshCone(radius, height, slices));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshTorus(const float &radius, const float &size, const int &radSeg, const int &sides)
{
    return RlMesh(GenMeshTorus(radius, size, radSeg, sides));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshKnot(const float &radius, const float &size, const int &radSeg, const int &sides)
{
    return RlMesh(GenMeshKnot(radius, size, radSeg, sides));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshHeightmap(const raylib::image::RlImage &heightmap, const Vector3f &size)
{
    return RlMesh(GenMeshHeightmap(heightmap.getImage(), raylib::helper::VectorHelper::toRaylibVector(size)));
}

raylib::models::RlMesh raylib::models::MeshGenerator::genMeshCubicmap(const raylib::image::RlImage &cubicmap, const Vector3f &cubeSize)
{
    return RlMesh(GenMeshCubicmap(cubicmap.getImage(), raylib::helper::VectorHelper::toRaylibVector(cubeSize)));
}
