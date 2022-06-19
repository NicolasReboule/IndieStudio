/*
** EPITECH PROJECT, 2022
** gameScene.hpp
** File description:
** gameScene.hpp
*/

#ifndef INDIESTUDIO_GAMESCENE_HPP
#define INDIESTUDIO_GAMESCENE_HPP

#include "button/ButtonMainMenu.hpp"
#include "button/ButtonQuit.hpp"
#include "button/ButtonRestart.hpp"
#include "button/ButtonResume.hpp"
#include "game/Player.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"
#include "global/GlobalInstance.hpp"
#include "map/Map3DLoader.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie {

    class GameScene : public gameengine::Scene {
    public:
        explicit GameScene(const std::string &name = "game", const std::string &sceneSource = "game");

        ~GameScene() override = default;

        void updateScene(const float &delta) override;

        void initScene() override;

        void sceneLauncher() override;

        void displayWinner(const std::string &name);

    private:
        int _indexMenu;
        float _winTimer;

        std::vector<Vector2f> buttonsPos;

        std::shared_ptr<map::Map3DLoader> &_map3DLoader;
        std::shared_ptr<map::Map> _map;
        std::unique_ptr<gameengine::TextureManager> &_textureManager;
    };
}

#endif //INDIESTUDIO_GAMESCENE_HPP
