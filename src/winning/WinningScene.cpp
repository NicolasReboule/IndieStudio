/*
** EPITECH PROJECT, 2022
** WinningScene.cpp
** File description:
** WinningScene.cpp
*/


#include "winning/WinningScene.hpp"
#include "global/GlobalInstance.hpp"
#include "game/Player.hpp"

indie::WinningScene::WinningScene(std::string name, std::string sceneSource) : Scene(name, sceneSource)
{
}

void indie::WinningScene::updateScene(float delta)
{
}

void indie::WinningScene::sceneLauncher()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &window = raylib::window::RlWindow::getInstance();

    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setCameraMode(CAMERA_FREE).setPosition({0, 0, 0}).setTarget({0, 0, 0}).setLookingPoint({0, 5, 0}).build();
    window->setCamera(camera);

  /*  if (globalInstance->_playerWinner == "player0") {
        auto player = std::make_shared<indie::Player>("player0", "./assets/player.iqm", "./assets/blue.png", 1);
        this->addNode(player);
    } else if (globalInstance->_playerWinner == "player1") {
        auto player = std::make_shared<indie::Player>("player1", "./assets/player.iqm", "./assets/blue.png", 1);
        this->addNode(player);
    }*/
}

void indie::WinningScene::readyScene()
{
}
