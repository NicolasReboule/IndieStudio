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

bool raylib::helper::MeshHelper::exportMesh(Mesh mesh, const std::string &fileName)
{
    return ExportMesh(mesh, fileName.c_str());
}

BoundingBox raylib::helper::MeshHelper::getMeshBoundingBox(Mesh mesh)
{
    return GetMeshBoundingBox(mesh);
}

void raylib::helper::MeshHelper::genMeshTangents(Mesh *mesh)
{
    GenMeshTangents(mesh);
}

void raylib::helper::MeshHelper::genMeshBinormals(Mesh *mesh)
{
    GenMeshBinormals(mesh);
}

void raylib::helper::MeshHelper::uploadMesh(Mesh *mesh, bool dynamic)
{
    UploadMesh(mesh, dynamic);
}

void raylib::helper::MeshHelper::updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset)
{
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}
