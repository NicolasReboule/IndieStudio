/*
** EPITECH PROJECT, 2022
** RlModelBuilder.cpp
** File description:
** RlModelBuilder.cpp
*/

#include "raylib/3DObject/RlModelBuilder.hpp"

std::vector<raylib::builder::RlModelBuilder::ValidType> raylib::builder::RlModelBuilder::_validTypes = {
    RLMODEL_PATH,
    RLMODEL_PATH_AND_TEXTURE,
    RLMODEL_PATH_AND_SHARED_TEXTURE,
    RLMODEL_MESH,
    RLMODEL_MESH_AND_SHARED_TEXTURE
};

raylib::builder::RlModelBuilder::RlModelBuilder() : _mesh(), _modelPath(), _texturePath(),
_position(0, 0, 0), _scale(1, 1, 1), _rotationAxis(0, 0, 0), _color(RlColor::White), _boundingBox()
{
    this->_flags = 0;
    this->_rotationAngle = 0;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setMesh(const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    this->_mesh = mesh;
    this->_flags |= MESH;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setMesh(const raylib::model::RlMesh &mesh)
{
    this->_mesh = std::make_shared<raylib::model::RlMesh>(mesh);
    this->_flags |= MESH;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setModelPath(const std::string &modelPath)
{
    this->_modelPath = modelPath;
    this->_flags |= MODEL_PATH;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setTexturePath(const std::string &texturePath)
{
    this->_texturePath = texturePath;
    this->_flags |= TEXTURE_PATH;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setPosition(const Vector3f &position)
{
    this->_position = position;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setScale(const Vector3f &scale)
{
    this->_scale = scale;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setColor(const RlColor &color)
{
    this->_color = color;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setRotationAngle(const float &rotationAngle)
{
    this->_rotationAngle = rotationAngle;
    return *this;
}

raylib::builder::RlModelBuilder raylib::builder::RlModelBuilder::setRotationAxis(const Vector3f &rotationAxis)
{
    this->_rotationAxis = rotationAxis;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setBoundingBox(const BoundingBox &boundingBox)
{
    this->_boundingBox = boundingBox;
    this->_boundingBoxSet = true;
    return *this;
}

raylib::builder::RlModelBuilder &raylib::builder::RlModelBuilder::setTexture(const std::shared_ptr<texture::RlTexture> &texture)
{
    this->_texture = texture;
    this->_flags |= SHARED_TEXTURE;
    return *this;
}

raylib::model::RlModel raylib::builder::RlModelBuilder::build()
{
    bool isValid = false;
    for (auto &type : _validTypes) {
        isValid = this->_flags == type;
        if (isValid)
            break;
    }
    if (!isValid)
        throw raylib::ex::BuilderException("Invalid parameter for model builder");
    std::shared_ptr<raylib::model::RlModel> model;
    switch (this->_flags) {
        case RLMODEL_PATH:
            model = std::make_shared<model::RlModel>(this->_modelPath);
            break;
        case RLMODEL_PATH_AND_TEXTURE:
            model = std::make_shared<model::RlModel>(this->_modelPath, this->_texturePath);
            break;
        case RLMODEL_PATH_AND_SHARED_TEXTURE:
            model = std::make_shared<model::RlModel>(this->_modelPath);
            model->setMaterialTexture(this->_texture);
            break;
        case RLMODEL_MESH:
            model = std::make_shared<model::RlModel>(this->_mesh);
            break;
        case RLMODEL_MESH_AND_SHARED_TEXTURE:
            model = std::make_shared<model::RlModel>(this->_modelPath);
            model->setMaterialTexture(this->_texture);
            break;
    }
    model->setPosition(this->_position);
    model->setScale(this->_scale);
    model->setColor(this->_color);
    model->setRotationAxis(this->_rotationAxis);
    model->setRotationAngle(this->_rotationAngle);
    if (this->_boundingBoxSet)
        model->setBoundingBox(this->_boundingBox);
    return *model;
}

