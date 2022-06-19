/*
** EPITECH PROJECT, 2022
** chooseNumberPlayerScene.hpp
** File description:
** chooseNumberPlayerScene.hpp
*/

#ifndef INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP
#define INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP

#include "button/ButtonMainMenu.hpp"
#include "global/GlobalInstance.hpp"
#include "Image.hpp"
#include "map/Map3DLoader.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie {

    class ChooseNumberPlayerScene : public gameengine::Scene {
    public:
        explicit ChooseNumberPlayerScene(const std::string &name = "chooseNumberPlayer", const std::string &sceneSource = "chooseNumberPlayer");
        ~ChooseNumberPlayerScene() override = default;

        void updateScene(const float &delta) override;

        void initScene() override;

        void sceneLauncher() override;
    private:
        int _indexMenu;
    };
}

#endif //INDIESTUDIO_CHOOSENUMBERPLAYERSCENE_HPP
