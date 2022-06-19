/*
** EPITECH PROJECT, 2022
** ChooseNumberPlayerScene.cpp
** File description:
** ChooseNumberPlayerScene.cpp
*/

#include "scene/ChooseNumberPlayerScene.hpp"

indie::ChooseNumberPlayerScene::ChooseNumberPlayerScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource), _map3DLoader(indie::map::Map3DLoader::getInstance())
{
    this->_indexMenu = 0;
    this->_savedIndexMap = -1;
}

void indie::ChooseNumberPlayerScene::sceneLauncher()
{
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &textureManager = gameengine::TextureManager::getInstance();

    auto button1p = std::make_shared<indie::button::IndieButton>("button1p",
    textureManager->getTexture("./assets/textures/gui/button_1p.png"), [globalInstance, sceneManager](auto &name) {
            globalInstance->_numberPlayers = 1;
            sceneManager->changeScene("game");
        });
    this->addNode(button1p);

    auto button2p = std::make_shared<indie::button::IndieButton>("button2p",
        textureManager->getTexture("./assets/textures/gui/button_2p.png"), [globalInstance, sceneManager](auto &name) {
            globalInstance->_numberPlayers = 2;
            sceneManager->changeScene("game");
        });
    this->addNode(button2p);

    auto button3p = std::make_shared<indie::button::IndieButton>("button3p",
        textureManager->getTexture("./assets/textures/gui/button_3p.png"), [globalInstance, sceneManager](auto &name) {
        globalInstance->_numberPlayers = 3;
        sceneManager->changeScene("game");
    });
    this->addNode(button3p);

    auto button4p = std::make_shared<indie::button::IndieButton>("button4p",
        textureManager->getTexture("./assets/textures/gui/button_4p.png"), [globalInstance, sceneManager](auto &name) {
        globalInstance->_numberPlayers = 4;
        sceneManager->changeScene("game");
    });
    this->addNode(button4p);

    auto buttonLeft = std::make_shared<indie::button::IndieButton>("buttonLeft",
        textureManager->getTexture("./assets/textures/gui/button_left.png"), [globalInstance, sceneManager](auto &name) {
        int index = globalInstance->_indexMap;
        if (index > 0)
            globalInstance->_indexMap = index - 1;
    });
    this->addNode(buttonLeft);

    auto buttonRight = std::make_shared<indie::button::IndieButton>("buttonRight",
        textureManager->getTexture("./assets/textures/gui/button_right.png"), [this, globalInstance, sceneManager](auto &name) {
            int index = globalInstance->_indexMap;
            if (index < this->_map3DLoader->getMaps().size() - 1)
                globalInstance->_indexMap = index + 1;
    });
    this->addNode(buttonRight);

    auto buttonMainMenu = std::make_shared<indie::button::ButtonMainMenu>("buttonMainMenu", textureManager->getTexture("./assets/textures/gui/button_main_menu_x05.png"));
    this->addNode(buttonMainMenu);
}

void indie::ChooseNumberPlayerScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    globalInstance->_indexMap = 0;
    this->_savedIndexMap = -1;

    this->_indexMenu = 0;
    raylib::helper::input::MouseHelper::setMousePosition(100, 550);

    auto &button1p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button4p"));

    auto &buttonmainMenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));

    auto &buttonLeft = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonLeft"));
    auto &buttonRight = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRight"));

    button1p.setPosition({000, 500});
    button2p.setPosition({320, 500});
    button3p.setPosition({640, 500});
    button4p.setPosition({960, 500});

    buttonmainMenu.setPosition({10, 10});

    buttonLeft.setPosition({50, 200});
    buttonRight.setPosition({1150, 200});
}

