
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
    /**
     * @brief A Scene is a node that contains other nodes.
     */
    class Scene {
    public:
        /**
         * @brief Scene constructor
         * @param name the name of the scene
         * @param sceneSource the source of the scene
         */
        explicit Scene(const std::string &name = "empty", const std::string &sceneSource = "empty");
        virtual ~Scene() = default;

        /**
         * @brief Init the scene
         */
        virtual void sceneLauncher() = 0;

        /**
         * @brief Add a node to the scene
         * @param node the node to add
         */
        void addNode(const std::shared_ptr<gameengine::node::AbstractBase> &node);

        /**
         * @brief Delete a node from the scene
         * @param name the name of the node to delete
         */
        bool deleteNode(const std::string& name);

        /**
         * @brief Delete a node from the scene
         * @param includeName the name of the node to delete
         */
        void deleteNodeIncludes(const std::string& includeName);

        /**
         * @brief Get a node from the scene
         * @param name the name of the node to get
         * @return the node, or a shared_ptr nullptr if not found
         */
        std::shared_ptr<gameengine::node::AbstractBase> getNode(const std::string& name);

        /**
         * @brief Get the nodes
         * @return the nodes
         */
        const std::vector<std::shared_ptr<gameengine::node::AbstractBase>> &getNodes() const;

        /**
         * @brief Get the name of the scene
         * @return the name of the scene
         */
        const std::string &getName() const;

        /**
         * @brief Get the scene source
         * @return the scene source
         */
        const std::string &getSceneSource() const;

        /**
         * @brief Init the scene
         */
        void init();

        /**
         * @brief Update the scene
         * @param delta the delta time (time in seconds for last frame drawn)
         */
        void update(const float &delta);

        /**
         * @brief Draw 3D element of the scene
         */
        void draw();

        /***
         * @brief Draw 2d elements of the scene
         */
        void draw2D();

        /**
         * @brief Update the scene
         * @param delta the delta time
         */
        virtual void updateScene(const float &delta) = 0;

        /**
         * @brief Init the scene
         */
        virtual void initScene() = 0;

        /**
         * @brief Destroy the scene
         */
        void destroy();

        /**
         * @brief Set the scene launched
         */
        void setLaunched();

        /**
         * @brief Check if the scene is launched
         * @return true if the scene is launched
         */
        const bool &isLaunched() const;

        /**
         * @brief Set the scene paused
         * @param value the value to set
         */
        void setPaused(const bool &value);

        /**
         * @brief Check if the scene is paused
         * @return true if the scene is paused
         */
        const bool &isPaused() const;

    private:
        bool _isPaused; /**< If the scene paused */
        bool _isLaunched = false; /**< If the scene launched */
        std::string _sceneSource; /**< Path to the scene */
        std::string _name; /**< Name of the scene */
        std::vector<std::shared_ptr<gameengine::node::AbstractBase>> _nodes; /**< List of nodes */
    };
}

#endif //INDIESTUDIO_SCENE_HPP
