/*
** EPITECH PROJECT, 2022
** Model.cpp
** FileHelper description:
** Model.cpp
*/

#include "raylib/3DObject/RlModel.hpp"

raylib::RlModel::RlModel(const std::string &fileName, const std::string &texturePath, Vector3 position, Vector3 scale, Color color, Vector3 rotationAxis, float rotationAngle)
: _model(LoadModel(fileName.c_str())), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    setTextureMaterial();
}

raylib::RlModel::RlModel(Mesh mesh, const std::string &texturePath, Vector3 position, Vector3 scale, Color color, Vector3 rotationAxis, float rotationAngle)
: _model(LoadModelFromMesh(mesh)), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    setTextureMaterial();
}
//
//raylib::RlModel::RlModel(raylib::RlMesh mesh, Vector3 position, Vector3 scale, Color color, Vector3 rotationAxis, float rotationAngle)
//: _model(LoadModelFromMesh(mesh.getMesh())), _position(position), _color(color), _scale(scale)
//{
// }

raylib::RlModel::~RlModel()
{
    UnloadModel(this->_model);
}

// Model loading/unloading functions

void raylib::RlModel::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}

void raylib::RlModel::setPosition(Vector3 position)
{
    _position = position;
}

void raylib::RlModel::setPosition(float x, float y, float z)
{
    _position.x = x;
    _position.y = y;
    _position.z = z;
}

void raylib::RlModel::setScale(float x, float y, float z)
{
    _scale.x = x;
    _scale.y = y;
    _scale.z = z;
}

void raylib::RlModel::setScale(Vector3 scale)
{
    _scale = scale;
}

void raylib::RlModel::setColor(Color color)
{
    _color = color;
}

void raylib::RlModel::setRotationAxis(Vector3 rotationAxis)
{
    _rotationAxis = rotationAxis;
}

void raylib::RlModel::setRotationAxis(float x, float y, float z)
{
    _rotationAxis.x = x;
    _rotationAxis.y = y;
    _rotationAxis.z = z;
}

void raylib::RlModel::setRotationAngle(float rotationAngle)
{
    _rotationAngle = rotationAngle;
}

const Model &raylib::RlModel::getModel() const
{
    return this->_model;
}

const Vector3 &raylib::RlModel::getPosition() const
{
    return this->_position;
}

const Vector3 &raylib::RlModel::getScale() const
{
    return this->_scale;
}

const Vector3 &raylib::RlModel::getRotationAxis() const
{
    return this->_rotationAxis;
}

const float &raylib::RlModel::getRotationAngle() const
{
    return this->_rotationAngle;
}

const Color &raylib::RlModel::getColor() const
{
    return this->_color;
}

BoundingBox raylib::RlModel::getBoundingBox() const
{
    return GetModelBoundingBox(this->_model);
}

void raylib::RlModel::setTexture(const raylib::Texture &texture)
{
    _texture = texture;
}

const raylib::Texture &raylib::RlModel::getTexture() const
{
    return _texture;
}

raylib::Texture *raylib::RlModel::operator->()
{
    return &_texture;
}

void raylib::RlModel::setTextureMaterial()
{
    SetMaterialTexture(&_model.materials[0], MATERIAL_MAP_DIFFUSE, _texture.getTexture());
}
