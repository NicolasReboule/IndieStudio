/*
** EPITECH PROJECT, 2022
** RlModelBuilder.cpp
** File description:
** RlModelBuilder.cpp
*/

#include "raylib/3DObject/RlModelBuilder.hpp"

raylib::builder::RlModelBuilder::RlModelBuilder() : _mesh(), _modelPath(), _texturePath(), _position(0, 0, 0), _scale(1, 1, 1), _rotationAxis(0, 0, 0), _color(WHITE)
{
    _type = 0;
    _rotationAngle = 0;
}

raylib::RlModel raylib::builder::RlModelBuilder::build()
{
    if (_modelPath.empty() && _mesh == nullptr && _type == 0)
        throw raylib::ex::BuilderException("Nor model path, nor mesh, nor type are set");
    if (_modelPath.empty()) {
        raylib::RlModel model(*_mesh);
        //model.setTexture(_texturePath);
        model.setPosition(_position);
    } else if (_type != 0) {
        raylib::RlModel model((raylib::builder::RlMeshBuilder::MeshType) _type);
        return model;
    }
    return raylib::RlModel(_modelPath);
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setMesh(const std::shared_ptr<raylib::models::RlMesh> &mesh)
{
    _mesh = mesh;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setMeshType(const raylib::builder::RlMeshBuilder::MeshType &meshType)
{
    _type = meshType;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setModelPath(const std::string &modelPath)
{
    _modelPath = modelPath;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setTexturePath(const std::string &texturePath)
{
    _texturePath = texturePath;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setPosition(const Vector3f &position)
{
    _position = position;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setScale(const Vector3f &scale)
{
    _scale = scale;
    return *this;
}

raylib::builder::RlModelBuilder raylib::builder::RlModelBuilder::setRotationAxis(const Vector3f &rotationAxis)
{
    _rotationAxis = rotationAxis;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setRotationAngle(const float &rotationAngle)
{
    _rotationAngle = rotationAngle;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setColor(const RlColor &color)
{
    _color = color;
    return *this;
}
