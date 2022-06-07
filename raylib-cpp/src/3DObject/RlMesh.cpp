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

