/*
** EPITECH PROJECT, 2022
** Model.hpp
** FileHelper description:
** Model.hpp
*/

#ifndef INDIESTUDIO_RLMODEL_HPP
#define INDIESTUDIO_RLMODEL_HPP

#include <raylib.h>
#include <string>
#include "RlMeshBuilder.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include "raylib/Math.hpp"

namespace raylib {
    class RlModel {
    public:
        explicit RlModel(const std::string &fileName, const std::string &texturePath = "",Vector3f position = {0, 0,  0}, Vector3f scale = {1,1,  1}, Color color = GRAY, Vector3f rotationAxis = {0,0,0}, float rotationAngle = 0);
        explicit RlModel(Mesh mesh, const std::string &texturePath = "", Vector3f position = {0, 0, 0}, Vector3f scale = {1,1,  1}, Color color = GRAY, Vector3f rotationAxis = {0,0,0}, float rotationAngle = 0);
        explicit RlModel(const RlMeshBuilder &mesh, const std::string &texturePath = "", Vector3f position = {0, 0, 0}, Vector3f scale = {1, 1, 1}, Color color = GRAY, Vector3f rotationAxis = {0, 0, 0}, float rotationAngle = 0);
        ~RlModel();

        void setPosition(Vector3f position);
        void setPosition(float x, float y, float z);
        void setScale(Vector3f scale);
        void setScale(float x, float y, float z);
        void setColor(Color color);
        void setRotationAxis(Vector3f rotationAxis);
        void setRotationAxis(float x, float y, float z);
        void setRotationAngle(float rotationAngle);
        void setTexture(const RlTexture &texture);

        void setTextureMaterial();

        const Model &getModel() const;
        const Vector3f &getPosition() const;
        const Vector3f &getScale() const;
        const Color &getColor() const;
        const Vector3f &getRotationAxis() const;
        const float &getRotationAngle() const;
        const RlTexture &getTexture() const;

        BoundingBox getBoundingBox() const;

        RlTexture *operator->();
    private:
        Model _model;
        RlTexture _texture;
        Vector3f _position;
        Color _color;
        Vector3f _scale;
        Vector3f _rotationAxis;
        float _rotationAngle;
    };
}

#endif //INDIESTUDIO_RLMODEL_HPP
