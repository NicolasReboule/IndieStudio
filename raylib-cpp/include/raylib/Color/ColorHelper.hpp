/*
** EPITECH PROJECT, 2022
** ColorHelper.hpp
** FileHelper description:
** ColorHelper.hpp
*/

#ifndef INDIESTUDIO_COLORHELPER_HPP
#define INDIESTUDIO_COLORHELPER_HPP

#include "raylib.h"
#include "raylib/Color/RlColor.hpp"
#include "raylib/Math.hpp"

namespace raylib {
    class ColorHelper {
    public:
        // Color/pixel related functions
        static RlColor fade(RlColor color, float alpha);                                                              // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        static int colorToInt(RlColor color);                                                                       // Returns hexadecimal value for a Color
        static Vector4 colorNormalize(RlColor color);                                                               // Returns RlColor normalized as float [0..1]
        static RlColor colorFromNormalized(Vector4 normalized);                                                     // Returns RlColor from normalized values [0..1]
        static Vector3f colorToHSV(RlColor color);                                                                   // Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
        static RlColor colorFromHSV(float hue, float saturation, float value);                                      // Returns a RlColor from HSV values, hue [0..360], saturation/value [0..1]
        static RlColor colorAlpha(RlColor color, float alpha);                                                        // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        static RlColor colorAlphaBlend(RlColor dst, RlColor src, RlColor tint);                                           // Returns src alpha-blended into dst color with tint
        static RlColor getColor(unsigned int hexValue);                                                             // Get RlColor structure from hexadecimal value
        static RlColor getPixelColor(void *srcPtr, int format);                                                     // Get RlColor from a source pixel pointer of certain format
        static void setPixelColor(void *dstPtr, RlColor color, int format);                                         // Set color formatted into destination pixel pointer
        static int getPixelDataSize(int width, int height, int format);                                           // Get pixel data size in bytes for certain format
    private:
    };
}

#endif //INDIESTUDIO_COLORHELPER_HPP
