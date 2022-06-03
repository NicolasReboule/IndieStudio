/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** FileHelper description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMesh.hpp"

// Mesh management functions

void raylib::RlMesh::uploadMesh(Mesh *mesh, bool dynamic)
{
    UploadMesh(mesh, dynamic);
}

void raylib::RlMesh::updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset)
{
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

void raylib::RlMesh::unloadMesh(Mesh mesh)
{
    UnloadMesh(mesh);
}

void raylib::RlMesh::drawMesh(Mesh mesh, Material material, Matrix transform)
{
    DrawMesh(mesh, material, transform);
}

void raylib::RlMesh::drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances)
{
    DrawMeshInstanced(mesh, material, transforms, instances);
}

bool raylib::RlMesh::exportMesh(Mesh mesh, const std::string &fileName)
{
    return ExportMesh(mesh, fileName.c_str());
}

BoundingBox raylib::RlMesh::getMeshBoundingBox(Mesh mesh)
{
    return GetMeshBoundingBox(mesh);
}

void raylib::RlMesh::genMeshTangents(Mesh *mesh)
{
    GenMeshTangents(mesh);
}

void raylib::RlMesh::genMeshBinormals(Mesh *mesh)
{
    GenMeshBinormals(mesh);
}
