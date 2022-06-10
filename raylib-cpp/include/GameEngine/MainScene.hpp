/*
** EPITECH PROJECT, 2022
** main.hpp
** File description:
** main.hpp
*/

#ifndef INDIESTUDIO_MAINSCENE_HPP
#define INDIESTUDIO_MAINSCENE_HPP

#include "GameEngine.hpp"

namespace GameEngine {

    class MainScene : public Scene {
    public:
        explicit MainScene(std::string name = "main", std::string sceneSource = "main");
        ~MainScene() = default;

        void sceneLauncher() override;

    private:

    };
}

#endif //INDIESTUDIO_MAINSCENE_HPP
