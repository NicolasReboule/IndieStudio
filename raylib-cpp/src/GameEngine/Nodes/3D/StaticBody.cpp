/*
** EPITECH PROJECT, 2022
** StaticBody.cpp
** File description:
** StaticBody.cpp
*/

#include "GameEngine/Nodes/3D/StaticBody.hpp"

gameengine::node::_3D::StaticBody::StaticBody(const std::string &name, const raylib::model::RlModel &model)
    : Node3D(name), _model(model)
{
    this->_collisionEnable = true;
}

gameengine::node::_3D::StaticBody::StaticBody(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : Node3D(name), _model(model)
{
    this->_collisionEnable = true;
    this->_model.setMaterialTexture(texture);
}

void gameengine::node::_3D::StaticBody::init()
{
}

void gameengine::node::_3D::StaticBody::update(const float &delta)
{
}

void gameengine::node::_3D::StaticBody::draw()
{
    raylib::helper::draw::DrawModelHelper::drawModel(this->_model);
}

const Vector3f &gameengine::node::_3D::StaticBody::getPosition() const
{
    return this->_model.getPosition();
}

float gameengine::node::_3D::StaticBody::getRotationDegrees() const
{
    return this->_model.getRotationAngle();
}

const Vector3f &gameengine::node::_3D::StaticBody::getScale() const
{
    return this->_model.getScale();
}

void gameengine::node::_3D::StaticBody::setPosition(const Vector3f &pos)
{
    this->_model.setPosition(pos);
}

void gameengine::node::_3D::StaticBody::setRotationDegrees(const float &degrees, const Vector3f &rotationAxis)
{
    this->_model.setRotationAxis(rotationAxis);
    this->_model.setRotationAngle(degrees);
}

void gameengine::node::_3D::StaticBody::setScale(const Vector3f &newScale)
{
    this->_model.setScale(newScale);
}

void gameengine::node::_3D::StaticBody::setColor(const raylib::RlColor &color)
{
    this->_model.setColor(color);
}

const RlColor &gameengine::node::_3D::StaticBody::getColor() const
{
    return this->_model.getColor();
}

raylib::model::RlModel *gameengine::node::_3D::StaticBody::operator->()
{
    return &this->_model;
}

const BoundingBox &gameengine::node::_3D::StaticBody::getBoundingBox() const
{
    return this->_model.getBoundingBox();
}

void gameengine::node::_3D::StaticBody::setBoundingBox(const BoundingBox &boundingBox)
{
    this->_model.setBoundingBox(boundingBox);
}

const bool &gameengine::node::_3D::StaticBody::hasCollisionEnabled() const
{
    return this->_collisionEnable;
}

void gameengine::node::_3D::StaticBody::setCollisionEnable(bool value)
{
    this->_collisionEnable = value;
}

raylib::model::RlModel &gameengine::node::_3D::StaticBody::getModel()
{
    return this->_model;
}

const raylib::model::RlModel &gameengine::node::_3D::StaticBody::getModel() const
{
    return this->_model;
}
