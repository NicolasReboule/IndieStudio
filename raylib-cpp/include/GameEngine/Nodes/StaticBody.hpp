/*
** EPITECH PROJECT, 2022
** StaticBody.hpp
** File description:
** StaticBody.hpp
*/

#ifndef INDIESTUDIO_STATICBODY_HPP
#define INDIESTUDIO_STATICBODY_HPP

#include "Node.hpp"
#include "raylib/3DObject/RlMeshBuilder.hpp"

namespace GameEngine {

    class StaticBody : public Node {
    public:
        StaticBody(const std::string &name, const std::string &modelPath, const std::string &texturePath);
        StaticBody(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath);

        ~StaticBody() override = default;

        void update(float delta) override;
        void ready() override;
        void draw() override;

        Vector3f getPosition() override;
        float getRotationDegrees() override;
        Vector3f getSCale() override;

        void setPosition(Vector3f pos) override;
        void setRotationDegrees(float degrees, Vector3f rotationAxis) override;
        void setScale(Vector3f newScale) override;

        raylib::RlModel *operator->();

        void setColor(raylib::RlColor color);

        const BoundingBox &getBoundingBox() const;

        void setBoundingBox(BoundingBox &boundingBox);

        bool &getIsCollsionEnable();

    protected:
        raylib::RlModel _model;

        bool _collisionEnable;
        Vector3f _position;
        Vector3f _scale;
        float _rotationDegrees;
    };
}

#endif //INDIESTUDIO_STATICBODY_HPP
