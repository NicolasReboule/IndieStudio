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
    auto audioManager = GameEngine::AudioManager::getInstance();
    auto sceneManager = GameEngine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 120);

    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();

    auto startScene = std::make_shared<Indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<Indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto chooseNumberPlayerScene = std::make_shared<Indie::ChooseNumberPlayerScene>();
    sceneManager->addScene(chooseNumberPlayerScene);

    auto gameMenuScene = std::make_shared<Indie::GameScene>();
    sceneManager->addScene(gameMenuScene);

    sceneManager->changeScene("mainMenu");

    while (window->isOpen())
        sceneManager->makeLoop(camera);
    return (0);
}
