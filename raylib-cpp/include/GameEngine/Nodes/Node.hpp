/*
** EPITECH PROJECT, 2022
** Node.hpp
** File description:
** Node.hpp
*/

#ifndef INDIESTUDIO_NODE_HPP
#define INDIESTUDIO_NODE_HPP

#include "Base.hpp"

namespace GameEngine {

    class Node : public Base {
    public:
        Node() = default;

        Node(const Node &) = default;

        ~Node() override = default;

        virtual Vector3f getPosition() = 0;

        virtual void setPosition(Vector3f pos) = 0;

        virtual Vector3f getSCale() = 0;

        virtual void setScale(Vector3f newScale) = 0;
    };
}

#endif //INDIESTUDIO_NODE_HPP
