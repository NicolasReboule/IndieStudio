/*
** EPITECH PROJECT, 2022
** KinematicBody.cpp
** File description:
** KinematicBody.cpp
*/


#include "GameEngine/Nodes/KinematicBody.hpp"
#include "GameEngine/SceneManager.hpp"

GameEngine::KinematicBody::KinematicBody(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}

GameEngine::KinematicBody::KinematicBody(const std::string &name, const std::string &modelPath, const std::string &texturePath) : StaticBody(name, modelPath, texturePath)
{
}

void GameEngine::KinematicBody::moveAndCollide(Vector3f position)
{
    auto sceneManager = GameEngine::SceneManager::getInstance();

    BoundingBox temp = {{
        this->getBoundingBox().min.x + position.x - this->_position.x,
        this->getBoundingBox().min.y + position.y - this->_position.y,
        this->getBoundingBox().min.z + position.z - this->_position.z,
        }, {
        this->getBoundingBox().max.x + position.x - this->_position.x,
        this->getBoundingBox().max.y + position.y - this->_position.y,
        this->getBoundingBox().max.z + position.z - this->_position.z,
    }};

    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &wall = dynamic_cast<GameEngine::StaticBody &>(*node);
            if (wall.getName() != this->getName() && raylib::Collision3dHelper::checkCollisionBoxes(temp, wall.getBoundingBox())) {
                std::cout << "collide !!!!!! with :" << wall.getName() << std::endl;
                std::cout << position.x << "," << position.y << std::endl;
                std::cout << wall.getPosition().x << "," << wall.getPosition().y << std::endl;
                //std::cout << "(" << wall.getBoundingBox().min.x << "," << wall.getBoundingBox().min.y << "," << wall.getBoundingBox().min.x << ")" << std::endl;
                //std::cout << "(" << wall.getBoundingBox().max.x << "," << wall.getBoundingBox().max.y << "," << wall.getBoundingBox().max.x << ")" << std::endl;

                return;
            }
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }

    this->setPosition(position);
}

