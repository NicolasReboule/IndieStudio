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
        explicit GameScene(std::string name = "game", std::string sceneSource = "game");
        ~GameScene() override = default;
        void updateScene(float delta) override;

        void sceneLauncher() override;
    };
}

#endif //INDIESTUDIO_GAMESCENE_HPP
