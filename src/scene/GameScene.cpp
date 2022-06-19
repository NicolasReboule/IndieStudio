/*
** EPITECH PROJECT, 2022
** gameScene.cpp
** File description:
** gameScene.cpp
*/

#include "scene/GameScene.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"
#include "game/Player.hpp"
#include "global/GlobalInstance.hpp"
#include "button/ButtonMainMenu.hpp"
#include "button/ButtonResume.hpp"

indie::GameScene::GameScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource), _mapSizeMax({1000, 1000}), _mapSize({0, 0})
{
    this->_mapSymbol = {
        {' ', MapType::NONE},
        {'#', MapType::WALL},
        {'B', MapType::BREAKABLE_WALL},
        {'S', MapType::PLAYER_SPAWN}
    };
    this->_indexMenu = 0;
    this->_winTimer = 0;
}

void indie::GameScene::addWall(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    auto texture = std::make_shared<raylib::texture::RlTexture>("./assets/textures/blocks/bricks.png");
    static int id = 0;
    auto wall = std::make_shared<indie::Wall>("wall" + std::to_string(id++), raylib::model::RlModel(mesh), texture);
    wall->setPosition(position);
    this->addNode(wall);
}

void indie::GameScene::addBreakableWall(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    auto texture = std::make_shared<raylib::texture::RlTexture>("./assets/textures/blocks/blackstone.png");
    static int id = 0;
    auto breakable = std::make_shared<indie::WallDestroyable>("wallDestroyable" + std::to_string(id++), raylib::model::RlModel(mesh), texture);
    breakable->setPosition(position);
    this->addNode(breakable);
}

void indie::GameScene::addFloor(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    auto texture = std::make_shared<raylib::texture::RlTexture>("./assets/textures/blocks/andesite.png");
    static int id = 0;
    auto floor = std::make_shared<indie::Wall>("floor" + std::to_string(id++), raylib::model::RlModel(mesh), texture);
    floor->setPosition(position);
    floor->setCollisionEnable(false);
    floor->setScale({1, 0.1, 1});
    this->addNode(floor);
}

