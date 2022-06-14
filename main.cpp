/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"
#include "raylib/Camera/CameraHelper.hpp"

int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();
    auto audioManager = GameEngine::AudioManager::getInstance();
    auto sceneManager = GameEngine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);

    raylib::RlCamera camera;
    raylib::CameraHelper::setCameraMode(camera, CAMERA_FREE);

    auto startScene = std::make_shared<Indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<Indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto gameMenuScene = std::make_shared<Indie::GameScene>();
    sceneManager->addScene(gameMenuScene);

    sceneManager->changeScene("start");

    while (window->isOpen())
        sceneManager->makeLoop(camera);
    return (0);
}
