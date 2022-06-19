/*
** EPITECH PROJECT, 2022
** Map3DLoader.cpp
** File description:
** Map3DLoader.cpp
*/

#include "map/Map3DLoader.hpp"

std::unique_ptr<indie::map::Map3DLoader> indie::map::Map3DLoader::_instance;

indie::map::Map3DLoader::Map3DLoader() : _textureManager(gameengine::TextureManager::getInstance()), _mapSizeMax(200, 200)
{
    this->_mapSymbol = {
        {' ', Map::MapType::NONE},
        {'#', Map::MapType::WALL},
        {'B', Map::MapType::BREAKABLE_WALL},
        {'S', Map::MapType::PLAYER_SPAWN}
    };
}

void indie::map::Map3DLoader::loadMaps(const std::string &directory)
{
    if (!raylib::helper::FileHelper::directoryExists(directory))
        throw gameengine::ex::MapParserException("Map directory does not exist");
    std::vector<std::string> mapFiles = raylib::helper::FileHelper::getDirectoryFiles(directory, true);
    for (const std::string &mapFile : mapFiles)
        this->addMap(mapFile);
}

void indie::map::Map3DLoader::addMap(const std::string &mapPath)
{
    std::cout << "[FakeTaxiStudio][Map3DLoader] Load a new map: " << mapPath << std::endl;
    this->parseMap(mapPath);
}

void indie::map::Map3DLoader::parseMap(const std::string &mapPath)
{
    gameengine::map::MapParser<Map::MapType> mapParser(mapPath, this->_mapSymbol, this->_mapSizeMax);
    mapParser.parse();
    auto mapSize = mapParser.getSize();
    float x = 0;
    float z = -std::floor(((float) mapSize.y / 2.0f));

    static auto mesh = std::make_shared<raylib::model::RlMesh>(raylib::builder::RlMeshBuilder() \
    .setMeshType(raylib::builder::RlMeshBuilder::MeshType::MeshCube).setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build());

    std::vector<std::vector<Map::MapType>> mapContent = mapParser.getMap();
    std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> mapModels;
    std::vector<Vector2f> playerSpawns;

    for (auto &item: mapContent) {
        x = -std::floor(((float) mapSize.x / 2.0f));
        for (auto &c: item) {
            switch (c) {
                case Map::MapType::UNKNOWN:
                case Map::MapType::BOMB:
                case Map::MapType::BONUS:
                case Map::MapType::PLAYER:
                case Map::MapType::NONE:
                    break;
                case Map::MapType::WALL:
                    this->addWall(mapModels, {x, 0.5, z}, mesh);
                    break;
                case Map::MapType::BREAKABLE_WALL:
                    this->addBreakableWall(mapModels, {x, 0.5, z}, mesh);
                    break;
                case Map::MapType::PLAYER_SPAWN:
                    playerSpawns.emplace_back(x, z);
                    break;
            }
            x += 1;
        }
        z += 1;
    }
    long zMiddle = std::floor(((float) mapSize.y / 2.0f));
    long xMiddle = std::floor(((float) mapSize.x / 2.0f));
    for (long zPos = -zMiddle; zPos <= zMiddle; zPos++)
        for (long xPos = -xMiddle; xPos <= xMiddle; xPos++)
            this->addFloor(mapModels, {(float) xPos, -0.05, (float) zPos}, mesh);

    if (playerSpawns.size() != 4)
        throw gameengine::ex::MapParserException("[Map3DLoader] Map must contain 4 player spawns");

    Map map = Map(mapPath, std::move(mapParser), mapModels);
    map.setMap(mapContent);
    map.setMapSize(mapSize);
    map.setMapSizeMax(this->_mapSizeMax);
    map.setPlayerSpawns(playerSpawns);
    this->_maps.push_back(std::make_shared<map::Map>(std::move(map)));
}

void indie::map::Map3DLoader::addWall(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, const Vector3f &position, \
const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    static unsigned long id = 0;
    auto wall = std::make_shared<indie::Wall>("wall" + std::to_string(id++), raylib::model::RlModel(mesh), _textureManager->getTexture("./assets/textures/blocks/bricks.png"));
    wall->setPosition(position);
    models.push_back(wall);
}

void indie::map::Map3DLoader::addBreakableWall(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, \
const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    static unsigned long id = 0;
    auto breakable = std::make_shared<indie::WallDestroyable>("wallDestroyable" + std::to_string(id++), raylib::model::RlModel(mesh), _textureManager->getTexture("./assets/textures/blocks/blackstone.png"));
    breakable->setPosition(position);
    models.push_back(breakable);
}

void indie::map::Map3DLoader::addFloor(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, \
const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh)
{
    static unsigned long id = 0;
    auto floor = std::make_shared<indie::Wall>("floor" + std::to_string(id++), raylib::model::RlModel(mesh), _textureManager->getTexture("./assets/textures/blocks/andesite.png"));
    floor->setPosition(position);
    floor->setCollisionEnable(false);
    floor->setScale({1, 0.1, 1});
    models.push_back(floor);
}

const std::unordered_map<char, indie::map::Map::MapType> &indie::map::Map3DLoader::getMapSymbol() const
{
    return this->_mapSymbol;
}

const std::vector<std::shared_ptr<indie::map::Map>> &indie::map::Map3DLoader::getMaps() const
{
    return this->_maps;
}

const Vector2u &indie::map::Map3DLoader::getMapSizeMax() const
{
    return this->_mapSizeMax;
}

void indie::map::Map3DLoader::setMapSizeMax(const Vector2u &mapSizeMax)
{
    this->_mapSizeMax = mapSizeMax;
}

std::unique_ptr<indie::map::Map3DLoader> &indie::map::Map3DLoader::getInstance()
{
    if (_instance == nullptr)
        _instance = std::make_unique<Map3DLoader>();
    return _instance;
}