void indie::GameScene::sceneLauncher()
{
    auto &window = raylib::window::RlWindow::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    std::string pathMap;

    switch (globalInstance->_indexMap) {
        case 1:
            pathMap = "./assets/map/empty.txt";
            break;
        case 2:
            pathMap = "./assets/map/cool.txt";
            break;
        default:
            pathMap = "./assets/map/default.txt";
            break;
    }

    gameengine::map::MapParser<MapType> _mapParser(pathMap, this->_mapSymbol, this->_mapSizeMax);
    try {
        _mapParser.parse();
    } catch (gameengine::ex::MapParserException &e) {
        std::cerr << "Error when parsing the map: " << e.what() << std::endl;
        std::exit(84);
    }

    this->_mapSize = _mapParser.getSize();

    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setPosition({0, std::max(20.0f, (float) std::max(this->_mapSize.x, this->_mapSize.y) * 0.725f) , 0}).setCameraMode(CAMERA_FREE).build();
    window->setCamera(camera);

    float x = 0;
    float z = -std::floor(((float) this->_mapSize.y / 2.0f));
    this->_map = _mapParser.getMap();
    auto mesh = std::make_shared<raylib::model::RlMesh>(raylib::builder::RlMeshBuilder()
        .setMeshType(raylib::builder::RlMeshBuilder::MeshType::MeshCube)
        .setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build());

    for (auto &item : this->_map) {
        x = -std::floor(((float) this->_mapSize.x / 2.0f));
        for (auto &c: item) {
            switch (c) {
                case MapType::UNKNOWN:
                case MapType::NONE:
                    break;
                case MapType::WALL:
                    this->addWall({x, 0.5, z}, mesh);
                    break;
                case MapType::BREAKABLE_WALL:
                    this->addBreakableWall({x, 0.5, z}, mesh);
                    break;
                case MapType::PLAYER_SPAWN:
                    this->_playerSpawn.emplace_back(x, z);
                    break;
                case MapType::BOMB:
                case MapType::BONUS:
                case MapType::PLAYER:
                    break;
            }
            x += 1;
        }
        z += 1;
    }
    long zMiddle = std::floor(((float) this->_mapSize.y / 2.0f));
    long xMiddle = std::floor(((float) this->_mapSize.x / 2.0f));
    for (long zPos = -zMiddle; zPos <= zMiddle; zPos++)
        for (long xPos = -xMiddle; xPos <= xMiddle; xPos++)
            this->addFloor({(float) xPos, -0.05, (float) zPos}, mesh);

    if (this->_playerSpawn.size() != 4)
        std::cerr << "Player spawns are not well defined" << std::endl;

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
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), playerModel, std::make_shared<raylib::texture::RlTexture>("./assets/textures/players/" + color + ".png"), i);
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
        auto player = std::make_shared<indie::Player>("player" + std::to_string(i), playerModel, std::make_shared<raylib::texture::RlTexture>("./assets/textures/players/" + color + ".png"), -1);
        this->addNode(player);
    }

    auto buttonResume = std::make_shared<indie::button::ButtonResume>("buttonResume", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_resume_x05.png"));
    this->addNode(buttonResume);

    auto buttonRestart = std::make_shared<indie::button::ButtonRestart>("buttonRestart", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_restart_x05.png"));
    this->addNode(buttonRestart);

    auto buttonMainMenu = std::make_shared<indie::button::ButtonMainMenu>("buttonMainMenu", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_main_menu_x05.png"));
    this->addNode(buttonMainMenu);

    auto buttonQuit = std::make_shared<indie::button::ButtonQuit>("buttonQuit", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/button_quit_x05.png"));
    this->addNode(buttonQuit);

    Vector2i size = {(int) this->_mapSize.x, (int) this->_mapSize.y};
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

    for (int i = 0; i < globalInstance->_numberPlayers; i++) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player" + std::to_string(i)));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[i];
        player.setPosition({pos.x, 0, pos.y});
    }
    for (int i = globalInstance->_numberPlayers; i < 4; i++) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player" + std::to_string(i)));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[i];
        player.setPosition({pos.x, 0, pos.y});

    }
    globalInstance->_playersAlive = 4;

    /*if (globalInstance->_numberPlayers > 0) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player0"));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[0];
        player.setPosition({pos.x, 0, pos.y});
        globalInstance->_playersAlive = 1;
    }
    if (globalInstance->_numberPlayers > 1) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player1"));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[1];
        player.setPosition({pos.x, 0, pos.y});
        globalInstance->_playersAlive = 2;
    }
    if (globalInstance->_numberPlayers > 2) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player2"));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[2];
        player.setPosition({pos.x, 0, pos.y});
        globalInstance->_playersAlive = 3;
    }
    if (globalInstance->_numberPlayers > 3) {
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode("player3"));
        player.setBoundingBox(box);
        player.setScale(scale);
        auto &pos = this->_playerSpawn[3];
        player.setPosition({pos.x, 0, pos.y});
        globalInstance->_playersAlive = 4;
    }*/


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

        if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
            if (this->_indexMenu == 0) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 225);
                this->_indexMenu = 1;
            }
            else if (this->_indexMenu == 1) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 325);
                this->_indexMenu = 2;
            }
            else if (this->_indexMenu == 2) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 425);
                this->_indexMenu = 3;
            }
        }
        if (raylib::helper::input::GamepadHelper::isGamepadButtonPressed(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
            if (this->_indexMenu == 1) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 125);
                this->_indexMenu = 0;
            }
            else if (this->_indexMenu == 2) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 225);
                this->_indexMenu = 1;
            }
            else if (this->_indexMenu == 3) {
                raylib::helper::input::MouseHelper::setMousePosition(550, 325);
                this->_indexMenu = 2;
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


