/*
** EPITECH PROJECT, 2022
** SceneManager.hpp
** File description:
** SceneManager.hpp
*/

#ifndef INDIESTUDIO_SCENEMANAGER_HPP
#define INDIESTUDIO_SCENEMANAGER_HPP

#include "Scene.hpp"
#include <raylib/Raylib.hpp>
#include <vector>

namespace gameengine {
    /**
     * @brief Manage all the scenes
     */
    class SceneManager {
    public:
        /**
         * @brief Change the scene
         * @param scene the new scene to display
         */
        void changeScene(const std::string &scene);

        /**
         * @brief Add a scene to the manager
         * @param scene the scene to add
         */
        void addScene(const std::shared_ptr<gameengine::Scene> &scene);

        /**
         * @brief Delete a scene from the manager
         * @param scene the scene to delete
         */
        void deleteScene(const std::string &scene);

        /**
         * @brief Function that need to be called in the game loop to manage all the scenes
         * @param camera the camera to use
         */
        void makeLoop(raylib::RlCamera &camera);

        /**
         * @brief Get a node from the current scene
         * @param name the name of the node
         * @return the node, or nullptr if not found
         */
        std::shared_ptr<gameengine::node::AbstractBase> getNode(const std::string& name);

        /**
         * @brief Get the current scene
         * @return the current scene
         */
        std::shared_ptr<gameengine::Scene> &getCurrentScene();

        /**
         * @brief Add a node to the current scene
         * @param node the node to add
         */
        void addNode(const std::shared_ptr<gameengine::node::AbstractBase> &node);

        /**
         * @brief Delete a node from the current scene
         * @param name the name of the node to delete
         */
        void deleteNode(const std::string &name);

        /**
         * @brief Delete a node, that contains the parameter in their name
         * @param containedName the name to search
         */
        void deleteNodeInclude(const std::string &containedName);

        /**
         * @brief Get all the nodes from the current scene
         * @return the nodes, or an empty vector if not found
         */
        std::vector<std::shared_ptr<gameengine::node::AbstractBase>> getAllNodes();

        /**
         * @brief Update all the nodes from the current scene
         */
        void update();

        /**
         * @brief Draw all the nodes from the current scene
         * @param camera the camera to use
         */
        void drawAll(raylib::RlCamera &camera);

        /**
         * @brief Draw 3D nodes from the current scene
         */
        void draw();

        /**
         * @brief Draw 2D nodes from the current scene
         */
        void draw2D();

        /**
         * @brief Get the instance of the scene manager
         * @return the instance
         */
        static std::shared_ptr<gameengine::SceneManager> &getInstance();

        /**
         * @brief Set if the current scene is paused
         * @param value the value to set
         */
        void setPaused(bool value);

        /**
         * @brief Get if the current scene is paused
         * @return the value
         */
        bool isPaused();

    private:
        /**
         * @brief Delete node after an update
         */
        void deleteNodeInLst();

        /**
         * @brief Change the current scene
         */
        void changeSceneInWaiting();

        static std::shared_ptr<SceneManager> _instance; /**< The instance of the scene manager */

        std::vector<std::string> _nodesToDelete; /**< The nodes to delete */
        std::vector<std::string> _nodesToDeleteIncludes; /**< The nodes to delete, that contains the parameter in their name */
        std::string _waitingScene; /**< The scene to change */
        std::string _actualScene; /**< The actual scene */
        std::vector<std::shared_ptr<gameengine::Scene>> _scenes; /**< The scenes */
    };
}

#endif //INDIESTUDIO_SCENEMANAGER_HPP
