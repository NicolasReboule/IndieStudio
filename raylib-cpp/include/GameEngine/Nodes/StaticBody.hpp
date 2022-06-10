/*
** EPITECH PROJECT, 2022
** StaticBody.hpp
** File description:
** StaticBody.hpp
*/

#ifndef INDIESTUDIO_STATICBODY_HPP
#define INDIESTUDIO_STATICBODY_HPP

#include "Node.hpp"

namespace GameEngine {

    class StaticBody : public Node {
    public:
        StaticBody(std::string name, const std::string &modelPath, const std::string &texturePath);

        ~StaticBody() override = default;

        void update() override;
        void ready() override;
        void draw() override;

        Vector3f getPosition() override;
        float getRotationDegrees() override;
        Vector3f getSCale() override;

        void setPosition(Vector3f pos) override;
        void setRotationDegrees(float degrees) override;
        void setScale(Vector3f newScale) override;

    protected:
        raylib::RlModel _model;

        Vector3f _position;
        Vector3f _scale;
        float _rotationDegrees;
    };
}

#endif //INDIESTUDIO_STATICBODY_HPP
