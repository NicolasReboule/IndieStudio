/*
** EPITECH PROJECT, 2022
** StartScene.hpp
** File description:
** StartScene.hpp
*/

#ifndef INDIESTUDIO_STARTSCENE_HPP
#define INDIESTUDIO_STARTSCENE_HPP

#include <GameEngine/GameEngine.hpp>

namespace Indie {

    class StartScene : public gameengine::Scene {
    public:
        explicit StartScene(std::string name = "start", std::string sceneSource = "start");
        ~StartScene() override = default;

        void updateScene(float delta) override;

        void sceneLauncher() override;
    };
}

#endif //INDIESTUDIO_STARTSCENE_HPP
