/*
** EPITECH PROJECT, 2022
** chooseNumberPlayerScene.hpp
** File description:
** chooseNumberPlayerScene.hpp
*/

#ifndef INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP
#define INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class ChooseNumberPlayerScene : public GameEngine::Scene {
    public:
        explicit ChooseNumberPlayerScene(const std::string &name = "chooseNumberPlayer", const std::string &sceneSource = "chooseNumberPlayer");
        ~ChooseNumberPlayerScene() override = default;
        void updateScene(float delta) override;

        void readyScene() override;

        void sceneLauncher() override;
    };
}

#endif //INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP
