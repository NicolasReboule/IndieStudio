/*
** EPITECH PROJECT, 2022
** StartScene.hpp
** File description:
** StartScene.hpp
*/

#ifndef INDIESTUDIO_STARTSCENE_HPP
#define INDIESTUDIO_STARTSCENE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class StartScene : public gameengine::Scene {
    public:
        explicit StartScene(const std::string &name = "start", const std::string &sceneSource = "start");
        ~StartScene() override = default;

        void updateScene(const float &delta) override;

        void sceneLauncher() override;

        void initScene() override;

    private:
        long _startTimestamp;
    };
}

#endif //INDIESTUDIO_STARTSCENE_HPP
