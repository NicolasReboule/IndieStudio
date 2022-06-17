/*
** EPITECH PROJECT, 2022
** WinningScene.hpp
** File description:
** WinningScene.hpp
*/

#ifndef INDIESTUDIO_WINNINGSCENE_HPP
#define INDIESTUDIO_WINNINGSCENE_HPP

#include <GameEngine/GameEngine.hpp>

namespace indie {

    class WinningScene : public gameengine::Scene {
    public:
        explicit WinningScene(std::string name = "winning", std::string sceneSource = "winning");
        ~WinningScene() override = default;

        void updateScene(float delta) override;

        void sceneLauncher() override;

        void readyScene() override;
    private:
        int _indexMenu;
    };
}

#endif //INDIESTUDIO_WINNINGSCENE_HPP
