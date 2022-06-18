/*
** EPITECH PROJECT, 2022
** MeshHelper.cpp
** File description:
** MeshHelper.cpp
*/

#include "raylib/3DObject/MeshHelper.hpp"

void raylib::helper::MeshHelper::drawMesh(Mesh mesh, Material material, Matrix transform)
{
//    raylib::helper::RlMesh rlMesh = raylib::helper::RlMesh(RlMesh::MeshType::MESH_CUBE, nullptr);
    DrawMesh(mesh, material, transform);
}

void raylib::helper::MeshHelper::drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances)
{
    DrawMeshInstanced(mesh, material, transforms, instances);
}
