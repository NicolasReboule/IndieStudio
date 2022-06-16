/*
** EPITECH PROJECT, 2022
** SceneManager.hpp
** File description:
** SceneManager.hpp
*/

#ifndef INDIESTUDIO_SCENEMANAGER_HPP
#define INDIESTUDIO_SCENEMANAGER_HPP

#include "raylib/Raylib.hpp"
#include "Scene.hpp"
#include <vector>


namespace gameengine {

    class SceneManager {
    public:
        SceneManager() = default;
        ~SceneManager() = default;

        void changeScene(const std::string &scene);

        void addScene(const std::shared_ptr<gameengine::Scene> &scene);

        void deleteScene(const std::string &scene);

        void makeLoop(raylib::RlCamera &camera);

        std::shared_ptr<gameengine::Base> getNode(const std::string& name);

        void addNode(const std::shared_ptr<gameengine::Base> &node);

        void deleteNode(const std::string &name);

        std::vector<std::shared_ptr<gameengine::Base>> getAllNodes();

        void update();

        void drawAll(raylib::RlCamera &camera);
        void draw();
        void draw2D();

        static std::shared_ptr<gameengine::SceneManager> &getInstance();

    private:
        void deleteNodeInLst();

        static std::shared_ptr<SceneManager> _instance;

        std::vector<std::string> _nodesToDelete;
        std::string _actualScene;
        std::vector<std::shared_ptr<gameengine::Scene>> _scenes;
    };
}

#endif //INDIESTUDIO_SCENEMANAGER_HPP
