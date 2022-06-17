/*
** EPITECH PROJECT, 2022
** chooseMapScene.hpp
** File description:
** chooseMapScene.hpp
*/

#ifndef INDIESTUDIO_CHOOSEMAPSCENE_HPP
#define INDIESTUDIO_CHOOSEMAPSCENE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ChooseMap : public gameengine::Scene {
    public:
        explicit ChooseMap(const std::string &name = "chooseMap", const std::string &sceneSource = "chooseMap");
        ~ChooseMap() override = default;
        void updateScene(float delta) override;

        void readyScene() override;

        void sceneLauncher() override;
    };
}


#endif //INDIESTUDIO_CHOOSEMAPSCENE_HPP
