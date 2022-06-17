/*
** EPITECH PROJECT, 2022
** Draw3DHelper.hpp
** File description:
** Draw3DHelper.hpp
*/

#ifndef INDIESTUDIO_DRAW3DHELPER_HPP
#define INDIESTUDIO_DRAW3DHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include <raylib.h>
#include <rlgl.h>
#include <vector>

namespace raylib::helper::draw {
    /**
     * @brief Helper class for drawing 3D shapes
     */
    class Draw3DHelper {
    public:

        /**
         * @brief Draw a line in 3D
         * @param startPos the start position of the line
         * @param endPos the end position of the line
         * @param color the color of the line
         */
        static void drawLine(const Vector3f &startPos, const Vector3f &endPos, const RlColor &color);



    };
}

#endif //INDIESTUDIO_DRAW3DHELPER_HPP
