/*
** EPITECH PROJECT, 2022
** Model.hpp
** FileHelper description:
** Model.hpp
*/

#ifndef INDIESTUDIO_RLMODEL_HPP
#define INDIESTUDIO_RLMODEL_HPP

#include "RlMesh.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include "raylib/Math.hpp"
#include <raylib.h>
#include <string>
#include "raylib/3DObject/RlMeshBuilder.hpp"

namespace raylib {
    class RlModel {
    public:
        explicit RlModel(const std::string &fileName, const std::string &texturePath = "",Vector3f position = {0, 0,  0}, Vector3f scale = {1,1,  1}, Color color = WHITE, Vector3f rotationAxis = {0,0,0}, float rotationAngle = 0);
        explicit RlModel(const Mesh &mesh, const std::string &texturePath = "", Vector3f position = {0, 0, 0}, Vector3f scale = {1,1,  1}, Color color = WHITE, Vector3f rotationAxis = {0,0,0}, float rotationAngle = 0);
        explicit RlModel(const RlMesh &mesh, const std::string &texturePath = "", Vector3f position = {0, 0, 0}, Vector3f scale = {1, 1, 1}, Color color = WHITE, Vector3f rotationAxis = {0, 0, 0}, float rotationAngle = 0);

        explicit RlModel(const builder::RlMeshBuilder::MeshType &type, const std::string &texturePath = "", Vector3f position = {0, 0, 0}, Vector3f scale = {1, 1, 1}, Color color = WHITE, Vector3f rotationAxis = {0, 0, 0}, float rotationAngle = 0);



        ~RlModel();

        void setBoundingBox(const BoundingBox &boundingBox);
        void setPosition(Vector3f position);
        void setPosition(float x, float y, float z);
        void setScale(Vector3f scale);
        void setScale(float x, float y, float z);
        void setColor(Color color);
        void setRotationAxis(Vector3f rotationAxis);
        void setRotationAxis(float x, float y, float z);
        void setRotationAngle(float rotationAngle);
        void setTexture(const texture::RlTexture &texture);

        void setTextureMaterial();

        const Model &getModel() const;
        const Vector3f &getPosition() const;
        const Vector3f &getScale() const;
        const Color &getColor() const;
        const Vector3f &getRotationAxis() const;
        const float &getRotationAngle() const;
        const texture::RlTexture &getTexture() const;

        const BoundingBox &getBoundingBox() const;

        texture::RlTexture *operator->();
    private:
        Model _model;
        texture::RlTexture _texture;
        Vector3f _position;
        Color _color;
        Vector3f _scale;
        Vector3f _rotationAxis;
        float _rotationAngle;
        BoundingBox _boundingBox;
        BoundingBox _startBoundingBox;
    };
}

#endif //INDIESTUDIO_RLMODEL_HPP
