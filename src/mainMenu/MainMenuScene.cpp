/*
** EPITECH PROJECT, 2022
** MainMenuScene.cpp
** File description:
** MainMenuScene.cpp
*/

#include "mainMenu/MainMenuScene.hpp"
#include "mainMenu/ButtonPlay.hpp"
#include "mainMenu/ButtonQuit.hpp"
#include "start/Image.hpp"

indie::MainMenuScene::MainMenuScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
    this->_indexMenu = 0;
}

void indie::MainMenuScene::sceneLauncher()
{
    auto background = std::make_shared<indie::Image>("background", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/logo_big.png"));
    this->addNode(background);

    auto buttonPlay = std::make_shared<indie::ButtonPlay>("buttonPlay", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_play_x05.png"));
    buttonPlay->setScale({0.5f, 0.5f});
    this->addNode(buttonPlay);

    auto buttonQuit = std::make_shared<indie::ButtonQuit>("buttonQuit", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_quit_x05.png"));
    buttonQuit->setScale({0.5f, 0.5f});
    this->addNode(buttonQuit);
}

void indie::MainMenuScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    this->_indexMenu = 0;
    raylib::helper::input::MouseHelper::setMousePosition(570, 250);

    auto &buttonPlay = dynamic_cast<indie::ButtonPlay &>(*sceneManager->getNode("buttonPlay"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuit &>(*sceneManager->getNode("buttonQuit"));

    auto window = raylib::window::RlWindow::getInstance();
    Rectangle playRect = buttonPlay.getBounds();
    Rectangle quitRect = buttonQuit.getBounds();

    buttonPlay.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2 + playRect.height * 4.0f});
    buttonQuit.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2 + quitRect.height * 5.5f});
}

void indie::MainMenuScene::updateScene(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonPlay = dynamic_cast<indie::ButtonPlay &>(*sceneManager->getNode("buttonPlay"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuit &>(*sceneManager->getNode("buttonQuit"));

    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
        if (this->_indexMenu == 0) {
            raylib::helper::input::MouseHelper::setMousePosition(570, 450);
            this->_indexMenu = 1;
        }
    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
        if (this->_indexMenu == 1) {
            raylib::helper::input::MouseHelper::setMousePosition(570, 250);
            this->_indexMenu = 0;
        }
    }

    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        if (this->_indexMenu == 0)
            buttonPlay.pressed();
        else if (this->_indexMenu == 1)
            buttonQuit.pressed();
    }

}
