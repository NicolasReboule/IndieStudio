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
        void updateScene(float delta) override;

        void readyScene() override;

        void sceneLauncher() override;

        void addWall(const Vector3f &position);
        void addBreakableWall(const Vector3f &position);

        void displayWinner(const std::string &name);
    private:
        enum class MapType {
            UNKNOWN = -1,
            NONE = 0,
            WALL,
            BREAKABLE_WALL
        };

        Vector2u _mapSizeMax;
        Vector2u _mapSize;
        std::unordered_map<char, MapType> _mapSymbol;
        std::vector<std::vector<MapType>> _map;
    };
}

#endif //INDIESTUDIO_GAMESCENE_HPP
