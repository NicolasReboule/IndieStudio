/*
** EPITECH PROJECT, 2022
** Node3D.hpp
** File description:
** Node3D.hpp
*/

#ifndef INDIESTUDIO_NODE3D_HPP
#define INDIESTUDIO_NODE3D_HPP

#include "GameEngine/Nodes/AbstractBase.hpp"

namespace gameengine::node::_3D {
    /**
     * @brief A 3D Node
     */
    class Node3D : public AbstractBase {
    public:
        /**
         * @brief Construct a new Node3D object
         * @param name the name of the node
         */
        explicit Node3D(const std::string &name);

        /**
         * @brief Copy constructor
         */
        Node3D(const Node3D &) = default;

        /**
         * @brief Destruct a Node3D object
         */
        ~Node3D() override = default;

        /**
         * @brief Get the position of the node
         * @return the position of the node
         */
        virtual const Vector3f &getPosition() const = 0;

        /**
         * @brief Set the position of the node
         * @param pos the new position of the node
         */
        virtual void setPosition(const Vector3f &pos) = 0;

        /**
         * @brief Get the scale of the node
         * @return the scale of the node
         */
        virtual const Vector3f &getScale() const = 0;

        /**
         * @brief Set the scale of the node
         * @param newScale the new scale of the node
         */
        virtual void setScale(const Vector3f &newScale) = 0;

        /**
         * @brief Set the rotation of the node
         * @param degrees the new rotation of the node
         * @param rotationAxis the axis of rotation
         */
        virtual void setRotationDegrees(const float &degrees, const Vector3f &rotationAxis) = 0;
    };
}

#endif //INDIESTUDIO_NODE3D_HPP
