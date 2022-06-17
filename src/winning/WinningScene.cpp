/*
** EPITECH PROJECT, 2022
** WinningScene.cpp
** File description:
** WinningScene.cpp
*/


#include "winning/WinningScene.hpp"
#include "global/GlobalInstance.hpp"
#include "game/Player.hpp"
#include "winning/ButtonRestart.hpp"
#include "game/ButtonMainMenu.hpp"

indie::WinningScene::WinningScene(std::string name, std::string sceneSource) : Scene(name, sceneSource)
{
}

void indie::WinningScene::updateScene(float delta)
{
}

void indie::WinningScene::sceneLauncher()
{

    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &window = raylib::window::RlWindow::getInstance();

    std::cout << "winner: " << globalInstance->_playerWinner << std::endl;

    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setCameraMode(CAMERA_FREE).setPosition({-10, 5, 0}).setTarget({0, -0.5, 0}).setLookingPoint({0, 5, 0}).build();
    window->setCamera(camera);

    //globalInstance->_playerWinner = "player0";


    std::cout << "winner: " << globalInstance->_playerWinner << std::endl;

    if (globalInstance->_playerWinner == "player0") {
        auto player = std::make_shared<indie::Player>("player0", "./assets/player.iqm", "./assets/blue.png", 0);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
        std::cout << "lol" << std::endl;
    } else if (globalInstance->_playerWinner == "player1") {
        auto player = std::make_shared<indie::Player>("player1", "./assets/player.iqm", "./assets/red.png", 1);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
        std::cout << "red" << std::endl;
    } else if (globalInstance->_playerWinner == "player2") {
        auto player = std::make_shared<indie::Player>("player2", "./assets/player.iqm", "./assets/green.png", 2);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
        std::cout << "green" << std::endl;
    } else if (globalInstance->_playerWinner == "player3") {
        auto player = std::make_shared<indie::Player>("player3", "./assets/player.iqm", "./assets/yellow.png", 3);
        player->setState(indie::Player::State::WINNER);
        this->addNode(player);
        std::cout << "yellow" << std::endl;
    } else {
        auto player0 = std::make_shared<indie::Player>("player0", "./assets/player.iqm", "./assets/blue.png", 0);
        player0->setState(indie::Player::State::LOOSER);
        player0->setPosition({0, 0, -2});
        this->addNode(player0);
        auto player1 = std::make_shared<indie::Player>("player1", "./assets/player.iqm", "./assets/red.png", 1);
        player1->setState(indie::Player::State::LOOSER);
        player1->setPosition({0, 0, -1});
        this->addNode(player1);
        auto player2 = std::make_shared<indie::Player>("player2", "./assets/player.iqm", "./assets/green.png", 2);
        player2->setState(indie::Player::State::LOOSER);
        player2->setPosition({0, 0, 1});
        this->addNode(player2);
        auto player3 = std::make_shared<indie::Player>("player3", "./assets/player.iqm", "./assets/yellow.png", 3);
        player3->setState(indie::Player::State::LOOSER);
        player3->setPosition({0, 0, 2});
        this->addNode(player3);
    }


    auto buttonRestart = std::make_shared<indie::ButtonRestartx05>("buttonRestart", "./assets/gui/button_restart_x05.png");
    buttonRestart->setPosition({500, 400});
    this->addNode(buttonRestart);

    auto buttonMainMenu = std::make_shared<indie::ButtonMainMenu>("buttonRestart", "./assets/gui/button_main_menu_x05.png");
    buttonMainMenu->setPosition({500, 500});
    this->addNode(buttonMainMenu);
}

void indie::WinningScene::readyScene()
{
}
