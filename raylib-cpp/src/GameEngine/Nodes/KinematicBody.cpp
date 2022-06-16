/*
** EPITECH PROJECT, 2022
** KinematicBody.cpp
** File description:
** KinematicBody.cpp
*/


#include "GameEngine/Nodes/KinematicBody.hpp"
#include "GameEngine/SceneManager.hpp"

gameengine::KinematicBody::KinematicBody(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}

gameengine::KinematicBody::KinematicBody(const std::string &name, const std::string &modelPath, const std::string &texturePath) : StaticBody(name, modelPath, texturePath)
{
}

void gameengine::KinematicBody::moveAndCollide(Vector3f position)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    BoundingBox temp = {{
        this->getBoundingBox().min.x + position.x - this->_position.x,
        this->getBoundingBox().min.y + position.y - this->_position.y,
        this->getBoundingBox().min.z + position.z - this->_position.z,
        }, {
        this->getBoundingBox().max.x + position.x - this->_position.x,
        this->getBoundingBox().max.y + position.y - this->_position.y,
        this->getBoundingBox().max.z + position.z - this->_position.z,
    }};

    if (this->_collisionEnable) {
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &staticBody = dynamic_cast<gameengine::StaticBody &>(*node);
                if (staticBody.getName() != this->getName() && staticBody.getIsCollsionEnable() &&
                    raylib::Collision3dHelper::checkCollisionBoxes(temp, staticBody.getBoundingBox())) {
                   /* std::cout << this->getName() << "  : collide !!!!!! with : " << staticBody.getName()
                              << " ,collision enable : " << staticBody.getIsCollsionEnable() << std::endl;*/


                    //std::cout << position.x << "," << position.y << std::endl;
                    //std::cout << staticBody.getPosition().x << "," << staticBody.getPosition().y << std::endl;
                    //std::cout << "(" << staticBody.getBoundingBox().min.x << "," << staticBody.getBoundingBox().min.y << "," << staticBody.getBoundingBox().min.x << ")" << std::endl;
                    //std::cout << "(" << staticBody.getBoundingBox().max.x << "," << staticBody.getBoundingBox().max.y << "," << staticBody.getBoundingBox().max.x << ")" << std::endl;
                    return;
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }
    }

    this->setPosition(position);
}

