/*
** EPITECH PROJECT, 2022
** MultiCube.cpp
** File description:
** MultiCube.cpp
*/

#include "GameEngine/Nodes/3D/MultiCube.hpp"

gameengine::node::_3D::MultiCube::MultiCube(const std::string &name, const Vector3f &size, \
const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, raylib::model::RlModel(raylib::builder::RlMeshBuilder()
    .setMeshType(raylib::builder::RlMeshBuilder::MeshType::MeshCube).setWidth(size.x).setHeight(size.y).setLength(size.z).build()), texture), _size(size)
{
    this->_model.setMaterialTexture(texture, 0, MATERIAL_MAP_CUBEMAP);
    this->_texture = texture;
}

void gameengine::node::_3D::MultiCube::draw()
{
    StaticBody::draw();
}
