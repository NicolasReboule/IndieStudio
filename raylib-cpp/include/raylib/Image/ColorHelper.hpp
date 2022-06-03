/*
** EPITECH PROJECT, 2022
** ColorHelper.hpp
** FileHelper description:
** ColorHelper.hpp
*/

#ifndef INDIESTUDIO_COLORHELPER_HPP
#define INDIESTUDIO_COLORHELPER_HPP

#include "raylib.h"

namespace raylib {
    class ColorHelper {
    public:
        // Color/pixel related functions
        static Color fade(Color color, float alpha);                                                              // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        static int colorToInt(Color color);                                                                       // Returns hexadecimal value for a Color
        static Vector4 colorNormalize(Color color);                                                               // Returns Color normalized as float [0..1]
        static Color colorFromNormalized(Vector4 normalized);                                                     // Returns Color from normalized values [0..1]
        static Vector3 colorToHSV(Color color);                                                                   // Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
        static Color colorFromHSV(float hue, float saturation, float value);                                      // Returns a Color from HSV values, hue [0..360], saturation/value [0..1]
        static Color colorAlpha(Color color, float alpha);                                                        // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        static Color colorAlphaBlend(Color dst, Color src, Color tint);                                           // Returns src alpha-blended into dst color with tint
        static Color getColor(unsigned int hexValue);                                                             // Get Color structure from hexadecimal value
        static Color getPixelColor(void *srcPtr, int format);                                                     // Get Color from a source pixel pointer of certain format
        static void setPixelColor(void *dstPtr, Color color, int format);                                         // Set color formatted into destination pixel pointer
        static int getPixelDataSize(int width, int height, int format);                                           // Get pixel data size in bytes for certain format
    private:
    };
}

#endif //INDIESTUDIO_COLORHELPER_HPP
