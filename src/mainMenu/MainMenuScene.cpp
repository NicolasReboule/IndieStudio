/*
** EPITECH PROJECT, 2022
** MainMenuScene.cpp
** File description:
** MainMenuScene.cpp
*/

#include "mainMenu/MainMenuScene.hpp"
#include "mainMenu/ButtonPlay.hpp"
#include "mainMenu/ButtonQuit.hpp"

indie::MainMenuScene::MainMenuScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
    this->_indexMenu = 0;
}

void indie::MainMenuScene::sceneLauncher()
{
    auto buttonPlay = std::make_shared<indie::ButtonPlay>("buttonPlay", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_play.png"));
    this->addNode(buttonPlay);

    auto buttonQuit = std::make_shared<indie::ButtonQuit>("buttonQuit", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_quit.png"));
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

    buttonPlay.setPosition({((float) window->getWidth() - playRect.width) / 2, ((float) window->getHeight() - playRect.height) / 2 - playRect.height / 2 * 1.3f});
    buttonQuit.setPosition({((float) window->getWidth() - quitRect.width)/ 2, ((float) window->getHeight() - quitRect.height) / 2 + quitRect.height / 2 * 1.3f});
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
