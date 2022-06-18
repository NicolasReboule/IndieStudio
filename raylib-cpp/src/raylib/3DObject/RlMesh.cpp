/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** File description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMesh.hpp"

raylib::RlMesh::RlMesh(const Mesh &mesh) : _mesh(mesh)
{
}

raylib::RlMesh::~RlMesh()
{
    UnloadMesh(this->_mesh);
}

void raylib::RlMesh::uploadInGPU(const bool &dynamic)
{
    UploadMesh(&this->_mesh, dynamic);
}

void raylib::RlMesh::updateBuffer(const int &index, void *data, const int &dataSize, const int &offset)
{
    UpdateMeshBuffer(this->_mesh, index, data, dataSize, offset);
}

bool raylib::RlMesh::exportMesh(const std::string &fileName)
{
    return ExportMesh(this->_mesh, fileName.c_str());
}

BoundingBox raylib::RlMesh::getBoundingBox()
{
    return GetMeshBoundingBox(this->_mesh);
}

void raylib::RlMesh::genTangents()
{
    GenMeshTangents(&this->_mesh);
}

void raylib::RlMesh::genBinormals()
{
    GenMeshBinormals(&this->_mesh);
}

const Mesh &raylib::RlMesh::getMesh() const
{
    return this->_mesh;
}
