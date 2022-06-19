/*
** EPITECH PROJECT, 2022
** WinningScene.hpp
** File description:
** WinningScene.hpp
*/

#ifndef INDIESTUDIO_WINNINGSCENE_HPP
#define INDIESTUDIO_WINNINGSCENE_HPP

#include "global/GlobalInstance.hpp"
#include "game/Player.hpp"
#include "game/ButtonMainMenu.hpp"
#include "winning/ButtonRestart.hpp"
#include "IndieButton.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie {

    class WinningScene : public gameengine::Scene {
    public:
        explicit WinningScene(const std::string &name = "winning", const std::string &sceneSource = "winning");
        ~WinningScene() override = default;

        void updateScene(const float &delta) override;

        void sceneLauncher() override;

        void initScene() override;

    private:
        int _indexMenu;
    };
}

#endif //INDIESTUDIO_WINNINGSCENE_HPP
