/*
** EPITECH PROJECT, 2022
** Label.hpp
** File description:
** Label.hpp
*/

#ifndef INDIESTUDIO_LABEL_HPP
#define INDIESTUDIO_LABEL_HPP

#include "Node2D.hpp"

namespace gameengine::node::_2D {
    /**
     * @brief A label is a text displayed on the screen
     */
    class Label : public Node2D {
    public:
        /**
         * @brief Construct a new Label object
         * @param name the name of the label
         * @param position the position of the label
         * @param scale the scale of the label
         * @param degrees the rotation of the label
         * @param color the color of the label
         */
        explicit Label(const std::string &name, const Vector2f &position = {0, 0}, const Vector2f &scale = {1, 1},
                       const float &degrees = 0, const raylib::RlColor &color = RlColor::White);

        /**
         * @brief Destroy the Label object
         */
        ~Label() override = default;

        /**
         * @brief Initialize the label
         */
        void init() override;

        /**
         * @brief Update the label
         * @param delta the delta time
         */
        void update(const float &delta) override;

        /**
         * @brief Draw the label
         */
        void draw() override;

        /**
         * @brief Get the position of the label
         * @return the position of the label
         */
        const Vector2f &getPosition() const override;

        /**
         * @brief Set the position of the label
         * @param position the position of the label
         */
        void setPosition(const Vector2f &position) override;

        /**
         * @brief Get the scale of the label
         * @return the scale of the label
         */
        const Vector2f &getScale() const override;

        /**
         * @brief Set the scale of the label
         * @param scale the scale of the label
         */
        void setScale(const Vector2f &scale) override;

        /**
         * @brief Get the rotation of the label
         * @return the rotation of the label
         */
        float getRotationDegrees() const override;

        /**
         * @brief Set the rotation of the label
         * @param rotationDegrees the rotation of the label
         */
        void setRotationDegrees(const float &rotationDegrees) override;

        /**
         * @brief Set the color of the label
         * @param color the color of the label
         */
        void setColor(raylib::RlColor color);

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

        /**
         * @brief Set the text of the label
         * @param text the text of the label
         */
        void setText(const std::string &text);

    private:
        std::string _text; /**< The text of the label */
        raylib::text::RlText _textComponent; /**< The text component of the label */
        raylib::RlColor _color; /**< The color of the label */

        Vector2f _position; /** The position of the label */
        Vector2f _scale; /** The scale of the label */
        float _rotationDegrees; /** The rotation of the label */
    };
}

#endif //INDIESTUDIO_LABEL_HPP
