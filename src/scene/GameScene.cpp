/*
** EPITECH PROJECT, 2022
** gameScene.cpp
** File description:
** gameScene.cpp
*/

#include "scene/GameScene.hpp"

indie::GameScene::GameScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource), _map3DLoader(map::Map3DLoader::getInstance()), _textureManager(gameengine::TextureManager::getInstance())
{
    this->_indexMenu = 0;
    this->_winTimer = 0;
}

void indie::GameScene::sceneLauncher()
{
    auto &window = raylib::window::RlWindow::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    this->_map = this->_map3DLoader->getMaps()[globalInstance->_indexMap];
    auto &mapSize = _map->getMapSize();

    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setPosition({0, std::max(20.0f, (float) std::max(mapSize.x, mapSize.y) * 0.725f) , 0}).setCameraMode(CAMERA_FREE).build();
    window->setCamera(camera);

    for (const auto &item: this->_map->getMapModels())
        this->addNode(item);

    for (int i = 0; i < globalInstance->_numberPlayers; i++) {
        std::string color;
        if (i == 0)
           color = "blue";
        else if (i == 1)
            color = "red";
        else if (i == 2)
            color = "green";
        else
            color  = "yellow";
        raylib::model::RlModel playerModel = raylib::model::RlModel("./assets/models/player.iqm");
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), playerModel, _textureManager->getTexture("./assets/textures/players/" + color + ".png"), i);
        this->addNode(player);
    }
    for (int i = globalInstance->_numberPlayers; i < 4; i++) {
        std::string color;
        if (i == 0)
            color = "blue";
        else if (i == 1)
            color = "red";
        else if (i == 2)
            color = "green";
        else
            color  = "yellow";
        raylib::model::RlModel playerModel = raylib::model::RlModel("./assets/models/player.iqm");
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), playerModel, _textureManager->getTexture("./assets/textures/players/" + color + ".png"), -1);
        this->addNode(player);
    }

    auto buttonResume = std::make_shared<indie::button::ButtonResume>("buttonResume", _textureManager->getTexture("./assets/textures/gui/button_resume_x05.png"));
    this->addNode(buttonResume);

    auto buttonRestart = std::make_shared<indie::button::ButtonRestart>("buttonRestart", _textureManager->getTexture("./assets/textures/gui/button_restart_x05.png"));
    this->addNode(buttonRestart);

    auto buttonMainMenu = std::make_shared<indie::button::ButtonMainMenu>("buttonMainMenu", _textureManager->getTexture("./assets/textures/gui/button_main_menu_x05.png"));
    this->addNode(buttonMainMenu);

    auto buttonQuit = std::make_shared<indie::button::ButtonQuit>("buttonQuit", _textureManager->getTexture("./assets/textures/gui/button_quit_x05.png"));
    this->addNode(buttonQuit);

    Vector2i size = {(int) mapSize.x, (int) mapSize.y};
    Vector3f position = {size.x % 2 == 0 ? -0.5f : 0, 0, size.y % 2 == 0 ? -0.5f : 0};
    auto grid = std::make_shared<gameengine::node::_3D::Grid3D>(size, position, 1.0f, RlColor::White, "grid");
    this->addNode(grid);
}

void indie::GameScene::initScene()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &window = raylib::window::RlWindow::getInstance();

    this->_indexMenu = 0;
    this->_winTimer = 3.0f;

    BoundingBox box = {{-0.2, 0, -0.2},{0.2,  2, 0.2}};
    Vector3f scale = {0.8, 0.8, 0.8};

    for (int i = 0; i < 4; i++) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player" + std::to_string(i)));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_map->getPlayerSpawns()[i];
        player.setPosition({pos.x, 0, pos.y});
    }
    globalInstance->_playersAlive = 4;


    auto &buttonResume = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonResume"));
    buttonResume.setHiding(true);
    buttonResume.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2.0f - buttonResume.getBounds().height});

    auto &buttonRestart = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRestart"));
    buttonRestart.setHiding(true);
    buttonRestart.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2.0f + buttonRestart.getBounds().height * 0.5f});

    auto &buttonMainMenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));
    buttonMainMenu.setHiding(true);
    buttonMainMenu.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2.0f + buttonMainMenu.getBounds().height * 2});

    auto &buttonQuit = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonQuit"));
    buttonQuit.setHiding(true);
    buttonQuit.centerButton({(float) window->getWidth() / 2.0f, (float) window->getHeight() / 2.0f + buttonQuit.getBounds().height * 3.5f});
}

