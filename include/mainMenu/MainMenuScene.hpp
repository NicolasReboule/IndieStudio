/*
** EPITECH PROJECT, 2022
** MainMenuScene.hpp
** File description:
** MainMenuScene.hpp
*/

#ifndef INDIESTUDIO_MAINMENUSCENE_HPP
#define INDIESTUDIO_MAINMENUSCENE_HPP

#include <GameEngine/GameEngine.hpp>

namespace Indie {

    class MainMenuScene : public GameEngine::Scene {
    public:

        explicit MainMenuScene(std::string name = "mainMenu", std::string sceneSource = "mainMenu");

        ~MainMenuScene() override = default;

        void updateScene(float delta) override;

        void sceneLauncher() override;
    private:
    };
}

#endif //INDIESTUDIO_MAINMENUSCENE_HPP
