/*
** EPITECH PROJECT, 2022
** Model.hpp
** FileHelper description:
** Model.hpp
*/

#ifndef INDIESTUDIO_RLMODEL_HPP
#define INDIESTUDIO_RLMODEL_HPP

#include "raylib.h"
#include <string>
#include "RlMesh.hpp"
#include "raylib/Texture/RlTexture.hpp"

namespace raylib {
    class RlModel {
    public:
        explicit RlModel(const std::string &fileName, const std::string &texturePath,Vector3 position = {0, 0,  0}, Vector3 scale = {1,1,  1}, Color color = GRAY, Vector3 rotationAxis = {0,0,0}, float rotationAngle = 0);
        explicit RlModel(Mesh mesh, const std::string &texturePath, Vector3 position = {0, 0, 0}, Vector3 scale = {1,1,  1}, Color color = GRAY, Vector3 rotationAxis = {0,0,0}, float rotationAngle = 0);
//        explicit RlModel(RlMesh mesh, Vector3 position = {0, 0, 0}, Vector2 scale = {1, 1, 1}, Color color = GRAY, Vector3 rotationAxis = {0,0,0}, float rotationAngle = 0);
        ~RlModel();

        void setPosition(Vector3 position);
        void setPosition(float x, float y, float z);
        void setScale(Vector3 scale);
        void setScale(float x, float y, float z);
        void setColor(Color color);
        void setRotationAxis(Vector3 rotationAxis);
        void setRotationAxis(float x, float y, float z);
        void setRotationAngle(float rotationAngle);
        void setTexture(const RlTexture &texture);

        void setTextureMaterial();

        const Model &getModel() const;
        const Vector3 &getPosition() const;
        const Vector3 &getScale() const;
        const Color &getColor() const;
        const Vector3 &getRotationAxis() const;
        const float &getRotationAngle() const;
        const RlTexture &getTexture() const;

        BoundingBox getBoundingBox() const;

        RlTexture *operator->();
    private:
        Model _model;
        RlTexture _texture;
        Vector3 _position;
        Color _color;
        Vector3 _scale;
        Vector3 _rotationAxis;
        float _rotationAngle;
    };
}

#endif //INDIESTUDIO_RLMODEL_HPP
