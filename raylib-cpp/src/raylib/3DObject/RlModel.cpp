/*
** EPITECH PROJECT, 2022
** Model.cpp
** FileHelper description:
** Model.cpp
*/

#include "raylib/3DObject/RlModel.hpp"

raylib::RlModel::RlModel(const std::string &fileName, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
: _model(LoadModel(fileName.c_str())), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    _boundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}

raylib::RlModel::RlModel(Mesh mesh, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
: _model(LoadModelFromMesh(mesh)), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    _boundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}
//
raylib::RlModel::RlModel(const raylib::RlMesh &mesh, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
: _model(LoadModelFromMesh(mesh.getMesh())), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    _boundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}

raylib::RlModel::~RlModel()
{
    UnloadModel(this->_model);
}

// Model loading/unloading functions

void raylib::RlModel::setPosition(Vector3f position)
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

void raylib::RlModel::setScale(Vector3f scale)
{
    _scale = scale;
}

void raylib::RlModel::setColor(Color color)
{
    _color = color;
}

void raylib::RlModel::setRotationAxis(Vector3f rotationAxis)
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

const Vector3f &raylib::RlModel::getPosition() const
{
    return this->_position;
}

const Vector3f &raylib::RlModel::getScale() const
{
    return this->_scale;
}

const Vector3f &raylib::RlModel::getRotationAxis() const
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

const BoundingBox &raylib::RlModel::getBoundingBox() const
{
    return this->_boundingBox;
}

void raylib::RlModel::setTexture(const raylib::RlTexture &texture)
{
    _texture = texture;
}

const raylib::RlTexture &raylib::RlModel::getTexture() const
{
    return _texture;
}

raylib::RlTexture *raylib::RlModel::operator->()
{
    return &_texture;
}

void raylib::RlModel::setTextureMaterial()
{
    SetMaterialTexture(&_model.materials[0], MATERIAL_MAP_DIFFUSE, _texture.get());
}
