/*
** EPITECH PROJECT, 2022
** StaticBody.hpp
** File description:
** StaticBody.hpp
*/

#ifndef INDIESTUDIO_STATICBODY_HPP
#define INDIESTUDIO_STATICBODY_HPP

#include "Node3D.hpp"
#include "raylib/3DObject/RlMeshBuilder.hpp"

namespace gameengine::node::_3D {
    /**
     * @brief A 3D node that is not affected by physics
     */
    class StaticBody : public Node3D {
    public:
        /**
         * @brief Construct a new Static Body object
         * @param name the name of the static body
         * @param model the model of the static body
         */
        explicit StaticBody(const std::string &name, const raylib::model::RlModel &model);

        /**
         * @brief Construct a new Static Body object
         * @param name the name of the static body
         * @param model the model of the static body
         * @param texture the texture of the static body
         */
        explicit StaticBody(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        /**
         * @brief Destroy the Static Body object
         */
        ~StaticBody() override = default;

        /**
         * @brief Update the static body
         * @param delta
         */
        void update(const float &delta) override;

        /**
         * @brief Initialize the static body
         */
        void init() override;

        /**
         * @brief Draw the static body
         */
        void draw() override;

        /**
         * @brief Get the position of the static body
         * @return the position of the static body
         */
        const Vector3f &getPosition() const override;

        /**
         * @brief Get the rotation degrees of the static body
         * @return the rotation degrees of the static body
         */
        float getRotationDegrees() const override;

        /**
         * @brief Get the scale of the static body
         * @return the scale of the static body
         */
        const Vector3f &getScale() const override;

        /**
         * @brief Set the position of the static body
         * @param pos the new position of the static body
         */
        void setPosition(const Vector3f &pos) override;

        /**
         * @brief Set the rotation degrees of the static body
         * @param degrees the new rotation degrees of the static body
         * @param rotationAxis the rotation axis of the static body
         */
        void setRotationDegrees(const float &degrees, const Vector3f &rotationAxis) override;

        /**
         * @brief Set the scale of the static body
         * @param newScale the new scale of the static body
         */
        void setScale(const Vector3f &newScale) override;

        /**
         * @brief Get the raylib::model::RlModel through -> operator
         * @return the raylib::model::RlModel
         */
        raylib::model::RlModel *operator->();

        /**
         * @brief Set the color of the static body
         * @param color the new color of the static body
         */
        void setColor(const raylib::RlColor &color);

        /**
         * @brief Get the color of the static body
         * @return the color of the static body
         */
        const RlColor &getColor() const;

        /**
         * @brief Get the bounding box of the static body
         * @return the bounding box of the static body
         */
        const BoundingBox &getBoundingBox() const;

        /**
         * @brief Set the bounding box of the static body
         * @param boundingBox the new bounding box of the static body
         */
        void setBoundingBox(const BoundingBox &boundingBox);

        /**
         * @brief Check if the static body is colliding with another static body
         * @return true if the static body is colliding with another static body
         */
        const bool &hasCollisionEnabled() const;

        /**
         * @brief Set if the static body is colliding with another static body
         * @param value true if the static body is colliding with another static body
         */
        void setCollisionEnable(bool value);

        /**
         * @brief Get the mutable raylib::model::RlModel
         * @return the mutable raylib::model::RlModel
         */
        raylib::model::RlModel &getModel();

        /**
         * @brief Get the immutable raylib::model::RlModel
         * @return the immutable raylib::model::RlModel
         */
        const raylib::model::RlModel &getModel() const;

    protected:
        raylib::model::RlModel _model; /**< The raylib-cpp model */

        bool _collisionEnable; /**< If collision is enable */
    };
}

#endif //INDIESTUDIO_STATICBODY_HPP
