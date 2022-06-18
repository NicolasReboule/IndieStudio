/*
** EPITECH PROJECT, 2022
** ChooseNumberPlayerScene.cpp
** File description:
** ChooseNumberPlayerScene.cpp
*/

#include "chooseNumberPlayer/ChooseNumberPlayerScene.hpp"
#include "chooseNumberPlayer/Button1p.hpp"
#include "chooseNumberPlayer/Button2p.hpp"
#include "chooseNumberPlayer/Button3p.hpp"
#include "chooseNumberPlayer/Button4p.hpp"
#include "chooseNumberPlayer/ButtonLeft.hpp"
#include "chooseNumberPlayer/ButtonRight.hpp"

#include "game/ButtonMainMenu.hpp"
#include "global/GlobalInstance.hpp"
#include "start/Logo.hpp"

indie::ChooseNumberPlayerScene::ChooseNumberPlayerScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
    this->_indexMenu = 0;
}

void indie::ChooseNumberPlayerScene::sceneLauncher()
{
    auto button1p = std::make_shared<indie::Button1p>("button1p", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_1p.png"));
    this->addNode(button1p);

    auto button2p = std::make_shared<indie::Button2p>("button2p", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_2p.png"));
    this->addNode(button2p);

    auto button3p = std::make_shared<indie::Button3p>("button3p", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_3p.png"));
    this->addNode(button3p);

    auto button4p = std::make_shared<indie::Button4p>("button4p", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_4p.png"));
    this->addNode(button4p);

    auto buttonLeft = std::make_shared<indie::ButtonLeft>("buttonLeft", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_left.png"));
    this->addNode(buttonLeft);

    auto buttonRight = std::make_shared<indie::ButtonRight>("buttonRight", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_right.png"));
    this->addNode(buttonRight);

    auto buttonMainMenu = std::make_shared<indie::ButtonMainMenu>("buttonMainMenu", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_main_menu_x05.png"));
    this->addNode(buttonMainMenu);

    auto mapDefault = std::make_shared<indie::Image>("mapDefault", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/map/default.png"));
    this->addNode(mapDefault);

    auto mapEmpty = std::make_shared<indie::Image>("mapEmpty", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/map/empty.png"));
    this->addNode(mapEmpty);

    auto mapCool = std::make_shared<indie::Image>("mapCool", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/map/cool.png"));
    this->addNode(mapCool);
}

void indie::ChooseNumberPlayerScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();

    globalInstnace->_indexMap = 0;

    this->_indexMenu = 0;
    raylib::helper::input::MouseHelper::setMousePosition(0, 500);

    auto &button1p = dynamic_cast<indie::Button1p &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::Button2p &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::Button3p &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::Button4p &>(*sceneManager->getNode("button4p"));

    auto &buttonmainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));

    auto &buttonLeft = dynamic_cast<indie::ButtonLeft &>(*sceneManager->getNode("buttonLeft"));
    auto &buttonRight = dynamic_cast<indie::ButtonRight &>(*sceneManager->getNode("buttonRight"));

    auto &mapDefault = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapDefault"));
    auto &mapEmpty = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapEmpty"));
    auto &mapCool = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapCool"));


    button1p.setPosition({000, 500});
    button2p.setPosition({320, 500});
    button3p.setPosition({640, 500});
    button4p.setPosition({960, 500});

    buttonmainMenu.setPosition({10, 10});

    buttonLeft.setPosition({50, 200});
    buttonRight.setPosition({1150, 200});

    mapDefault.setPosition({420, 10});
    mapEmpty.setPosition({420, 10});
    mapCool.setPosition({420, 10});
}

void indie::ChooseNumberPlayerScene::updateScene(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();

    auto &mapDefault = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapDefault"));
    auto &mapEmpty = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapEmpty"));
    auto &mapCool = dynamic_cast<indie::Image &>(*sceneManager->getNode("mapCool"));

    switch (globalInstnace->_indexMap) {
        case 0:
            mapDefault.setHiding(false);
            mapEmpty.setHiding(true);
            mapCool.setHiding(true);
            break;
        case 1:
            mapDefault.setHiding(true);
            mapEmpty.setHiding(false);
            mapCool.setHiding(true);
            break;
        case 2:
            mapDefault.setHiding(true);
            mapEmpty.setHiding(true);
            mapCool.setHiding(false);
            break;
        default:
            break;
    }

    auto &button1p = dynamic_cast<indie::Button1p &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::Button2p &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::Button3p &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::Button4p &>(*sceneManager->getNode("button4p"));

    auto &buttonmainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));

    auto &buttonLeft = dynamic_cast<indie::ButtonLeft &>(*sceneManager->getNode("buttonLeft"));
    auto &buttonRight = dynamic_cast<indie::ButtonRight &>(*sceneManager->getNode("buttonRight"));


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

    //std::cout << this->_indexMenu << std::endl;
    std::cout << globalInstnace->_indexMap << std::endl;
}
