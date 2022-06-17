/*
** EPITECH PROJECT, 2022
** Bomb.cpp
** File description:
** Bomb.cpp
*/

#include "game/Bomb.hpp"
#include "game/Magma.hpp"
#include "game/Wall.hpp"
#include "game/Player.hpp"
#include "game/WallDestroyable.hpp"

indie::Bomb::Bomb(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturepath) : StaticBody(name, type, texturepath)
{
    this->_timer = 1;
}

indie::Bomb::Bomb(const std::string &name, const std::string &objPath, int range, const std::string &playerOwner) : StaticBody(name, objPath, "")
{
    this->_range = range;
    this->_timer = 1;
    this->_playerOwner = playerOwner;
}

void indie::Bomb::ready()
{
    this->_collisionEnable = false;
}

void indie::Bomb::update(float delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    this->_timer -= delta;

    if (!this->_collisionEnable)
        this->enableCollision();

    if (this->_timer <= 0) {
        this->spawnMagma();
        sceneManager->deleteNode(this->getName());
    }
}

void indie::Bomb::enableCollision()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();


    bool temp = true;
    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &player = dynamic_cast<indie::Player &>(*node);
            if (player.getIsCollsionEnable() &&
                raylib::helper::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), player.getBoundingBox())) {
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

void indie::Bomb::spawnMagma()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto random = raylib::Random();

    auto magma0 = std::make_shared<indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::builder::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    magma0->setPosition({this->_position.x, this->_position.y, this->_position.z});
    sceneManager->addNode(magma0);

    Vector3f position = {this->_position.x + 1, this->_position.y, this->_position.z};
    Vector3f addI = {1, 0, 0};
    this->addMagma(position, addI);
    position = {this->_position.x - 1, this->_position.y, this->_position.z};
    addI = {-1, 0, 0};
    this->addMagma(position, addI);
    position = {this->_position.x, this->_position.y, this->_position.z + 1};
    addI = {0, 0, 1};
    this->addMagma(position, addI);
    position = {this->_position.x, this->_position.y, this->_position.z - 1};
    addI = {0, 0, -1};
    this->addMagma(position, addI);
}

void indie::Bomb::addMagma(Vector3f position, Vector3f addI)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto random = raylib::Random();

    for (int i = 0; i < this->_range; i++) {
        bool loop = true;
        Vector3f pos = {position.x + addI.x * (float)i, position.y + addI.y * (float)i, position.z + addI.z * (float)i};
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wall = dynamic_cast<indie::Wall &>(*node);
                std::cout << wall->getPosition() << ":::" << this->_position << std::endl;
                if (wall.getPosition() == pos) {
                    loop = false;
                    break;
                }
            }
            catch (const std::bad_cast &e) {
                try {
                    auto &wallDestroyable = dynamic_cast<indie::WallDestroyable &>(*node);
                    if (wallDestroyable.getPosition() == pos) {
                        wallDestroyable.spawnBonus();
                        sceneManager->deleteNode(node->getName());
                        auto magma = std::make_shared<indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::builder::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
                        magma->setPosition(pos);
                        sceneManager->addNode(magma);
                        return;
                    }
                }
                catch (const std::bad_cast &e) {
                    continue;
                }
            }
        }
        if (loop) {
            auto magma = std::make_shared<indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::builder::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
            magma->setPosition(pos);
            sceneManager->addNode(magma);
        } else
            break;
    }
}
