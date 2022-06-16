/*
** EPITECH PROJECT, 2022
** GridComponent.hpp
** File description:
** GridComponent.hpp
*/

#ifndef INDIESTUDIO_GRIDCOMPONENT_HPP
#define INDIESTUDIO_GRIDCOMPONENT_HPP

#include "GameEngine/Nodes/Node.hpp"

namespace gameengine::component {
    class GridComponent : public Node {
    public:
        explicit GridComponent(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &tint, const std::string &name);

        GridComponent(const GridComponent &) = default;

        Vector3f getPosition() override;

        void setPosition(Vector3f pos) override;

        Vector3f getScale() override;

        void setScale(Vector3f newScale) override;

        void setRotationDegrees(float degrees, Vector3f rotationAxis) override;

        void ready() override;

        void update(float delta) override;

        void draw() override;

        float getRotationDegrees() override;

    private:
        Vector2i _size;
        Vector3f _position;
        float _spacing;
        RlColor _tint;

        Vector3f _scale;
        float _rotationDegrees;
    };
}

#endif //INDIESTUDIO_GRIDCOMPONENT_HPP
