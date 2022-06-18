/*
** EPITECH PROJECT, 2022
** gameScene.hpp
** File description:
** gameScene.hpp
*/

#ifndef INDIESTUDIO_GAMESCENE_HPP
#define INDIESTUDIO_GAMESCENE_HPP

#include "GameEngine/GameEngine.hpp"
#include "GameEngine/MapParser.hpp"

namespace indie {

    class GameScene : public gameengine::Scene {
    public:
        explicit GameScene(const std::string &name = "game", const std::string &sceneSource = "game");

        ~GameScene() override = default;

        void updateScene(const float &delta) override;

        void initScene() override;

        void sceneLauncher() override;

        void addWall(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);
        void addBreakableWall(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);
        void addFloor(const Vector3f &position, const std::shared_ptr<raylib::model::RlMesh> &mesh);

        void displayWinner(const std::string &name);

    private:
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

        int _indexMenu;

        float _winTimer;

        Vector2u _mapSizeMax;
        Vector2u _mapSize;
        std::unordered_map<char, MapType> _mapSymbol;
        std::vector<std::vector<MapType>> _map;
        std::vector<Vector2f> _playerSpawn;
    };
}

#endif //INDIESTUDIO_GAMESCENE_HPP
