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


namespace GameEngine {

    class SceneManager {
    public:
        SceneManager() = default;
        ~SceneManager() = default;

        void changeScene(const std::string &scene);



        void addScene(const std::shared_ptr<GameEngine::Scene> &scene);

        void deleteScene(const std::string &scene);

        void makeLoop(raylib::RlCamera &camera);

        std::shared_ptr<GameEngine::Base> getNode(const std::string& name);

        void addNode(const std::shared_ptr<GameEngine::Base> &node);

        void deleteNode(const std::string &name);

        std::vector<std::shared_ptr<GameEngine::Base>> getAllNodes();

        void update();

        void drawAll(raylib::RlCamera &camera);
        void draw();
        void draw2D();

        static std::shared_ptr<GameEngine::SceneManager> &getInstance();

    private:
        void deleteNodeInLst();

        void changeSceneInWaiting();

        static std::shared_ptr<SceneManager> _instance;

        std::vector<std::string> _nodesToDelete;
        std::string _waitingScene;
        std::string _actualScene;
        std::vector<std::shared_ptr<GameEngine::Scene>> _scenes;
    };
}

#endif //INDIESTUDIO_SCENEMANAGER_HPP
