/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** File description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMesh.hpp"

raylib::model::RlMesh::RlMesh(const Mesh &mesh) : _mesh(std::make_shared<Mesh>(mesh))
{
}

raylib::model::RlMesh::RlMesh(const raylib::model::RlMesh &mesh)
{
    this->_mesh = mesh._mesh;
    *this->_mesh = *mesh._mesh;
}

raylib::model::RlMesh &raylib::model::RlMesh::operator=(const raylib::model::RlMesh &mesh)
{
    if (this == &mesh)
        return *this;
    this->_mesh = mesh._mesh;
    *this->_mesh = *mesh._mesh;
    return *this;
}

raylib::model::RlMesh::~RlMesh()
{
    if (this->_mesh.use_count() != 1)
        return;
    UnloadMesh(*this->_mesh);
}

void raylib::model::RlMesh::uploadInGPU(const bool &dynamic)
{
    UploadMesh(&*this->_mesh, dynamic);
}

void raylib::model::RlMesh::updateBuffer(const int &index, void *data, const int &dataSize, const int &offset)
{
    UpdateMeshBuffer(*this->_mesh, index, data, dataSize, offset);
}

bool raylib::model::RlMesh::exportMesh(const std::string &fileName)
{
    return ExportMesh(*this->_mesh, fileName.c_str());
}

BoundingBox raylib::model::RlMesh::getBoundingBox()
{
    return GetMeshBoundingBox(*this->_mesh);
}

void raylib::model::RlMesh::genTangents()
{
    GenMeshTangents(&*this->_mesh);
}

void raylib::model::RlMesh::genBinormals()
{
    GenMeshBinormals(&*this->_mesh);
}

const Mesh &raylib::model::RlMesh::getMesh() const
{
    return *this->_mesh;
}

const std::shared_ptr<Mesh> &raylib::model::RlMesh::getMeshSharedPtr() const
{
    return this->_mesh;
}

