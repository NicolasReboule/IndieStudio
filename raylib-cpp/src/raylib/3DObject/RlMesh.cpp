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

const Mesh &raylib::RlMesh::getMesh() const
{
    return this->_mesh;
}
