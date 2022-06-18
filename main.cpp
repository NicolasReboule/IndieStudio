/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    auto window = raylib::window::RlWindow::getInstance();
    auto audioManager = gameengine::AudioManager::getInstance();
    auto sceneManager = gameengine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);
    window->setConfigFlags(FLAG_WINDOW_RESIZABLE);
    window->setCamera(raylib::builder::RlCameraBuilder().setPosition({0, 20, 0}).setCameraMode(CAMERA_FREE).build());
    raylib::helper::input::MouseHelper::setMouseCursor(MOUSE_CURSOR_CROSSHAIR);
    raylib::helper::input::KeyboardHelper::setExitKey(KEY_NULL);
    raylib::image::RlImage image = raylib::helper::ImageHelper::load("./assets/textures/icon.png");
    window->setIcon(image);

    sceneManager->addScene(std::make_shared<indie::StartScene>());
    sceneManager->addScene(std::make_shared<indie::MainMenuScene>());
    sceneManager->addScene(std::make_shared<indie::ChooseNumberPlayerScene>());
    sceneManager->addScene(std::make_shared<indie::GameScene>());
    sceneManager->addScene(std::make_shared<indie::WinningScene>());
    sceneManager->changeScene("mainMenu");

    while (window->isOpen())
        sceneManager->makeLoop(window->getCamera());
    return (0);
}

