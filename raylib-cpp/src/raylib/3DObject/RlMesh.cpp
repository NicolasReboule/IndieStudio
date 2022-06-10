/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** File description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMesh.hpp"

raylib::RlMesh::RlMesh(Mesh &mesh)
{
    this->_mesh = mesh;
}

const Mesh &raylib::RlMesh::getMesh() const
{
    return _mesh;
}

void raylib::RlMesh::setMesh(const Mesh &mesh)
{
    _mesh = mesh;
}
