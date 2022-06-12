/*
** EPITECH PROJECT, 2022
** ColorHelper.hpp
** FileHelper description:
** ColorHelper.hpp
*/

#ifndef INDIESTUDIO_COLORHELPER_HPP
#define INDIESTUDIO_COLORHELPER_HPP

#include "raylib/Color/RlColor.hpp"
#include "raylib/Math.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Helper class for Color
     */
    class ColorHelper {
    public:
        /**
         * @brief Returns RlColor from normalized values [0..1]
         * @param normalizedColor to convert
         * @return the RlColor from normalized values
         * @see RlColor(Vector4f)
         */
        static RlColor colorFromNormalized(const Vector4f &normalizedColor);

        /**
         * @brief Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
         * @param color to convert
         * @return the HSV values for a Color
         */
        static Vector3f colorToHSV(const RlColor &color);

        /**
         * @brief Returns a RlColor from HSV values, hue [0..360], saturation/value [0..1]
         * @param hue to convert
         * @param saturation to convert
         * @param value to convert
         * @return the RlColor from HSV values
         */
        static RlColor colorFromHSV(float hue, float saturation, float value);

        /**
         * @brief Returns color with alpha applied, alpha goes from 0.0f to 1.0f
         * @param color to apply alpha to
         * @param alpha to apply
         * @return the color with alpha applied
         */
        static RlColor colorAlpha(const RlColor &color, float alpha);

        /**
         * @brief Returns src alpha-blended into dst color with tint
         * @param dst to blend into
         * @param src to blend
         * @param tint to blend with
         * @return the src alpha-blended into dst color with tint
         */
        static RlColor colorAlphaBlend(const RlColor &dst, const RlColor &src, const RlColor &tint);

        /**
         * @brief Get RlColor structure from hexadecimal value
         * @param hexValue to convert
         * @return the RlColor structure from hexadecimal value
         * @see RlColor(std::uint32_t)
         */
        static RlColor getColor(unsigned int hexValue);

        /**
         * @brief Get RlColor from a source pixel pointer of certain format
         * @param srcPtr to convert
         * @param format to convert
         * @return the RlColor from a source pixel pointer of certain format
         * @deprecated don't use this
         */
        static RlColor getPixelColor(void *srcPtr, int format);

        /**
         * @brief Set color formatted into destination pixel pointer
         * @param dstPtr to set
         * @param color to set
         * @param format to set
         * @deprecated don't use this
         */
        static void setPixelColor(void *dstPtr, const RlColor &color, int format);

        /**
         * @brief Get pixel data size in bytes for certain format
         * @param width to get
         * @param height to get
         * @param format to get
         * @return the pixel data size in bytes for certain format
         */
        static int getPixelDataSize(int width, int height, int format);
    };
}

#endif //INDIESTUDIO_COLORHELPER_HPP
