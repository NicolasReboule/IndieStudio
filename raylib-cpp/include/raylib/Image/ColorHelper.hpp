/*
** EPITECH PROJECT, 2022
** ColorHelper.hpp
** File description:
** ColorHelper.hpp
*/

#ifndef INDIESTUDIO_COLORHELPER_HPP
#define INDIESTUDIO_COLORHELPER_HPP

#include "raylib.h"

namespace raylib {
    class ColorHelper {
    public:
        // Color/pixel related functions
        Color fade(Color color, float alpha);                                                              // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        int colorToInt(Color color);                                                                       // Returns hexadecimal value for a Color
        Vector4 colorNormalize(Color color);                                                               // Returns Color normalized as float [0..1]
        Color colorFromNormalized(Vector4 normalized);                                                     // Returns Color from normalized values [0..1]
        Vector3 colorToHSV(Color color);                                                                   // Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
        Color colorFromHSV(float hue, float saturation, float value);                                      // Returns a Color from HSV values, hue [0..360], saturation/value [0..1]
        Color colorAlpha(Color color, float alpha);                                                        // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        Color colorAlphaBlend(Color dst, Color src, Color tint);                                           // Returns src alpha-blended into dst color with tint
        Color getColor(unsigned int hexValue);                                                             // Get Color structure from hexadecimal value
        Color getPixelColor(void *srcPtr, int format);                                                     // Get Color from a source pixel pointer of certain format
        void setPixelColor(void *dstPtr, Color color, int format);                                         // Set color formatted into destination pixel pointer
        int getPixelDataSize(int width, int height, int format);                                           // Get pixel data size in bytes for certain format
    private:
    };
}

#endif //INDIESTUDIO_COLORHELPER_HPP
