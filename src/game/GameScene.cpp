/*
** EPITECH PROJECT, 2022
** gameScene.cpp
** File description:
** gameScene.cpp
*/

#include "game/GameScene.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"
#include "game/Player.hpp"
#include "global/GlobalInstance.hpp"
#include "game/ButtonMainMenu.hpp"
#include "mainMenu/ButtonQuit.hpp"

indie::GameScene::GameScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource), _mapSizeMax({60, 45}), _mapSize({0, 0})
{
    this->_mapSymbol = {
        {' ', MapType::NONE},
        {'#', MapType::WALL},
        {'B', MapType::BREAKABLE_WALL}
    };
}

void indie::GameScene::addWall(const Vector3f &position)
{
    static int id = 0;
    auto wall = std::make_shared<indie::Wall>("wall" + std::to_string(id++), raylib::RlMeshBuilder::MeshCube, "./assets/bricks.png");
    wall->setPosition(position);
    this->addNode(wall);
}

void indie::GameScene::addBreakableWall(const Vector3f &position)
{
    static int id = 0;
    auto breakable = std::make_shared<indie::WallDestroyable>("wallDestroyable" + std::to_string(id++), raylib::RlMeshBuilder::MeshCube,"./assets/blackston.png");
    breakable->setPosition(position);
    this->addNode(breakable);
}

void indie::GameScene::sceneLauncher()
{
    gameengine::map::MapParser<MapType> _mapParser("./assets/map/default.txt", this->_mapSymbol, this->_mapSizeMax);
    try {
        _mapParser.parse();
    } catch (gameengine::ex::MapParserException &e) {
        std::cerr << "Error when parsing the map: " << e.what() << std::endl;
        std::exit(84);
    }

    //init map
    this->_mapSize = _mapParser.getSize();

    float x = 0;
    float z = -std::floor(((float) this->_mapSize.y / 2.0f));
    this->_map = _mapParser.getMap();
    for (auto &item : this->_map) {
        x = -std::floor(((float) this->_mapSize.x / 2.0f));
        for (auto &c: item) {
            switch (c) {
                case MapType::UNKNOWN:
                case MapType::NONE:
                    break;
                case MapType::WALL:
                    this->addWall({x, 0.5, z});
                    break;
                case MapType::BREAKABLE_WALL:
                    this->addBreakableWall({x, 0.5, z});
                    break;
            }
            x += 1;
        }
        z += 1;
    }


    auto &globalInstance = indie::GlobalInstance::getInstance();
    for (int i = 0; i < globalInstance->_numberPlayers; i++) {
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), "./assets/player.iqm", "./assets/blue.png", i);
        this->addNode(player);
    }

    auto buttonMainMenu = std::make_shared<indie::ButtonMainMenu>("buttonMainMenu", "./assets/gui/button.png");
    this->addNode(buttonMainMenu);

}

void indie::GameScene::readyScene()
{

    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    if (globalInstance->_numberPlayers > 0) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({-3, 0, -3});
        globalInstance->_playersAlive = 1;
    }
    if (globalInstance->_numberPlayers > 1) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({3, 0, 3});
        globalInstance->_playersAlive = 2;
    }
    if (globalInstance->_numberPlayers > 2) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({-3, 0, 3});
        globalInstance->_playersAlive = 3;
    }
    if (globalInstance->_numberPlayers > 3) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player3"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({3, 0, -3});
        globalInstance->_playersAlive = 4;
    }


    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    buttonMainMenu.setHiding(true);
    buttonMainMenu.setPosition({100, 100});
}


void indie::GameScene::updateScene(float delta)
{
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    if (globalInstance->_playersAlive <= 1) {

        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
            this->displayWinner(player.getName());
        }
        catch (const std::bad_cast &e) {
            try {
                auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
                this->displayWinner(player.getName());
            }
            catch (const std::bad_cast &e) {
                try {
                    auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
                    this->displayWinner(player.getName());
                }
                catch (const std::bad_cast &e) {
                    try {
                        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
                        this->displayWinner(player.getName());
                    }
                    catch (const std::bad_cast &e) {
                        this->displayWinner("CROSSKILL BAND DE CONS");
                    }
                }
            }
        }
    }
}

void indie::GameScene::displayWinner(const std::string &name)
{
    auto text = raylib::RlTextBuilder().setText(name + " WWWIIIINNNN !!!!").setPosition({400, 0}).setColor(RlColor::Gold).setFontSize(50).build();
    raylib::DrawTextHelper::drawText(text);

    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    buttonMainMenu.setHiding(false);
}

