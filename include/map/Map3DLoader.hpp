/*
** EPITECH PROJECT, 2022
** Map3DLoader.hpp
** File description:
** Map3DLoader.hpp
*/

#ifndef INDIESTUDIO_MAP3DLOADER_HPP
#define INDIESTUDIO_MAP3DLOADER_HPP

#include "Map.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"
#include "GameEngine/GameEngine.hpp"

namespace indie::map {
    /**
     * @brief Load a 3D map from a file
     */
    class Map3DLoader {
    public:
        /**
         * @brief Load a 3D map from a file
         * @throws gameengine::ex::MapParserException if the map is not valid
         */
        Map3DLoader();

        /**
         * @brief Get the symbol used to parser the map
         * @return the symbol used to parser the map
         */
        const std::unordered_map<char, Map::MapType> &getMapSymbol() const;

        /**
         * @brief Parse all the map from a directory
         * @param directory the directory where the map are (only .txt)
         * @throws gameengine::ex::MapParserException if the map is not validw
         */
        void loadMaps(const std::string &directory = "./assets/map/");

        /**
         * @brief Add a new map to parse
         * @param mapPath the map to parse
         * @throws gameengine::ex::MapParserException if the map is not valid
         */
        void addMap(const std::string &mapPath);

        /**
         * @brief Get all maps
         * @return the maps
         */
        const std::vector<std::shared_ptr<Map>> &getMaps() const;

        /**
         * @brief Get the maximum size of the map
         * @return the maximum size of the map
         */
        const Vector2u &getMapSizeMax() const;

        /**
         * @brief Set the maximum size of the map
         * @param mapSizeMax the maximum size of the map
         */
        void setMapSizeMax(const Vector2u &mapSizeMax);

        /**
         * @brief Get the singleton instance of the map loader
         * @return the singleton instance of the map loader
         */
        static std::shared_ptr<Map3DLoader> &getInstance();

    private:
        static std::shared_ptr<Map3DLoader> _instance; /**< The instance of the map loader */

        /**
         * @brief Parse the map
         * @param mapPath the path of the map
         * @throws gameengine::ex::MapParserException if the map is not valid
         */
        void parseMap(const std::string &mapPath);

        /**
         * @brief Add un unbreakable wall to the map
         * @param models the models vector to add the wall to
         * @param position the position of the wall
         * @param mesh the mesh of the wall
         */
        void addWall(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);

        /**
         * @brief Add a breakable wall to the map
         * @param models the models vector to add the wall to
         * @param position the position of the wall
         * @param mesh the mesh of the wall
         */
        void addBreakableWall(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);

        /**
         * @brief Add a floor to the map
         * @param models the models vector to add the floor to
         * @param position the position of the floor
         * @param mesh the mesh of the floor
         */
        void addFloor(std::vector<std::shared_ptr<gameengine::node::_3D::StaticBody>> &models, const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);

        std::unique_ptr<gameengine::TextureManager> &_textureManager; /**< The texture manager*/
        std::unordered_map<char, Map::MapType> _mapSymbol; /**< The map for binding char and map type*/
        std::vector<std::shared_ptr<Map>> _maps; /**< The vector of maps*/
        Vector2u _mapSizeMax; /**< The max size of the map*/
    };
}

#endif //INDIESTUDIO_MAP3DLOADER_HPP
