/*
** EPITECH PROJECT, 2022
** Model.hpp
** FileHelper description:
** Model.hpp
*/

#ifndef INDIESTUDIO_RLMODEL_HPP
#define INDIESTUDIO_RLMODEL_HPP

#include "raylib/exception/RaylibException.hpp"
#include "raylib/Math.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include "RlMaterial.hpp"
#include "RlMesh.hpp"
#include <raylib.h>
#include <string>
#include <memory>

namespace raylib {

    namespace ex {
        /**
         * @brief Exception thrown when a RlModel has any error
         */
        class RlModelException : public RaylibException {
        public:
            /**
             * @brief Construct a new RlModelException object
             * @param message the message
             */
            explicit RlModelException(const std::string &message) : RaylibException("[RlModel] " + message) {}
        };
    }

    namespace model {
        /**
         * @brief Encapsulation of the raylib Model
         */
        class RlModel {
        public:
            /**
             * @brief Default constructor
             */
            RlModel()
                : _model(nullptr), _position(0, 0, 0), _scale(1, 1, 1), _color(RlColor::White), _rotationAxis(0, 0, 0),
                  _rotationAngle(0),
                  _boundingBox(), _baseBoudingBox()
            {
            } //TODO: remove this

            /**
             * @brief Construct a new RlModel object from a file
             * @param fileName the file name
             */
            explicit RlModel(const std::string &fileName);

            /**
             * @brief Construct a new RlModel object from a file with a custom texture
             * @param fileName the file name
             * @param textureName the texture name
             * @warning Don't use this, link the texture manually through a resource manager for better performances
             */
            explicit RlModel(const std::string &fileName, const std::string &textureName);

            /**
             * @brief Construct a new RlModel object from a mesh
             * @param mesh the mesh
             */
            explicit RlModel(const std::shared_ptr<RlMesh> &mesh);

            /**
             * @brief Copy constructor (create a copy of the raylib Model)
             * @param model the model
             */
            RlModel(const RlModel &model);

            /**
             * @brief Assignment operator (Create a copy of the raylib Model)
             * @param model the model
             * @return the RlModel
             */
            RlModel &operator=(const RlModel &model);

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
            const float &getRotationAngle() const;

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
             * @brief Get the model bouding box (will call GetModelBoudingBox)
             * @return the model bounding box
             */
            BoundingBox getDefaultBoundingBox() const;

            /**
             * @brief Get the raylib model
             * @return the raylib model
             */
            const Model &getModel() const;

            /**
             * @brief Get the texture linked to the model (can be null)
             * @return the texture
             */
            const std::shared_ptr<texture::RlTexture> &getTexture() const;

            /**
             * @brief Set the material texture of the model (Default index 0 and type MATERIAL_MAP_DIFFUSE)
             * @param texture the texture
             */
            void setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture);

            /**
             * @brief Set the material texture of the model (Default type to MATERIAL_MAP_DIFFUSE)
             * @param texture the texture
             * @param materialIndex the material index to set the texture
             */
            void setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture, const int &materialIndex);

            /**
             * @brief Set the material texture of the model
             * @param texture the texture
             * @param materialIndex the material index to set the texture
             * @param type the type of the texture (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR ...)
             */
            void setMaterialTexture(const std::shared_ptr<texture::RlTexture> &texture, const int &materialIndex, const MaterialMapIndex &type);

            /**
             * @brief Set material for a mesh
             * @param meshId the mesh id
             * @param materialId the material id
             */
            void setMeshMaterial(const int &meshId, const int &materialId);

//REMOVED: not implemented in raylib 4.0.0
//            /**
//             * @brief Set the models materials
//             * @param materials the materials
//             * @warning This function will erase the current materials
//             */
//            void setMaterials(const std::vector<RlMaterial> &materials);

        private:
            std::shared_ptr<Model> _model; /**< The raylib model */
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
}

#endif //INDIESTUDIO_RLMODEL_HPP
