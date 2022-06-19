/*
** EPITECH PROJECT, 2022
** KinematicBody.cpp
** File description:
** KinematicBody.cpp
*/

#include "GameEngine/Nodes/3D/KinematicBody.hpp"
#include "GameEngine/SceneManager.hpp"

gameengine::node::_3D::KinematicBody::KinematicBody(const std::string &name, const raylib::model::RlModel &model)
    : StaticBody(name, model)
{

}

gameengine::node::_3D::KinematicBody::KinematicBody(const std::string &name, const raylib::model::RlModel &model, \
const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, model, texture)
{
}

bool gameengine::node::_3D::KinematicBody::moveAndCollide(const Vector3f &position)
{
    if (!_collisionEnable) {
        this->setPosition(position);
        return true;
    }

    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &pos = this->getPosition();
    BoundingBox temp = {
        {
            this->getBoundingBox().min.x + position.x - pos.x,
            this->getBoundingBox().min.y + position.y - pos.y,
            this->getBoundingBox().min.z + position.z - pos.z,
        },
        {
            this->getBoundingBox().max.x + position.x - pos.x,
            this->getBoundingBox().max.y + position.y - pos.y,
            this->getBoundingBox().max.z + position.z - pos.z,
        }
    };

   /* auto found = std::find_if(sceneManager->getAllNodes().begin(), sceneManager->getAllNodes().end(),
    [this, &temp](auto &node) {
        if (node == nullptr)
            return false;
        try {
            auto &staticBody = dynamic_cast<gameengine::node::_3D::StaticBody &>(*node);
            if (staticBody.getName() != this->getName() && staticBody.hasCollisionEnabled() &&
                raylib::helper::Collision3dHelper::checkCollisionBoxes(temp, staticBody.getBoundingBox())) {
                return true;
            }
        } catch (std::bad_cast &) {
            return false;
        }
        return false;
    });

    if (found != sceneManager->getAllNodes().end())
        return;*/

    if (this->_collisionEnable) {
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &staticBody = dynamic_cast<gameengine::node::_3D::StaticBody &>(*node);
                if (staticBody.getName() != this->getName() && staticBody.hasCollisionEnabled() &&
                    raylib::helper::Collision3dHelper::checkCollisionBoxes(temp, staticBody.getBoundingBox())) {
                    return false;
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }
    }

    this->setPosition(position);
    return true;
}

