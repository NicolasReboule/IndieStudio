/*
** EPITECH PROJECT, 2022
** MainMenuScene.hpp
** File description:
** MainMenuScene.hpp
*/

#ifndef INDIESTUDIO_MAINMENUSCENE_HPP
#define INDIESTUDIO_MAINMENUSCENE_HPP

#include "GameEngine/GameEngine.hpp"
#include "button/ButtonQuit.hpp"
#include "Image.hpp"

namespace indie {

    class MainMenuScene : public gameengine::Scene {
    public:
        explicit MainMenuScene(const std::string &name = "mainMenu", const std::string &sceneSource = "mainMenu");

        ~MainMenuScene() override = default;

        void updateScene(const float &delta) override;

        void sceneLauncher() override;

        void initScene() override;

    private:
        int _indexMenu;
    };
}

#endif //INDIESTUDIO_MAINMENUSCENE_HPP
