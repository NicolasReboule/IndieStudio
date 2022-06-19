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
     * @brief Builder to create a RlModel easily //TODO: rework this shit
     */
    class RlModelBuilder : public IBuilder<raylib::model::RlModel> {
    public:
        /**
         * @brief Construct a new ModelBuilder object
         */
        RlModelBuilder();

        /**
         * @brief Build the RlModel
         * @throws BuilderException
         * @return the RlModel
         */
        raylib::model::RlModel build() override;

        /**
         * @brief Set the mesh
         * @param mesh Mesh of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setMesh(const std::shared_ptr<raylib::model::RlMesh> &mesh);

        /**
         * @brief Set the mesh type
         * @param meshType Mesh type of the model
         * @return the ModelBuilder object
         */
        RlModelBuilder &setMeshType(const raylib::builder::RlMeshBuilder::MeshType &meshType);

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
          * @brief Set the color
          * @param color Color of the model
          * @return the ModelBuilder object
          */
         RlModelBuilder &setColor(const RlColor &color);
    private:
        std::shared_ptr<raylib::model::RlMesh> _mesh;
        long _type;
        std::string _modelPath;
        std::string _texturePath;
        Vector3f _position;
        Vector3f _scale;
        Vector3f _rotationAxis;
        float _rotationAngle;
        RlColor _color;
    };
}
#endif //INDIESTUDIO_RLMODELBUILDER_HPP
