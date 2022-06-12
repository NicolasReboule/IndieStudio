/*
** EPITECH PROJECT, 2022
** Color.hpp
** File description:
** Color.hpp
*/

#ifndef INDIESTUDIO_RLCOLOR_HPP
#define INDIESTUDIO_RLCOLOR_HPP

#include "raylib/Math.hpp"
#include <cstdint>
#include <raylib.h>

namespace raylib {
    class RlColor {
    public:
        /**
         * @brief Construct an RlColor from Raylib's Color
         * @param color the Raylib's Color
         */
        explicit RlColor(Color color);

        /**
         * @brief Construct an RlColor from RGBA values
         * @param r the red value
         * @param g the green value
         * @param b the blue value
         * @param a the alpha value
         */
        explicit RlColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

        /**
         * @brief Construct the color from 32-bit unsigned integer
         * @param color Number containing the RGBA components (in that order)
         */
        explicit RlColor(std::uint32_t color);

        /**
         * @brief Get color from normalized values [0..1]
         * @param normalizedColor the normalized color
         */
        explicit RlColor(const Vector4f &normalizedColor);

        /**
         * @brief Create a RlColor from HSV values, hue [0..360], saturation/value [0..1]
         * @param hue to convert
         * @param saturation to convert
         * @param value to convert
         */
        explicit RlColor(float hue, float saturation, float value);

        /**
         * @brief Apply alpha to the color, alpha goes from 0.0f to 1.0f
         * @param alpha to apply
         */
        void alpha(float alpha);

        /**
         * @brief Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
         * @return the HSV values for a Color
         */
        Vector3f toHSV();

        /**
         * @brief Retrieve the color as a 32-bit unsigned integer (hexadecimal)
         * @return Color represented as a 32-bit unsigned integer (hexadecimal)
         */
        std::uint32_t toInteger() const;

        /**
         * @brief Normalize the color to [0..1]
         * @return the normalized color
         */
        Vector4f normalize() const;

        /**
         * @brief Blend src into this color with tint
         * @param src the color to apply alpha to
         * @param tint the color to apply
         */
        void alphaBlend(const RlColor &src, const RlColor &tint);

        /**
         * @brief Get the Raylib's Color
         * @return the Raylib's Color
         */
        const Color &getColor() const;

        /**
         * @brief Get the red value
         * @return the red value
         */
        unsigned char getRed() const;

        /**
         * @brief Get the green value
         * @return the green value
         */
        unsigned char getGreen() const;

        /**
         * @brief Get the blue value
         * @return the blue value
         */
        unsigned char getBlue() const;

        /**
         * @brief Get the alpha value
         * @return the alpha value
         */
        unsigned char getAlpha() const;

        /**
         * @brief Check equality between two colors
         * @param other another color
         * @return true if the two color are equal, false otherwise
         */
        bool operator==(const RlColor &rhs) const;

        /**
         * @brief Check inequality between two colors
         * @param other another color
         * @return true if the two color are not equal, false otherwise
         */
        bool operator!=(const RlColor &rhs) const;

        static const RlColor LightGray;         /**< Light Gray */
        static const RlColor Gray;              /**< Gray */
        static const RlColor DarkGray;          /**< Dark Gray */
        static const RlColor Yellow;            /**< Yellow */
        static const RlColor Gold;              /**< Gold */
        static const RlColor Orange;            /**< Orange */
        static const RlColor Pink;              /**< Pink */
        static const RlColor Red;               /**< Red */
        static const RlColor Maroon;            /**< Maroon */
        static const RlColor Green;             /**< Green */
        static const RlColor Lime;              /**< Lime */
        static const RlColor DarkGreen;         /**< Dark Green */
        static const RlColor SkyBlue;           /**< Sky Blue */
        static const RlColor Blue;              /**< Blue */
        static const RlColor DarkBlue;          /**< Dark Blue */
        static const RlColor Purple;            /**< Purple */
        static const RlColor Violet;            /**< Violet */
        static const RlColor DarkPurple;        /**< Dark Purple */
        static const RlColor Beige;             /**< Beige */
        static const RlColor Brown;             /**< Brown */
        static const RlColor DarkBrown;         /**< Dark Brown */

        static const RlColor White;             /**< White */
        static const RlColor Black;             /**< Black */
        static const RlColor Transparent;       /**< Transparent (Blank) */
        static const RlColor Magenta;           /**< Magenta */
        static const RlColor RayWhite;          /**< Raylib White */

    private:
        Color _color; /**< The Raylib's Color */
    };
}

using RlColor = raylib::RlColor;

#endif //INDIESTUDIO_RLCOLOR_HPP
