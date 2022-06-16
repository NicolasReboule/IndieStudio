/*
** EPITECH PROJECT, 2022
** Node.hpp
** File description:
** Node.hpp
*/

#ifndef INDIESTUDIO_NODE_HPP
#define INDIESTUDIO_NODE_HPP

#include "AbstractBase.hpp"

namespace gameengine {

    class Node : public AbstractBase {
    public:
        explicit Node(const std::string &name);

        Node(const Node &) = default;

        ~Node() override = default;

        virtual Vector3f getPosition() = 0;

        virtual void setPosition(Vector3f pos) = 0;

        virtual Vector3f getScale() = 0;

        virtual void setScale(Vector3f newScale) = 0;

        virtual void setRotationDegrees(float degrees, Vector3f rotationAxis) = 0;
    };
}

#endif //INDIESTUDIO_NODE_HPP
