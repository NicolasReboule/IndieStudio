/*
** EPITECH PROJECT, 2022
** gameScene.cpp
** File description:
** gameScene.cpp
*/

#include "game/GameScene.hpp"
#include "game/Wall.hpp"
#include "game/Player.hpp"

Indie::GameScene::GameScene(std::string name, std::string sceneSource) : Scene(name, sceneSource)
{
}

void Indie::GameScene::sceneLauncher()
{
    int index = 0;
    for (int i = 0;  i < 10; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/Brick.png");
        wall->setPosition({-4.5f + i * 1.0f, 0.5, -5});
        this->addNode(wall);
    }
    for (int i = 0;  i < 10; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/Brick.png");
        wall->setPosition({-4.5f, 0.5, -4.5f + i * 1.0f});
        this->addNode(wall);
    }
    for (int i = 0;  i < 10; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/Brick.png");
        wall->setPosition({-4.5f + i * 1.0f, 0.5, 4.5f});
        this->addNode(wall);
    }
    for (int i = 0;  i < 10; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/Brick.png");
        wall->setPosition({4.5f, 0.5, 4.5f - i * 1.0f});
        this->addNode(wall);
    }

    auto player = std::make_shared<Indie::PLayer>("player", raylib::RlMeshBuilder::MeshCube, "./assets/Brick.png");
    player->setPosition({0, 0.5, 0});
    this->addNode(player);
}


void Indie::GameScene::updateScene(float delta)
{
    auto sceneManager = GameEngine::SceneManager::getInstance();
    auto &wall0 = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall0"));

    wall0->getTexture();
}
