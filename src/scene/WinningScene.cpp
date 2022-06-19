/*
** EPITECH PROJECT, 2022
** WinningScene.cpp
** File description:
** WinningScene.cpp
*/

#include "scene/WinningScene.hpp"

indie::WinningScene::WinningScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
    this->_indexMenu = 0;
}

void indie::WinningScene::sceneLauncher()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &window = raylib::window::RlWindow::getInstance();
    auto &textureManager = gameengine::TextureManager::getInstance();

    std::cout << "winner: " << globalInstance->_playerWinner << std::endl;

    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setCameraMode(CAMERA_FREE).setPosition({-10, 5, 0}).setTarget({0, -0.5, 0}).setLookingPoint({0, 5, 0}).build();
    window->setCamera(camera);

    std::cout << "winner: " << globalInstance->_playerWinner << std::endl;

    //TODO: replace this with manager
    auto blueTexture = textureManager->getTexture("./assets/textures/players/blue.png");
    auto redTexture = textureManager->getTexture("./assets/textures/players/red.png");
    auto greenTexture = textureManager->getTexture("./assets/textures/players/green.png");
    auto yellowTexture = textureManager->getTexture("./assets/textures/players/yellow.png");

    if (globalInstance->_playerWinner == "player0") {
        auto player = std::make_shared<indie::Player>("player0", raylib::model::RlModel("./assets/models/player.iqm"), blueTexture, 0);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
    } else if (globalInstance->_playerWinner == "player1") {
        auto player = std::make_shared<indie::Player>("player1", raylib::model::RlModel("./assets/models/player.iqm"), redTexture, 1);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
    } else if (globalInstance->_playerWinner == "player2") {
        auto player = std::make_shared<indie::Player>("player2", raylib::model::RlModel("./assets/models/player.iqm"), greenTexture, 2);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
    } else if (globalInstance->_playerWinner == "player3") {
        auto player = std::make_shared<indie::Player>("player3", raylib::model::RlModel("./assets/models/player.iqm"), yellowTexture, 3);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
    } else {
        auto player0 = std::make_shared<indie::Player>("player0", raylib::model::RlModel("./assets/models/player.iqm"), blueTexture, 0);
        player0->setState(indie::Player::State::LOOSER);
        player0->setPosition({0, 0, -2});
        this->addNode(player0);
        auto player1 = std::make_shared<indie::Player>("player1", raylib::model::RlModel("./assets/models/player.iqm"), redTexture, 1);
        player1->setState(indie::Player::State::LOOSER);
        player1->setPosition({0, 0, -1});
        this->addNode(player1);
        auto player2 = std::make_shared<indie::Player>("player2", raylib::model::RlModel("./assets/models/player.iqm"), greenTexture, 2);
        player2->setState(indie::Player::State::LOOSER);
        player2->setPosition({0, 0, 1});
        this->addNode(player2);
        auto player3 = std::make_shared<indie::Player>("player3", raylib::model::RlModel("./assets/models/player.iqm"), yellowTexture, 3);
        player3->setState(indie::Player::State::LOOSER);
        player3->setPosition({0, 0, 2});
        this->addNode(player3);
    }

    auto buttonRestart = std::make_shared<indie::button::ButtonRestart>("buttonRestart",textureManager->getTexture("./assets/textures/gui/button_restart_x05.png"));
    buttonRestart->centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2 + buttonRestart->getBounds().height * 2});
    this->addNode(buttonRestart);

    auto buttonMainMenu = std::make_shared<indie::button::ButtonMainMenu>("buttonMainMenu",textureManager->getTexture("./assets/textures/gui/button_main_menu_x05.png"));
    buttonMainMenu->centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2 + buttonMainMenu->getBounds().height * 3.5f});
    this->addNode(buttonMainMenu);
}

void indie::WinningScene::initScene()
{
    this->_indexMenu = 0;
    raylib::helper::input::MouseHelper::setMousePosition(550, 425);
}

void indie::WinningScene::updateScene(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonMainmenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));
    auto &buttonRestart = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRestart"));

    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
        if (this->_indexMenu == 0) {
            raylib::helper::input::MouseHelper::setMousePosition(550, 525);
            this->_indexMenu = 1;
        }
    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
        if (this->_indexMenu == 1) {
            raylib::helper::input::MouseHelper::setMousePosition(550, 425);
            this->_indexMenu = 0;
        }
    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        switch (this->_indexMenu) {
            case 0:
                buttonRestart.pressed();
                break;
            case 1:
                buttonMainmenu.pressed();
                break;
        }
    }
}
