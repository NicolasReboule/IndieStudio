
/*
** EPITECH PROJECT, 2022
** Scene.hpp
** File description:
** Scene.hpp
*/

#ifndef INDIESTUDIO_SCENE_HPP
#define INDIESTUDIO_SCENE_HPP

#include "GameEngine/Nodes/AbstractBase.hpp"
#include <vector>

namespace gameengine {

    class Scene {
    public:
        explicit Scene(std::string name = "empty", std::string sceneSource = "empty");
        virtual ~Scene() = default;

        virtual void sceneLauncher() = 0;

        void addNode(const std::shared_ptr<gameengine::AbstractBase> &node);

        void deleteNode(const std::string& name);

        void deleteNodeIncludes(const std::string& includeName);

        std::shared_ptr<gameengine::AbstractBase> getNode(const std::string& name);

        std::vector<std::shared_ptr<gameengine::AbstractBase>> getAllNode();

        std::string getName();

        std::string getSceneSource();

        void ready();
        void update(float delta);
        void draw();
        void draw2D();

        virtual void updateScene(float delta) = 0;

        virtual void readyScene() = 0;

        void destroy();

        void setLaunched();

        bool &isLaunched();

        void setPaused(bool value);

        bool getPaused() const;

    private:
        bool _isPaused;
        bool _isLaunched = false;
        std::string _sceneSource;
        std::string _name;
        std::vector<std::shared_ptr<gameengine::AbstractBase>> _nodes;
    };
}

#endif //INDIESTUDIO_SCENE_HPP
