/*
** EPITECH PROJECT, 2022
** RlModelBuilder.hpp
** File description:
** RlModelBuilder.hpp
*/

#ifndef INDIESTUDIO_RLMODELBUILDER_HPP
#define INDIESTUDIO_RLMODELBUILDER_HPP

#include "raylib/exception/BuilderException.hpp"
#include "RlModel.hpp"
#include "RlMeshBuilder.hpp"
#include "raylib/IBuilder.hpp"
#include <memory>
#include <string>

namespace raylib::builder {
    /**
     * @brief Builder to create a RlModel easily
     */
    class RlModelBuilder : public IBuilder<raylib::model::RlModel> {
    public:
        /**
         * @brief Construct a new ModelBuilder object
         */
        RlModelBuilder();

        /**
         * @brief Set the mesh
         * @param mesh Mesh of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setMesh(const std::shared_ptr<raylib::model::RlMesh> &mesh);

        /**
         * @brief Set the mesh
         * @param mesh the mesh
         * @return the ModelBuilder object
         */
        RlModelBuilder &setMesh(const raylib::model::RlMesh &mesh);

        /**
         * @brief Set the model path
         * @param modelPath Path to the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setModelPath(const std::string &modelPath);

        /**
         * @brief Set the texture path
         * @param texturePath Path to the texture
         * @return the ModelBuilder object
         */
        RlModelBuilder &setTexturePath(const std::string &texturePath);

        /**
         * @brief Set the position
         * @param position Position of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setPosition(const Vector3f &position);

        /**
         * @brief Set the scale
         * @param scale Scale of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setScale(const Vector3f &scale);

         /**
          * @brief Set the color
          * @param color Color of the model
          * @return the ModelBuilder object
          */
         RlModelBuilder &setColor(const RlColor &color);

        /**
         * @brief Build the RlModel
         * @throws BuilderException
         * @return the RlModel
         */
        raylib::model::RlModel build() override;

        /**
         * @brief Set the rotation
         * @param rotation Rotation of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder setRotationAxis(const Vector3f &rotationAxis);

        /**
         * @brief Set the rotation angle
         * @param rotationAngle Rotation angle of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setRotationAngle(const float &rotationAngle);

        /**
         * @brief Set the bouding box of the model
         * @param boundingBox the bounding box
         * @return the ModelBuilder object
         */
        RlModelBuilder &setBoundingBox(const BoundingBox &boundingBox);

        /**
         * @brief Set the texture of the model
         * @param texture the texture
         * @return the ModelBuilder object
         */
        RlModelBuilder &setTexture(const std::shared_ptr<texture::RlTexture> &texture);

    private:
        enum RequiredParameter {
            MESH = 2,
            MODEL_PATH = 8,
            TEXTURE_PATH = 16,
            SHARED_TEXTURE = 32
        };

        enum ValidType {
            RLMODEL_PATH = MODEL_PATH,
            RLMODEL_PATH_AND_TEXTURE = MODEL_PATH | TEXTURE_PATH,
            RLMODEL_PATH_AND_SHARED_TEXTURE = MODEL_PATH | SHARED_TEXTURE,
            RLMODEL_MESH = MESH,
            RLMODEL_MESH_AND_SHARED_TEXTURE = MESH | SHARED_TEXTURE,
        };

        static std::vector<ValidType> _validTypes;

        long _flags; /**< Flag used for the builder */
        std::shared_ptr<raylib::model::RlMesh> _mesh; /**< The linked mesh*/
        std::string _modelPath; /**< The path to the model */
        std::string _texturePath; /**< The texture path */
        Vector3f _position; /**< The position of the model */
        Vector3f _scale; /**< The scale of the model */
        RlColor _color; /**< The color of the model */
        Vector3f _rotationAxis; /**< The ratation axis of the model */
        float _rotationAngle; /**< The rotation angle of the model */
        BoundingBox _boundingBox; /**< The bounding box of the model */
        bool _boundingBoxSet; /**< True if the bounding box is set */
        std::shared_ptr<texture::RlTexture> _texture; /**< The linked texture*/
    };
}
#endif //INDIESTUDIO_RLMODELBUILDER_HPP
