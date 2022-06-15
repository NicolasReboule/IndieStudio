/*
** EPITECH PROJECT, 2022
** Bomb.cpp
** File description:
** Bomb.cpp
*/

#include "game/Bomb.hpp"
#include "game/Magma.hpp"

#include "game/Player.hpp"
#include "game/WallDestroyable.hpp"

Indie::Bomb::Bomb(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath) : StaticBody(name, type, texturepath)
{
    this->_timer = 1;

}

Indie::Bomb::Bomb(const std::string &name, const std::string &objPath) : StaticBody(name, objPath, "")
{
    this->_timer = 1;
}

void Indie::Bomb::ready()
{
    this->_collisionEnable = false;
}

void Indie::Bomb::update(float delta)
{
    this->_timer -= delta;

    if (this->_collisionEnable == false)
        this->enableCollision();

    if (this->_timer <= 0)
        this->handleHallDestroyableCollision();
}

void Indie::Bomb::handleHallDestroyableCollision()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    BoundingBox temp0 = this->getBoundingBox();
    BoundingBox temp1 = temp0;
    temp1.min.x += 1.0f;
    temp1.max.x += 1.0f;
    BoundingBox temp2 = temp0;
    temp2.min.x -= 1.0f;
    temp2.max.x -= 1.0f;
    BoundingBox temp3 = temp0;
    temp3.min.z += 1.0f;
    temp3.max.z += 1.0f;
    BoundingBox temp4 = temp0;
    temp4.min.z -= 1.0f;
    temp4.max.z -= 1.0f;


    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
            if (wallDestroyable.getIsCollsionEnable() && (
                raylib::Collision3dHelper::checkCollisionBoxes(temp1, wallDestroyable.getBoundingBox()) ||
                raylib::Collision3dHelper::checkCollisionBoxes(temp2, wallDestroyable.getBoundingBox()) ||
                raylib::Collision3dHelper::checkCollisionBoxes(temp3, wallDestroyable.getBoundingBox()) ||
                raylib::Collision3dHelper::checkCollisionBoxes(temp4, wallDestroyable.getBoundingBox())
                )) {
                sceneManager->deleteNode(node->getName());
            }
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }

    this->spawnMagma();

    sceneManager->deleteNode(this->getName());
}

void Indie::Bomb::enableCollision()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();


    bool temp = true;
    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &player = dynamic_cast<Indie::Player &>(*node);
            if (player.getIsCollsionEnable() &&
                raylib::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), player.getBoundingBox())) {
                temp = false;
                break;
            }
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }

    this->_collisionEnable = temp;

}

void Indie::Bomb::spawnMagma()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto random = raylib::Random();
    auto magma0 = std::make_shared<Indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    auto magma1 = std::make_shared<Indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    auto magma2 = std::make_shared<Indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    auto magma3 = std::make_shared<Indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    auto magma4 = std::make_shared<Indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");

    magma0->setPosition({this->_position.x, this->_position.y, this->_position.z});
    magma1->setPosition({this->_position.x + 1.0f, this->_position.y, this->_position.z});
    magma2->setPosition({this->_position.x - 1.0f, this->_position.y, this->_position.z});
    magma3->setPosition({this->_position.x, this->_position.y, this->_position.z + 1.0f});
    magma4->setPosition({this->_position.x, this->_position.y, this->_position.z - 1.0f});

    sceneManager->addNode(magma0);
    sceneManager->addNode(magma1);
    sceneManager->addNode(magma2);
    sceneManager->addNode(magma3);
    sceneManager->addNode(magma4);
}


