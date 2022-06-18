/*
** EPITECH PROJECT, 2022
** Model.cpp
** FileHelper description:
** Model.cpp
*/

#include "raylib/3DObject/RlModel.hpp"

/*
raylib::model::RlModel::RlModel(const std::string &fileName)
: _model(LoadModel(fileName.c_str())), _texture(""), _position(0, 0, 0), _color(WHITE),
_scale(1, 1, 1), _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    this->_baseBoudingBox = GetModelBoundingBox(_model);
}

raylib::model::RlModel::RlModel(const raylib::model::RlMesh &mesh)
: _model(LoadModelFromMesh(mesh.getMesh())), _texture(""), _position(0, 0, 0), _color(WHITE),
_scale(1, 1, 1), _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    this->_baseBoudingBox = GetModelBoundingBox(_model);
}

raylib::model::RlModel::RlModel(const builder::RlMeshBuilder::MeshType &type)
: _model(), _texture(""), _position(0, 0, 0), _color(WHITE), _scale(1, 1, 1),
_rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    if (type == builder::RlMeshBuilder::MeshCube) {
        raylib::model::RlMesh mesh = raylib::builder::RlMeshBuilder().setMeshType(raylib::builder::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }
    else if (type == builder::RlMeshBuilder::MeshSphere) {
        raylib::model::RlMesh mesh = raylib::builder::RlMeshBuilder().setMeshType(raylib::builder::RlMeshBuilder::MeshSphere).setRadius(0.5f).setRings(10).setSlices(10).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }
    else {
        raylib::model::RlMesh mesh = raylib::builder::RlMeshBuilder().setMeshType(raylib::builder::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
        this->_model = LoadModelFromMesh(mesh.getMesh());
    }

    //raylib::model::RlMesh mesh = raylib::builder::RlMeshBuilder().setMeshType(raylib::builder::RlMeshBuilder::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
    //this->_model = LoadModelFromMesh(mesh.getMesh());

    this->_baseBoudingBox = GetModelBoundingBox(_model);

    */
/*if (!texturePath.empty())
        setTextureMaterial();*//*

}
raylib::model::RlModel::~RlModel()
{
    UnloadModel(this->_model);
}

void raylib::model::RlModel::setTexture(const raylib::texture::RlTexture &texture)
{
    _texture = texture;
    setTextureMaterial();
}

const raylib::texture::RlTexture &raylib::model::RlModel::getTexture() const
{
    return _texture;
}

raylib::texture::RlTexture *raylib::model::RlModel::operator->()
{
    return &_texture;
}

void raylib::model::RlModel::setTextureMaterial()
{
    SetMaterialTexture(&_model.materials[0], MATERIAL_MAP_DIFFUSE, _texture.get());
}

*/

raylib::model::RlModel::RlModel(const std::string &fileName)
    : _model(LoadModel(fileName.c_str())), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
      _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
   this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(_model);
   this->_mesh = nullptr;
}

raylib::model::RlModel::RlModel(const std::shared_ptr<raylib::model::RlMesh> &mesh)
    : _model(LoadModelFromMesh(mesh->getMesh())), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
      _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(_model);
    this->_mesh = mesh;
}

raylib::model::RlModel::~RlModel()
{
    if (this->_mesh)
        UnloadModelKeepMeshes(this->_model);
    else
        UnloadModel(this->_model);
}

const Vector3f &raylib::model::RlModel::getPosition() const
{
    return this->_position;
}

void raylib::model::RlModel::setPosition(const Vector3f &position)
{
    this->setPosition(position.x, position.y, position.z);
}

void raylib::model::RlModel::setPosition(const float &x, const float &y, const float &z)
{
    this->_position.x = x;
    this->_position.y = y;
    this->_position.z = z;
    this->_boundingBox = this->_baseBoudingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
}

const Vector3f &raylib::model::RlModel::getScale() const
{
    return this->_scale;
}

void raylib::model::RlModel::setScale(const Vector3f &scale)
{
    this->setScale(scale.x, scale.y, scale.z);
}

void raylib::model::RlModel::setScale(const float &x, const float &y, const float &z)
{
    this->_scale.x = x;
    this->_scale.y = y;
    this->_scale.z = z;
    this->_boundingBox = this->_baseBoudingBox;

    this->_boundingBox.min.x = this->_boundingBox.min.x * this->_scale.x + this->_position.x;
    this->_boundingBox.min.y = this->_boundingBox.min.y * this->_scale.y + this->_position.y;
    this->_boundingBox.min.z = this->_boundingBox.min.z * this->_scale.z + this->_position.z;

    this->_boundingBox.max.x = this->_boundingBox.max.x * this->_scale.x + this->_position.x;
    this->_boundingBox.max.y = this->_boundingBox.max.y * this->_scale.y + this->_position.y;
    this->_boundingBox.max.z = this->_boundingBox.max.z * this->_scale.z + this->_position.z;
}

const RlColor &raylib::model::RlModel::getColor() const
{
    return this->_color;
}

void raylib::model::RlModel::setColor(const RlColor &color)
{
    this->_color = color;
}

const Vector3f &raylib::model::RlModel::getRotationAxis() const
{
    return this->_rotationAxis;
}

void raylib::model::RlModel::setRotationAxis(const Vector3f &rotationAxis)
{
    this->_rotationAxis = rotationAxis;
}

void raylib::model::RlModel::setRotationAxis(const float &x, const float &y, const float &z)
{
    this->_rotationAxis.x = x;
    this->_rotationAxis.y = y;
    this->_rotationAxis.z = z;
}

float raylib::model::RlModel::getRotationAngle() const
{
    return this->_rotationAngle;
}

void raylib::model::RlModel::setRotationAngle(float rotationAngle)
{
    this->_rotationAngle = rotationAngle;
}

const BoundingBox &raylib::model::RlModel::getBoundingBox() const
{
    return this->_boundingBox;
}

void raylib::model::RlModel::setBoundingBox(const BoundingBox &boundingBox)
{
    this->_boundingBox = this->_baseBoudingBox = boundingBox;
}

const BoundingBox &raylib::model::RlModel::getBaseBoundingBox() const
{
    return this->_baseBoudingBox;
}

const Model &raylib::model::RlModel::getModel() const
{
    return this->_model;
}
