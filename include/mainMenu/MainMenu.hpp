/*
** EPITECH PROJECT, 2022
** MainMenu.hpp
** File description:
** MainMenu.hpp
*/

#ifndef INDIESTUDIO_MAINMENU_HPP
#define INDIESTUDIO_MAINMENU_HPP

#include <GameEngine/GameEngine.hpp>

namespace Indie {

    class MainMenu : public GameEngine::Scene {
    public:

        explicit MainMenu(std::string name = "mainMenu", std::string sceneSource = "mainMenu");

        ~MainMenu() override = default;

        void updateScene(float delta) override;

        void sceneLauncher() override;
    private:
    };
}

#endif //INDIESTUDIO_MAINMENU_HPP
