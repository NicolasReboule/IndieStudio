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
#include <memory>

///*namespace raylib::model {
//    *//**
//     * @brief Model class
//     *//*
//    class RlModel {
//    public:
//        explicit RlModel(const std::string &fileName);
//        explicit RlModel(const model::RlMesh &mesh);
//        explicit RlModel(const builder::RlMeshBuilder::MeshType &type);
//
//        ~RlModel();
//        void setBoundingBox(const BoundingBox &boundingBox);
//        void setPosition(Vector3f position);
//        void setPosition(float x, float y, float z);
//        void setScale(Vector3f scale);
//        void setScale(float x, float y, float z);
//        void setColor(const RlColor &color);
//        void setRotationAxis(Vector3f rotationAxis);
//        void setRotationAxis(float x, float y, float z);
//        void setRotationAngle(float rotationAngle);
//        void setTexture(const texture::RlTexture &texture);
//
//        void setTextureMaterial();
//
//        const Model &getModel() const;
//        const Vector3f &getPosition() const;
//        const Vector3f &getScale() const;
//        const RlColor &getColor() const;
//        const Vector3f &getRotationAxis() const;
//        const float &getRotationAngle() const;
//        const texture::RlTexture &getTexture() const;
//
//        const BoundingBox &getBoundingBox() const;
//
//        texture::RlTexture *operator->();
//    private:
//        Model _model;
//        texture::RlTexture _texture;
//        Vector3f _position;
//        RlColor _color;
//        Vector3f _scale;
//        Vector3f _rotationAxis;
//        float _rotationAngle;
//        BoundingBox _boundingBox;
//        BoundingBox _baseBoudingBox;
//    };
//}*/

namespace raylib::model {
    /**
     * @brief Encapsulation of the raylib Model
     */
    class RlModel {
    public:
        /**
         * @brief Default constructor
         */
        RlModel() : _model(), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White), _rotationAxis(0, 0, 0), _rotationAngle(0),
                    _boundingBox(), _baseBoudingBox() {} //TODO: remove this

        /**
         * @brief Construct a new RlModel object from a file
         * @param fileName the file name
         */
        explicit RlModel(const std::string &fileName);

        /**
         * @brief Construct a new RlModel object from a mesh
         * @param mesh the mesh
         */
        explicit RlModel(const std::shared_ptr<RlMesh> &mesh);

        /**
         * @brief Destroy the RlModel object
         */
        ~RlModel();

        /**
         * @brief Get the model position
         * @return the model position
         */
        const Vector3f &getPosition() const;

        /**
         * @brief Set the model position
         * @param position the position
         */
        void setPosition(const Vector3f &position);

        /**
         * @brief Set the model position
         * @param x the x position
         * @param y the y position
         * @param z the z position
         */
        void setPosition(const float &x, const float &y, const float &z);

        /**
         * @brief Get the model scale
         * @return the model scale
         */
        const Vector3f &getScale() const;

        /**
         * @brief Set the model scale
         * @param scale the scale
         */
        void setScale(const Vector3f &scale);

        /**
         * @brief Set the model scale
         * @param x the x scale
         * @param y the y scale
         * @param z the z scale
         */
        void setScale(const float &x, const float &y, const float &z);

        /**
         * @brief Get the model color
         * @return the model color
         */
        const RlColor &getColor() const;

        /**
         * @brief Set the model color
         * @param color the color
         */
        void setColor(const RlColor &color);

        /**
         * @brief Get the model rotation axis
         * @return the model rotation axis
         */
        const Vector3f &getRotationAxis() const;

        /**
         * @brief Set the model rotation axis
         * @param rotationAxis the rotation axis
         */
        void setRotationAxis(const Vector3f &rotationAxis);

        /**
         * @brief Set the model rotation axis
         * @param x the x rotation axis
         * @param y the y rotation axis
         * @param z the z rotation axis
         */
        void setRotationAxis(const float &x, const float &y, const float &z);

        /**
         * @brief Get the model rotation angle
         * @return the model rotation angle
         */
        float getRotationAngle() const;

        /**
         * @brief Set the model rotation angle
         * @param rotationAngle the rotation angle
         */
        void setRotationAngle(float rotationAngle);

        /**
         * @brief Get the model bounding box
         * @return the model bounding box
         */
        const BoundingBox &getBoundingBox() const;

        /**
         * @brief Set the model bounding box (will change the base bounding box)
         * @param boundingBox the bounding box
         */
        void setBoundingBox(const BoundingBox &boundingBox);

        /**
         * @brief Get the model bounding box at the start
         * @return the model bounding box at the start
         */
        const BoundingBox &getBaseBoundingBox() const;

        /**
         * @brief Get the raylib model
         * @return the raylib model
         */
        const Model &getModel() const;

    private:
        Model _model; /**< The raylib model */
        std::shared_ptr<RlMesh> _mesh; /**< The mesh linked to this model */
        std::shared_ptr<texture::RlTexture> _texture; /**< The texture linked to this model */
        Vector3f _position; /**< The position of the model */
        Vector3f _scale; /**< The scale of the model */
        RlColor _color; /**< The color of the model */
        Vector3f _rotationAxis; /**< The rotation axis of the model */
        float _rotationAngle; /**< The rotation angle of the model */
        BoundingBox _boundingBox; /**< The bounding box of the model */
        BoundingBox _baseBoudingBox; /**< The base bounding box of the model */
    };
}

#endif //INDIESTUDIO_RLMODEL_HPP
