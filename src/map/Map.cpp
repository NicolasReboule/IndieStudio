/*
** EPITECH PROJECT, 2022
** Map.cpp
** File description:
** Map.cpp
*/

#include "map/Map.hpp"

indie::map::Map::Map(const std::string &mapPath, gameengine::map::MapParser<MapType> &&mapParser, const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &mapModels)
    : _mapParser(std::move(mapParser)), _mapSizeMax(), _mapSize()
{
    this->_mapPath = mapPath;
    this->_mapModels = mapModels;
}

const std::string &indie::map::Map::getMapPath() const
{
    return this->_mapPath;
}

void indie::map::Map::setMapPath(const std::string &mapPath)
{
    this->_mapPath = mapPath;
}

const gameengine::map::MapParser<indie::map::Map::MapType> &indie::map::Map::getMapParser() const
{
    return this->_mapParser;
}

const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &indie::map::Map::getMapModels() const
{
    return this->_mapModels;
}

void indie::map::Map::setMapModels(const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &mapModels)
{
    this->_mapModels = mapModels;
}

const Vector2u &indie::map::Map::getMapSizeMax() const
{
    return this->_mapSizeMax;
}

void indie::map::Map::setMapSizeMax(const Vector2u &mapSizeMax)
{
    this->_mapSizeMax = mapSizeMax;
}

const Vector2u &indie::map::Map::getMapSize() const
{
    return this->_mapSize;
}

void indie::map::Map::setMapSize(const Vector2u &mapSize)
{
    this->_mapSize = mapSize;
}

const std::vector<std::vector<indie::map::Map::MapType>> &indie::map::Map::getMap() const
{
    return this->_map;
}

void indie::map::Map::setMap(const std::vector<std::vector<MapType>> &map)
{
    this->_map = map;
}

const std::vector<Vector2f> &indie::map::Map::getPlayerSpawns() const
{
    return this->_playerSpawns;
}

void indie::map::Map::setPlayerSpawns(const std::vector<Vector2f> &playerSpawns)
{
    this->_playerSpawns = playerSpawns;
}

