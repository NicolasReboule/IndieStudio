/*
** EPITECH PROJECT, 2022
** Model.cpp
** FileHelper description:
** Model.cpp
*/

#include "raylib/3DObject/RlModel.hpp"

raylib::model::RlModel::RlModel(const std::string &fileName)
    : _model(std::make_shared<Model>()), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
      _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    *this->_model = LoadModel(fileName.c_str());
    this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(*_model);
    this->_mesh = nullptr;
}

raylib::model::RlModel::RlModel(const std::string &fileName, const std::string &textureName)
    : _model(std::make_shared<Model>()), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
    _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    *this->_model = LoadModel(fileName.c_str());
    this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(*_model);
    this->_mesh = nullptr;
    this->_texture = std::make_shared<texture::RlTexture>(textureName);
    this->setMaterialTexture(this->_texture);
}

raylib::model::RlModel::RlModel(const std::shared_ptr<raylib::model::RlMesh> &mesh)
    : _model(std::make_shared<Model>()), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
      _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    *this->_model = LoadModelFromMesh(mesh->getMesh());
    this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(*_model);
    this->_mesh = mesh;
}

raylib::model::RlModel::RlModel(const raylib::model::RlMesh &mesh)
    : _model(std::make_shared<Model>()), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White),
      _rotationAxis(0, 0, 0), _rotationAngle(0), _boundingBox(), _baseBoudingBox()
{
    *this->_model = LoadModelFromMesh(mesh.getMesh());
    this->_boundingBox = this->_baseBoudingBox = GetModelBoundingBox(*_model);
    this->_mesh = std::make_shared<RlMesh>(mesh);
    *this->_mesh = mesh;
}

raylib::model::RlModel::RlModel(const raylib::model::RlModel &model)
    : _position(model._position), _scale(model._scale), _color(model._color),
     _rotationAxis(model._rotationAxis), _rotationAngle(model._rotationAngle),
     _boundingBox(model._boundingBox), _baseBoudingBox(model._baseBoudingBox)
{
    this->_model = model._model;
    *this->_model = *model._model;
    this->_mesh = model._mesh;
}

raylib::model::RlModel &raylib::model::RlModel::operator=(const raylib::model::RlModel &model)
{
    if (this == &model)
        return *this;
    this->_model = model._model;
    *this->_model = *model._model;
    this->_mesh = model._mesh;
    this->_position = model._position;
    this->_scale = model._scale;
    this->_color = model._color;
    this->_rotationAxis = model._rotationAxis;
    this->_rotationAngle = model._rotationAngle;
    this->_boundingBox = model._boundingBox;
    this->_baseBoudingBox = model._baseBoudingBox;
    return *this;
}

raylib::model::RlModel::~RlModel()
{
    if (this->_model.use_count() != 1)
        return;
    if (this->_mesh)
        UnloadModelKeepMeshes(*this->_model);
    else
        UnloadModel(*this->_model);
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

const float &raylib::model::RlModel::getRotationAngle() const
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

BoundingBox raylib::model::RlModel::getDefaultBoundingBox() const
{
    return GetModelBoundingBox(*this->_model);
}

const Model &raylib::model::RlModel::getModel() const
{
    return *this->_model;
}

const std::shared_ptr<raylib::texture::RlTexture> &raylib::model::RlModel::getTexture() const
{
    return this->_texture;
}

void raylib::model::RlModel::setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture)
{
    setMaterialTexture(texture, 0, MATERIAL_MAP_DIFFUSE);
}

void raylib::model::RlModel::setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture, const int &materialIndex)
{
    setMaterialTexture(texture, materialIndex, MATERIAL_MAP_DIFFUSE);
}

void raylib::model::RlModel::setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture, const int &materialIndex, \
const MaterialMapIndex &type)
{
    if (this->_model->materialCount < materialIndex)
        throw ex::RlModelException("Material index is out of range");
    this->_texture = texture;
    SetMaterialTexture(&this->_model->materials[materialIndex], type, this->_texture->getTexture());
}

void raylib::model::RlModel::setMeshMaterial(const int &meshId, const int &materialId)
{
    SetModelMeshMaterial(&*this->_model, meshId, materialId);
}

//REMOVED not possible with raylib 4.0.0
/*void raylib::model::RlModel::setMaterials(const std::vector<RlMaterial> &materials)
{
    if (materials.size() != this->_model->materialCount)
        throw ex::RlModelException("Material count is not equal to the model's material count");
    for (int i = 0; i < this->_model->materialCount; i++)
        this->_model->materials[i] = materials[i].getMaterial();
}*/
