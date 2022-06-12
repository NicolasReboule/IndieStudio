/*
** EPITECH PROJECT, 2022
** VectorHelper.hpp
** File description:
** VectorHelper.hpp
*/

#ifndef INDIESTUDIO_VECTORHELPER_HPP
#define INDIESTUDIO_VECTORHELPER_HPP

#include "Vector.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief VectorHelper class
     */
    class VectorHelper {
    public:
        /**
         * @brief Convert a Vector2f to a raylib vector
         * @param vector the vector to convert
         * @return the converted vector
         */
        static ::Vector2 toRaylibVector(const Vector2f &vector);

        /**
         * @brief Convert a Vector3f to a raylib vector
         * @param vector the vector to convert
         * @return the converted vector
         */
        static ::Vector3 toRaylibVector(const Vector3f &vector);

        /**
         * @brief Convert a Vector4f to a raylib vector
         * @param vector the vector to convert
         * @return the converted vector
         */
        static ::Vector4 toRaylibVector(const Vector4f &vector);

        /**
         * @brief Convert a raylib vector to a Vector2f
         * @param vector the vector to convert
         * @return the converted vector
         */
        static Vector2f toVectorf(const ::Vector2 &vector);

        /**
         * @brief Convert a raylib vector to a Vector3f
         * @param vector the vector to convert
         * @return the converted vector
         */
        static Vector3f toVectorf(const ::Vector3 &vector);

        /**
         * @brief Convert a raylib vector to a Vector4f
         * @param vector the vector to convert
         * @return the converted vector
         */
        static Vector4f toVectorf(const ::Vector4 &vector);
    };
}
#endif //INDIESTUDIO_VECTORHELPER_HPP
