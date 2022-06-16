/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    auto audioManager = gameengine::AudioManager::getInstance();
    auto sceneManager = gameengine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);
    window->setCamera(raylib::builder::RlCameraBuilder().setPosition({0, 20, 0}).setCameraMode(CAMERA_FREE).build());

    auto startScene = std::make_shared<indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto chooseNumberPlayerScene = std::make_shared<indie::ChooseNumberPlayerScene>();
    sceneManager->addScene(chooseNumberPlayerScene);

    auto gameScene = std::make_shared<indie::GameScene>();
    sceneManager->addScene(gameScene);

    auto winningScene = std::make_shared<indie::WinningScene>();
    sceneManager->addScene(winningScene);

    sceneManager->changeScene("chooseNumberPlayer");

    while (window->isOpen())
        sceneManager->makeLoop(window->getCamera());
    return (0);
}


