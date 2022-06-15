/*
** EPITECH PROJECT, 2022
** gameScene.cpp
** File description:
** gameScene.cpp
*/

#include "game/GameScene.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"
#include "game/Player.hpp"
#include "global/GlobalInstance.hpp"

Indie::GameScene::GameScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
}

void Indie::GameScene::sceneLauncher()
{
    int index = 0;

    //border walls
    for (int i = 0;  i < 7; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }
    for (int i = 0;  i < 7; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }

    for (int i = 0;  i < 7; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }
    for (int i = 0;  i < 7; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }




    //in walls
    for (int i = 0;  i < 3; i ++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }
    for (int i = 0;  i < 3; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }
    for (int i = 0;  i < 3; i++, index++) {
        auto wall = std::make_shared<Indie::Wall>("wall" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
        this->addNode(wall);
    }


    index = 0;
    //destroyable walls
    for (int i = 1;  i < 3; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/blackston.png");
        this->addNode(wallDestroyable);
    }
    for (int i = 0;  i < 4; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/blackston.png");
        this->addNode(wallDestroyable);
    }
    for (int i = 1;  i < 3; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/blackston.png");
        this->addNode(wallDestroyable);
    }



    for (int i = 2;  i < 5; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/blackston.png");
        this->addNode(wallDestroyable);
    }

    for (int i = 0;  i < 7; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index), raylib::RlMeshBuilder::MeshCube, "./assets/blackston.png");
        this->addNode(wallDestroyable);
    }

    for (int i = 0;  i < 7; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index),raylib::RlMeshBuilder::MeshCube,"./assets/blackston.png");
        this->addNode(wallDestroyable);
    }

    for (int i = 2;  i < 5; i ++, index++) {
        auto wallDestroyable = std::make_shared<Indie::WallDestroyable>("wallDestroyable" + std::to_string(index),raylib::RlMeshBuilder::MeshCube,"./assets/blackston.png");
        this->addNode(wallDestroyable);
    }


    auto &globalInstance = Indie::GlobalInstance::getInstance();
    for (int i = 0; i < globalInstance->_numberPlayers; i++) {
        auto player = std::make_shared<Indie::Player>("player" + std::to_string(i), "./assets/player.iqm", "./assets/blue.png", i);
        this->addNode(player);
    }

}

void Indie::GameScene::readyScene()
{
    auto sceneManager = GameEngine::SceneManager::getInstance();


    int index = 0;

    //border walls
    for (int i = 0;  i < 7; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-4.5f, 0.5, -3.5f + i * 1.0f});
    }
    for (int i = 0;  i < 7; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({3.5f, 0.5, -3.5f + i * 1.0f});
    }

    for (int i = 0;  i < 7; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-3.5f + i * 1.0f, 0.5, -4.5f });
    }
    for (int i = 0;  i < 7; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-3.5f + i * 1.0f, 0.5, 3.5f });
    }




    //in walls
    for (int i = 0;  i < 3; i ++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-2.5f + i * 2.0f, 0.5, -2.5f});
    }
    for (int i = 0;  i < 3; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-2.5f + i * 2.0f, 0.5, -0.5f});
    }
    for (int i = 0;  i < 3; i++, index++) {
        auto &wall = dynamic_cast<Indie::Wall &>(*sceneManager->getNode("wall" + std::to_string(index)));
        wall.setPosition({-2.5f + i * 2.0f, 0.5, 1.5f});
    }


    index = 0;
    //destroyable walls
    for (int i = 1;  i < 3; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 2.0f, 0.5, -2.5f});
    }
    for (int i = 0;  i < 4; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 2.0f, 0.5, -0.5f});
    }
    for (int i = 1;  i < 3; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 2.0f, 0.5, 1.5f});
    }



    for (int i = 2;  i < 5; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 1.0f, 0.5, -3.5f});
    }

    for (int i = 0;  i < 7; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 1.0f, 0.5, -1.5f});
    }

    for (int i = 0;  i < 7; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 1.0f, 0.5, 0.5f});
    }

    for (int i = 2;  i < 5; i ++, index++) {
        auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*sceneManager->getNode("wallDestroyable" + std::to_string(index)));
        wallDestroyable.setPosition({-3.5f + i * 1.0f, 0.5, 2.5f});
    }

    auto &globalInstance = Indie::GlobalInstance::getInstance();
    if (globalInstance->_numberPlayers > 0) {
        auto &player = dynamic_cast<Indie::Player &>(*sceneManager->getNode("player"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({-3.5f, 0, -3.5f});
    }
    if (globalInstance->_numberPlayers > 1) {
        auto &player = dynamic_cast<Indie::Player &>(*sceneManager->getNode("player"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({3.5f, 0, 3.5f});
    }
    if (globalInstance->_numberPlayers > 2) {
        auto &player = dynamic_cast<Indie::Player &>(*sceneManager->getNode("player"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({-3.5f, 0, 3.5f});
    }
    if (globalInstance->_numberPlayers > 3) {
        auto &player = dynamic_cast<Indie::Player &>(*sceneManager->getNode("player"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({3.5f, 0, -3.5f});
    }
}


void Indie::GameScene::updateScene(float delta)
{
}