void indie::ChooseNumberPlayerScene::updateScene(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &window = raylib::window::RlWindow::getInstance();

    if (this->_savedIndexMap != globalInstance->_indexMap) {
        auto &map = this->_map3DLoader->getMaps()[globalInstance->_indexMap];
        auto &mapSize = map->getMapSize();
        if (this->_savedIndexMap != -1) {
            auto &oldMap = this->_map3DLoader->getMaps()[this->_savedIndexMap];
            this->deleteNodeIncludes(oldMap->getMapPath());
        }
        for (const auto &item: map->getMapModels())
            this->addNode(item);
        Vector2i size = {(int) mapSize.x + 2, (int) mapSize.y + 2};
        Vector3f position = {size.x % 2 == 0 ? -0.5f : 0, 0, size.y % 2 == 0 ? -0.5f : 0};
        this->addNode(std::make_shared<gameengine::node::_3D::Grid3D>(size, position, 1.0f, RlColor::White, map->getMapPath() + "-grid"));
        raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setPosition({-20, 20, -20}).setCameraMode(CAMERA_ORBITAL).build();
        window->setCamera(camera);
        this->_savedIndexMap = globalInstance->_indexMap;
    }

    auto &button1p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("button4p"));

    auto &buttonmainMenu = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonMainMenu"));

    auto &buttonLeft = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonLeft"));
    auto &buttonRight = dynamic_cast<indie::button::IndieButton &>(*sceneManager->getNode("buttonRight"));


    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
        if (this->_indexMenu == 7) {
            raylib::helper::input::MouseHelper::setMousePosition(50, 200);
            this->_indexMenu = 5;
        }
        else if (this->_indexMenu == 5) {
            raylib::helper::input::MouseHelper::setMousePosition(100, 500);
            this->_indexMenu = 0;
        }
        else if (this->_indexMenu == 6) {
            raylib::helper::input::MouseHelper::setMousePosition(1060, 500);
            this->_indexMenu = 3;
        }

    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
        if (this->_indexMenu == 0 || this->_indexMenu == 1) {
            raylib::helper::input::MouseHelper::setMousePosition(50, 200);
            this->_indexMenu = 5;
        }
        else if (this->_indexMenu == 2 || this->_indexMenu == 3) {
            raylib::helper::input::MouseHelper::setMousePosition(1150, 200);
            this->_indexMenu = 6;
        }
        else if (this->_indexMenu == 5 || this->_indexMenu == 6) {
            raylib::helper::input::MouseHelper::setMousePosition(10, 10);
            this->_indexMenu = 7;
        }
    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_LEFT)) {
        if (this->_indexMenu == 1) {
            raylib::helper::input::MouseHelper::setMousePosition(100, 500);
            this->_indexMenu = 0;
        }
        else if (this->_indexMenu == 2) {
            raylib::helper::input::MouseHelper::setMousePosition(421, 500);
            this->_indexMenu = 1;
        }
        else if (this->_indexMenu == 3) {
            raylib::helper::input::MouseHelper::setMousePosition(741, 500);
            this->_indexMenu = 2;
        }
        else if (this->_indexMenu == 6) {
            raylib::helper::input::MouseHelper::setMousePosition(50, 200);
            this->_indexMenu = 5;
        }
    }
    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) {
        if (this->_indexMenu == 0) {
            raylib::helper::input::MouseHelper::setMousePosition(420, 500);
            this->_indexMenu = 1;
        }
        else if (this->_indexMenu == 1) {
            raylib::helper::input::MouseHelper::setMousePosition(721, 500);
            this->_indexMenu = 2;
        }
        else if (this->_indexMenu == 2) {
            raylib::helper::input::MouseHelper::setMousePosition(1061, 500);
            this->_indexMenu = 3;
        }
        else if (this->_indexMenu == 5) {
            raylib::helper::input::MouseHelper::setMousePosition(1150, 200);
            this->_indexMenu = 6;
        }
    }

    if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        switch (this->_indexMenu) {
            case 0:
                button1p.pressed();
                break;
            case 1:
                button2p.pressed();
                break;
            case 2:
                button3p.pressed();
                break;
            case 3:
                button4p.pressed();
                break;
            case 5:
                buttonLeft.pressed();
                break;
            case 6:
                buttonRight.pressed();
                break;
            case 7:
                buttonmainMenu.pressed();
                break;
        }
    }
}
