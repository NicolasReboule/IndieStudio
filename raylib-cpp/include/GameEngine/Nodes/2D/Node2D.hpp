/*
** EPITECH PROJECT, 2022
** 2DNode.hpp
** File description:
** 2DNode.hpp
*/

#ifndef INDIESTUDIO_NODE2D_HPP
#define INDIESTUDIO_NODE2D_HPP

#include "GameEngine/Nodes/AbstractBase.hpp"

namespace gameengine::node::_2D {
    /**
     * @brief A 2D node
     */
    class Node2D : public AbstractBase {
    public:
        /**
         * @brief Construct a new Node2D object
         * @param name the name of the node
         */
        explicit Node2D(const std::string &name);

        /**
         * @brief Copy constructor
         */
        Node2D(const Node2D &) = default;

        /**
         * @brief Destruct the Node2D object
         */
        ~Node2D() override = default;

        /**
         * @brief Get the position of the node
         * @return the position of the node
         */
        virtual const Vector2f &getPosition() const = 0;

        /**
         * @brief Set the position of the node
         * @param pos the position to set
         */
        virtual void setPosition(const Vector2f &pos) = 0;

        /**
         * @brief Get the scale of the node
         * @return the scale of the node
         */
        virtual const Vector2f &getScale() const = 0;

        /**
         * @brief Set the scale of the node
         * @param newScale the scale to set
         */
        virtual void setScale(const Vector2f &newScale) = 0;

        /**
         * @brief Get the rotation of the node
         * @param degrees the rotation in degrees
         */
        virtual void setRotationDegrees(const float &degrees) = 0;
    };
}

#endif //INDIESTUDIO_NODE2D_HPP
