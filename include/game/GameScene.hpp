/*
** EPITECH PROJECT, 2022
** gameScene.hpp
** File description:
** gameScene.hpp
*/

#ifndef INDIESTUDIO_GAMESCENE_HPP
#define INDIESTUDIO_GAMESCENE_HPP

#include "GameEngine/GameEngine.hpp"


namespace Indie {

    class GameScene : public GameEngine::Scene {
    public:
        explicit GameScene(const std::string &name = "game", const std::string &sceneSource = "game");
        ~GameScene() override = default;
        void updateScene(float delta) override;

        void readyScene() override;

        void sceneLauncher() override;

        void initWallsPosition();

        void displayWinner(const std::string &name);
    };
}

#endif //INDIESTUDIO_GAMESCENE_HPP
