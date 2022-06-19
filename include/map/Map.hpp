/*
** EPITECH PROJECT, 2022
** Map.hpp
** File description:
** Map.hpp
*/

#ifndef INDIESTUDIO_MAP_HPP
#define INDIESTUDIO_MAP_HPP

#include <GameEngine/GameEngine.hpp>

namespace indie::map {
    /**
     * @brief A map containing 3d models
     */
    class Map {
    public:
        enum class MapType {
            UNKNOWN = -1,
            NONE = 0,
            WALL,
            BREAKABLE_WALL,
            PLAYER_SPAWN,
            BOMB,
            BONUS,
            PLAYER
        };

        /**
         * @brief Construct a new Map object
         * @param mapPath the path of the map
         * @param mapParser the map parser
         * @param mapModels the map models
         */
        explicit Map(const std::string &mapPath, gameengine::map::MapParser<MapType> &&mapParser, const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &mapModels);

        /**
         * @brief Get the map path
         * @return the map path
         */
        const std::string &getMapPath() const;

        /**
         * @brief Set the map path
         * @param mapPath the map path
         */
        void setMapPath(const std::string &mapPath);

        /**
         * @brief Get the map parser
         * @return the map parser
         */
        const gameengine::map::MapParser<MapType> &getMapParser() const;

        /**
         * @brief Get the map models
         * @return the map models
         */
        const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &getMapModels() const;

        /**
         * @brief Set the map models
         * @param mapModels
         */
        void setMapModels(const std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &mapModels);

        /**
         * @brief Get the map size max
         * @return the map size max
         */
        const Vector2u &getMapSizeMax() const;

        /**
         * @brief Set the map size max
         * @param mapSizeMax the map size max
         */
        void setMapSizeMax(const Vector2u &mapSizeMax);

        /**
         * @brief Get the map size
         * @return the map size
         */
        const Vector2u &getMapSize() const;

        /**
         * @brief Set the map size
         * @param mapSize the map size
         */
        void setMapSize(const Vector2u &mapSize);

        /**
         * @brief Get the map vector
         * @return the map
         */
        const std::vector<std::vector<MapType>> &getMap() const;

        /**
         * @brief Set the map vector
         * @param map the map
         */
        void setMap(const std::vector<std::vector<MapType>> &map);

        /**
         * @brief Get the player spawns
         * @return the player spawns
         */
        const std::vector<Vector2f> &getPlayerSpawns() const;

        /**
         * @brief Set the player spawns
         * @param playerSpawns the player spawns
         */
        void setPlayerSpawns(const std::vector<Vector2f> &playerSpawns);

    private:
        std::string _mapPath;
        gameengine::map::MapParser<MapType> _mapParser;
        std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> _mapModels;
        Vector2u _mapSizeMax;
        Vector2u _mapSize;
        std::vector<std::vector<MapType>> _map;
        std::vector<Vector2f> _playerSpawns;
    };
}

#endif //INDIESTUDIO_MAP_HPP
