/*
** EPITECH PROJECT, 2022
** 2DNode.hpp
** File description:
** 2DNode.hpp
*/

#ifndef INDIESTUDIO_NODE2D_HPP
#define INDIESTUDIO_NODE2D_HPP

#include "GameEngine/Nodes/Base.hpp"

namespace GameEngine {

    class Node2D : public Base {
    public:
        explicit Node2D(std::string name);

        Node2D(const Node2D &) = default;

        ~Node2D() override = default;

        virtual Vector2f getPosition() = 0;

        virtual void setPosition(Vector2f pos) = 0;

        virtual Vector2f getScale() = 0;

        virtual void setScale(Vector2f newScale) = 0;

        virtual void setRotationDegrees(float degrees) = 0;
    };
}

#endif //INDIESTUDIO_NODE2D_HPP