void indie::GameScene::updateScene(const float &delta)
{
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    if (globalInstance->_playersAlive == 1) {

        this->_winTimer -= delta;

        auto &player0 = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
        if (player0.getState() == Player::ALIVE || player0.getState() == Player::GHOST) {
            this->displayWinner(player0.getName());
            return;
        }

        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
            if (player.getState() == Player::ALIVE || player.getState() == Player::GHOST) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {}

        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
            if (player.getState() == Player::ALIVE || player.getState() == Player::GHOST) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {}

        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player3"));
            if (player.getState() == Player::ALIVE || player.getState() == Player::GHOST) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {}

    } else if (globalInstance->_playersAlive <= 0) {
        this->_winTimer -= delta;
        this->displayWinner("SHHEEESSH");
    }

    if (sceneManager->isPaused()) {

        auto &buttonResume = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonResume"));
        auto &buttonRestart = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRestart"));
        auto &buttonMainMenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));
        auto &buttonQuit = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonQuit"));
        auto &resumePos = buttonResume.getPosition();
        auto &resumeOri = buttonResume.getOrigin();
        auto &restartPos = buttonRestart.getPosition();
        auto &restartOri = buttonRestart.getOrigin();
        auto &mainMenuPos = buttonMainMenu.getPosition();
        auto &mainMenuOri = buttonMainMenu.getOrigin();
        auto &quitPos = buttonQuit.getPosition();
        auto &quitOri = buttonQuit.getOrigin();

        static bool mouseMoved = false;
        if (!mouseMoved) {
            switch (this->_indexMenu) {
                case 0:
                    raylib::helper::input::MouseHelper::setMousePosition((int) resumePos.x, (int) (resumePos.y - resumeOri.y));
                    break;
                case 1:
                    raylib::helper::input::MouseHelper::setMousePosition((int) restartPos.x, (int) (restartPos.y - restartOri.y));
                    break;
                case 2:
                    raylib::helper::input::MouseHelper::setMousePosition((int) mainMenuPos.x, (int) (mainMenuPos.y - mainMenuOri.y));
                    break;
                case 3:
                    raylib::helper::input::MouseHelper::setMousePosition((int) quitPos.x, (int) (quitPos.y - quitOri.y));
                    break;
            }
            mouseMoved = true;
        }

        if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
            if (this->_indexMenu == 0) {
                raylib::helper::input::MouseHelper::setMousePosition((int) restartPos.x, (int) (restartPos.y - restartOri.y));
                this->_indexMenu = 1;
                mouseMoved = false;
            }
            else if (this->_indexMenu == 1) {
                raylib::helper::input::MouseHelper::setMousePosition((int) mainMenuPos.x, (int) (mainMenuPos.y - mainMenuOri.y));
                this->_indexMenu = 2;
                mouseMoved = false;
            }
            else if (this->_indexMenu == 2) {
                raylib::helper::input::MouseHelper::setMousePosition((int) quitPos.x, (int) (quitPos.y - quitOri.y));
                this->_indexMenu = 3;
                mouseMoved = false;
            }
        }
        if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
            if (this->_indexMenu == 1) {
                raylib::helper::input::MouseHelper::setMousePosition((int) resumePos.x, (int) (resumePos.y - resumeOri.y));
                this->_indexMenu = 0;
                mouseMoved = false;
            }
            else if (this->_indexMenu == 2) {
                raylib::helper::input::MouseHelper::setMousePosition((int) restartPos.x, (int) (restartPos.y - restartOri.y));
                this->_indexMenu = 1;
                mouseMoved = false;
            }
            else if (this->_indexMenu == 3) {
                raylib::helper::input::MouseHelper::setMousePosition((int) mainMenuPos.x, (int) (mainMenuPos.y - mainMenuOri.y));
                this->_indexMenu = 2;
                mouseMoved = false;
            }
        }
        if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
            switch (this->_indexMenu) {
                case 0:
                    buttonResume.pressed();
                    break;
                case 1:
                    buttonRestart.pressed();
                    break;
                case 2:
                    buttonMainMenu.pressed();
                    break;
                case 3:
                    buttonQuit.pressed();
                    break;
            }
        }
    }
}

void indie::GameScene::displayWinner(const std::string &name)
{
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    try {
        auto &WinnerText = dynamic_cast<gameengine::node::_2D::Label &>(*sceneManager->getNode("winnerText"));
        WinnerText.setText(name + "   WINNN !!!!");
    }
    catch (const std::bad_cast &e) {
        auto winnerText = std::make_shared<gameengine::node::_2D::Label>("winnerText");
        winnerText->setPosition({400, 0});
        winnerText->setColor(RlColor::Gold);
        winnerText->setScale({50, 50});
        winnerText->setText(name + "  WINNN !!!!");
        this->addNode(winnerText);
    }

    if (this->_winTimer <= 0) {
        globalInstance->_playerWinner = name;
        sceneManager->changeScene("winning");
    }
}


