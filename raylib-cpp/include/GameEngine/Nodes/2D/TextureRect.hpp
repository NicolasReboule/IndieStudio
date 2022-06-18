/*
** EPITECH PROJECT, 2022
** TextureRect.hpp
** File description:
** TextureRect.hpp
*/

#ifndef INDIESTUDIO_TEXTURERECT_HPP
#define INDIESTUDIO_TEXTURERECT_HPP

#include "Node2D.hpp"

namespace gameengine::node::_2D {
    /**
     * @brief Class representing a texture rectangle
     */
    class TextureRect : public Node2D {
    public:
        /**
         * @brief Construct a new Texture Rect object
         * @param name the name of the texture rectangle
         * @param texture the texture of the rectangle (taken from the ResourceManager)
         * @param position the position of the rectangle
         * @param scale the scale of the rectangle
         * @param degrees the rotation of the rectangle
         * @param color the color of the rectangle
         */
        explicit TextureRect(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture, const Vector2f &position = {0, 0}, const Vector2f &scale = {1, 1}, const float &degrees = 0, const raylib::RlColor &color = RlColor::White);

        /**
         * @brief Destroy the Texture Rect object
         */
        ~TextureRect() override = default;

        /**
         * @brief Draw the texture rectangle
         */
        void init() override;

        /**
         * @brief Update the texture rectangle
         * @param delta the delta time
         */
        void update(const float &delta) override;

        /**
         * @brief Draw the texture rectangle
         */
        void draw() override;

        /**
         * @brief Get the position of the texture rectangle
         * @return the position of the texture rectangle
         */
        const Vector2f &getPosition() const override;

        /**
         * @brief Set the position of the texture rectangle
         * @param position the position to set
         */
        void setPosition(const Vector2f &position) override;

        /**
         * @brief Get the scale of the texture rectangle
         * @return the scale of the texture rectangle
         */
        const Vector2f &getScale() const override;

        /**
         * @brief Set the scale of the texture rectangle
         * @param scale the scale to set
         */
        void setScale(const Vector2f &scale) override;

        /**
         * @brief Get the rotation of the texture rectangle
         * @return the rotation of the texture rectangle
         */
        float getRotationDegrees() const override;

        /**
         * @brief Set the rotation of the texture rectangle
         * @param rotationDegrees the rotation to set
         */
        void setRotationDegrees(const float &rotationDegrees) override;

        /**
         * @brief Set the color of the texture rectangle
         * @param color the color to set
         */
        void setColor(const RlColor &color);

        /**
         * @brief Get the mutable color
         * @return the mutable color
         */
        raylib::RlColor &getColor();

        /**
         * @brief Get the immutable color
         * @return the immutable color
         */
        const raylib::RlColor &getColor() const;

    private:
        std::shared_ptr<raylib::texture::RlTexture> _texture; /**< The linked texture */
        raylib::RlColor _color; /**< The color of the texture rect */

        Vector2f _position; /**< The position of the texture rect */
        Vector2f _scale; /**< The scale of the texture rect */
        float _rotationDegrees; /**< The rotation of the texture rect */
    };
}

#endif //INDIESTUDIO_TEXTURERECT_HPP
