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
#include "game/ButtonQuitx05.hpp"
#include "game/ButtonResume.hpp"

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
    auto wall = std::make_shared<indie::Wall>("wall" + std::to_string(id++), raylib::builder::RlMeshBuilder::MeshCube, "./assets/bricks.png");
    wall->setPosition(position);
    this->addNode(wall);
}

void indie::GameScene::addBreakableWall(const Vector3f &position)
{
    static int id = 0;
    auto breakable = std::make_shared<indie::WallDestroyable>("wallDestroyable" + std::to_string(id++), raylib::builder::RlMeshBuilder::MeshCube,"./assets/blackstone.png");
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
        std::string color;
        if (i == 0)
           color  = "blue";
        else if (i == 1)
            color  = "red";
        else if (i == 2)
            color  = "green";
        else
            color  = "yellow";
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), "./assets/player.iqm", "./assets/" + color + ".png", i);
        this->addNode(player);
    }

    auto buttonResume = std::make_shared<indie::ButtonResume>("buttonResume", "./assets/gui/button_resume_x05.png");
    this->addNode(buttonResume);

    auto buttonMainMenu = std::make_shared<indie::ButtonMainMenu>("buttonMainMenu", "./assets/gui/button_main_menu_x05.png");
    this->addNode(buttonMainMenu);

    auto buttonQuit = std::make_shared<indie::ButtonQuitx05>("buttonQuit", "./assets/gui/button_quit_x05.png");
    this->addNode(buttonQuit);

    Vector2i size = {(int) this->_mapSize.x, (int) this->_mapSize.y};
    Vector3f position = {size.x % 2 == 0 ? -0.5f : 0, 0, size.y % 2 == 0 ? -0.5f : 0};
    auto grid = std::make_shared<gameengine::component::GridComponent>(size, position, 1.0f, RlColor::Black, std::string("grid"));
    this->addNode(grid);
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
        player.setPosition({-5, 0, -6}); //TODO: find a way to change this
        globalInstance->_playersAlive = 1;
    }
    if (globalInstance->_numberPlayers > 1) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({5, 0, 6}); //TODO: find a way to change this
        globalInstance->_playersAlive = 2;
    }
    if (globalInstance->_numberPlayers > 2) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({-5, 0, 6}); //TODO: find a way to change this
        globalInstance->_playersAlive = 3;
    }
    if (globalInstance->_numberPlayers > 3) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player3"));
        BoundingBox box = {{-0.5, 0, -0.5},{0.5,  2, 0.5}};
        player.setBoundingBox(box);
        player.setScale({0.8, 0.8, 0.8});
        player.setPosition({5, 0, -6}); //TODO: find a way to change this
        globalInstance->_playersAlive = 4;
    }


    auto &buttonResume = dynamic_cast<indie::ButtonResume &>(*sceneManager->getNode("buttonResume"));
    buttonResume.setHiding(true);
    buttonResume.setPosition({50, 200});

    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    buttonMainMenu.setHiding(true);
    buttonMainMenu.setPosition({50, 300});

    auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));
    buttonQuit.setHiding(true);
    buttonQuit.setPosition({50, 400});


}


void indie::GameScene::updateScene(float delta)
{
    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    if (globalInstance->_playersAlive == 1) {

        auto &player0 = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
        if (player0.getState() == Player::ALIVE) {
            this->displayWinner(player0.getName());
            return;
        }

        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
            if (player.getState() == Player::ALIVE) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {
            ;
        }
        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
            if (player.getState() == Player::ALIVE) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {
            ;
        }
        try {
            auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player3"));
            if (player.getState() == Player::ALIVE) {
                this->displayWinner(player.getName());
                return;
            }
        }
        catch (const std::bad_cast &e) {
            ;
        }
    } else if (globalInstance->_playersAlive <= 0)
        this->displayWinner("SHHEEESSH");
}

void indie::GameScene::displayWinner(const std::string &name)
{
    auto text = raylib::builder::RlTextBuilder().setText(name + "   WINNN !!!!").setPosition({400, 0}).setColor(RlColor::Gold).setFontSize(50).build();
    raylib::helper::draw::DrawTextHelper::drawText(text);

    auto &globalInstance = indie::GlobalInstance::getInstance();
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));
    buttonMainMenu.setHiding(false);
    buttonQuit.setHiding(false);

    globalInstance->_playerWinner = name;
    //sceneManager->changeScene("winning");
}

