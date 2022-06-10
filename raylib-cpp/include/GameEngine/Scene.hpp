
/*
** EPITECH PROJECT, 2022
** Scene.hpp
** File description:
** Scene.hpp
*/

#ifndef INDIESTUDIO_SCENE_HPP
#define INDIESTUDIO_SCENE_HPP

#include "GameEngine/Nodes/Base.hpp"
#include <vector>

namespace GameEngine {

    class Scene {
    public:
        Scene(std::string name = "empty", std::string sceneSource = "empty");
        virtual ~Scene() = default;

        virtual void sceneLauncher() = 0;

        void addNode(const std::shared_ptr<GameEngine::Base>& node);

        std::string getName();

        std::string getSceneSource();

        void ready();
        void update();
        void draw();
        void draw2D();

    private:
        std::string _sceneSource;
        std::string _name;
        std::vector<std::shared_ptr<GameEngine::Base>> _nodes;
    };
}

#endif //INDIESTUDIO_SCENE_HPP
