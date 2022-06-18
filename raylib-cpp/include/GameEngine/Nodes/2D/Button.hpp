/*
** EPITECH PROJECT, 2022
** Button.hpp
** File description:
** Button.hpp
*/

#ifndef INDIESTUDIO_BUTTON_HPP
#define INDIESTUDIO_BUTTON_HPP

#include "Node2D.hpp"
#include "raylib/Math/VectorHelper.hpp"

namespace gameengine::node::_2D {

    class Button : public Node2D {
    public:
        /**
         * @brief Create a new Button object
         * @param name the name of the button
         * @param texture the texture of the button (Taken from the ResourceManager)
         */
        explicit Button(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        /**
         * @brief Update the button
         * @param delta the delta time
         */
        void update(const float &delta) override;

        /**
         * @brief Draw the button
         */
        void draw() override;

        /**
         * @brief Get the position of the button
         * @return the position of the button
         */
        const Vector2f &getPosition() const override;

        /**
         * @brief Set the position of the button
         * @param position the position of the button
         */
        void setPosition(const Vector2f &position) override;

        /**
         * @brief Get the scale of the button
         * @return the scale of the button
         */
        const Vector2f &getScale() const override;

        /**
         * @brief Set the scale of the button
         * @param scale the scale of the button
         */
        void setScale(const Vector2f &scale) override;

        /**
         * @brief Get the rotation of the button
         * @return the rotation of the button
         */
        float getRotationDegrees() const override;

        /**
         * @brief Set the rotation of the button
         * @param rotationDegrees the rotation of the button
         */
        void setRotationDegrees(const float &rotationDegrees) override;

        /**
         * @brief When the button is clicked
         */
        virtual void pressed() = 0;

        /**
         * @brief Initialize the button
         */
        void init() override;

        /**
         * @brief Set if the button is enable
         * @param value true if the button is enable, false otherwise
         */
        void setEnabled(const bool &value);

        /**
         * @brief Check if the button is enable
         * @return true if the button is enable, false otherwise
         */
        const bool &isEnabled() const;

    private:
        std::shared_ptr<raylib::texture::RlTexture> _texture; /**< The linked texture to the button */

        bool _isEnabled = true; /**< If the button is enable */

        Vector2f _position; /**< The position of the button */
        Vector2f _scale; /**< The scale of the button */
        float _rotationDegrees; /**< The rotation of the button */

        int _frameNum; /**< The frame number of the button */
        float _frameHeight; /**< The height of the frame */
        Rectangle _bounds; /**< The bounds of the button */
        Rectangle _rectangle; /**< The rectangle of the button */
        int _state; /**< The state of the button */
        bool _action; /**< If the button is clicked */
    };
}

#endif //INDIESTUDIO_BUTTON_HPP
