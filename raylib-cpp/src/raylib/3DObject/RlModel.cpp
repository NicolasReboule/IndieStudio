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
    this->_startBoundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}

raylib::RlModel::RlModel(const Mesh &mesh, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
: _model(LoadModelFromMesh(mesh)), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    this->_startBoundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}

raylib::RlModel::RlModel(const raylib::RlMesh &mesh, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
: _model(LoadModelFromMesh(mesh.getMesh())), _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    this->_startBoundingBox = GetModelBoundingBox(_model);
    if (!texturePath.empty())
        setTextureMaterial();
}

raylib::RlModel::RlModel(const RlMeshBuilder::MeshType &type, const std::string &texturePath, Vector3f position, Vector3f scale, Color color, Vector3f rotationAxis, float rotationAngle)
:  _texture(texturePath), _position(position), _color(color), _scale(scale), _rotationAxis(rotationAxis), _rotationAngle(rotationAngle)
{
    if (type == RlMeshBuilder::MeshCube) {
        raylib::RlMesh mesh = raylib::RlMeshBuilder().setMeshType(raylib::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }
    else if (type == RlMeshBuilder::MeshSphere) {
        raylib::RlMesh mesh = raylib::RlMeshBuilder().setMeshType(raylib::RlMeshBuilder::MeshSphere).setRadius(0.5f).setRings(10).setSlices(10).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }
    else {
        raylib::RlMesh mesh = raylib::RlMeshBuilder().setMeshType(raylib::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }

    //raylib::RlMesh mesh = raylib::RlMeshBuilder().setMeshType(raylib::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
    //this->_model = LoadModelFromMesh(mesh.getMesh());

    this->_startBoundingBox = GetModelBoundingBox(_model);

    if (!texturePath.empty())
        setTextureMaterial();
}


raylib::RlModel::~RlModel()
{
    std::cout << "~RlModel()" << std::endl;
    UnloadModel(this->_model);
}

// Model loading/unloading functions

void raylib::RlModel::setPosition(Vector3f position)
{
    this->_position = position;


    this->_boundingBox = this->_startBoundingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
}

void raylib::RlModel::setPosition(float x, float y, float z)
{
    _position.x = x;
    _position.y = y;
    _position.z = z;

    this->_boundingBox = this->_startBoundingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
}

void raylib::RlModel::setScale(float x, float y, float z)
{
    this->_scale.x = x;
    this->_scale.y = y;
    this->_scale.z = z;

    this->_boundingBox = this->_startBoundingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
}

void raylib::RlModel::setScale(Vector3f scale)
{
    this->_scale = scale;

    this->_boundingBox = this->_startBoundingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
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

void raylib::RlModel::setBoundingBox(const BoundingBox &boundingBox)
{
    this->_startBoundingBox = boundingBox;
}

