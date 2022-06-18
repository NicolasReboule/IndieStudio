/*
** EPITECH PROJECT, 2022
** Grid3D.hpp
** File description:
** Grid3D.hpp
*/

#ifndef INDIESTUDIO_GRID3D_HPP
#define INDIESTUDIO_GRID3D_HPP

#include "GameEngine/Nodes/3D/Node3D.hpp"

namespace gameengine::node::_3D {
    /**
     * @brief A 3D Grid
     */
    class Grid3D : public Node3D {
    public:
        /**
         * @brief Construct a new Grid3D object
         * @param size the size of the grid
         * @param position the position of the grid
         * @param spacing the spacing of the grid
         * @param tint the tint of the grid
         * @param name the name of the grid
         */
        explicit Grid3D(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &tint, const std::string &name);

        /**
         * @brief Copy constructor
         */
        Grid3D(const Grid3D &) = default;

        /**
         * @brief Get the position of the grid
         * @return the position of the grid
         */
        const Vector3f &getPosition() const override;

        /**
         * @brief Set the position of the grid
         * @param pos the new position of the grid
         */
        void setPosition(const Vector3f &pos) override;

        /**
         * @brief Get the scale of the grid
         * @return the scale of the grid
         */
        const Vector3f &getScale() const override;

        /**
         * @brief Set the scale of the grid
         * @param newScale the new scale of the grid
         */
        void setScale(const Vector3f &newScale) override;

        /**
         * @brief Get the rotation of the grid
         * @param degrees the new rotation of the grid
         * @param rotationAxis the axis of rotation
         */
        void setRotationDegrees(const float &degrees, const Vector3f &rotationAxis) override;

        /**
         * @brief Initialize the grid
         */
        void init() override;

        /**
         * @brief Update the grid
         * @param delta the delta time
         */
        void update(const float &delta) override;

        /**
         * @brief Draw the grid
         */
        void draw() override;

        /**
         * @brief Draw the grid
         * @return the grid
         */
        float getRotationDegrees() const override;

        /**
         * @brief Set the grid size
         * @param size the new size of the grid
         */
        void setSize(const Vector2i &size);

        /**
         * @brief Set the grid spacing
         * @param spacing the new spacing of the grid
         */
        void setSpacing(const float &spacing);

        /**
         * @brief
         * @param tint
         */
        void setTint(const RlColor &tint);

    private:
        Vector2i _size; /**< The size of the grid */
        Vector3f _position; /**< The position of the grid */
        float _spacing; /**< The spacing of the grid */
        RlColor _tint; /**< The tint of the grid */

        Vector3f _scale; /**< The scale of the grid. Unused */
    };
}

#endif //INDIESTUDIO_GRID3D_HPP
