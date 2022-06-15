/*
** EPITECH PROJECT, 2022
** GlobalScene.hpp
** File description:
** GlobalScene.hpp
*/

#ifndef INDIESTUDIO_GLOBALSCENE_HPP
#define INDIESTUDIO_GLOBALSCENE_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class GlobalScene : public gameengine::Scene {
    public:
        GlobalScene(const std::string &name = "global", const std::string &filename = "start");

        ~GlobalScene() override = default;

        void sceneLauncher() override;

        void updateScene(float delta) override;

        void readyScene() override;
    };
}

#endif //INDIESTUDIO_GLOBALSCENE_HPP


