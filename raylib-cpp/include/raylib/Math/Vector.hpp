/*
** EPITECH PROJECT, 2022
** Vector2.hpp
** File description:
** Vector2.hpp
*/

#ifndef INDIESTUDIO_VECTOR_HPP
#define INDIESTUDIO_VECTOR_HPP

#include <iostream>
#include "raylib.h"

namespace raylib {
    /**
     * @brief Struct containing a vector with 2 dimensions
     * @tparam T the type of the vector
     */
    template <typename T>
    struct Vector2 final
    {
        T x;
        T y;

        /**
         * @brief Create a Vector2
         * @param x the x value
         * @param y the y value
         */
        Vector2(T x, T y) : x(x), y(y) {}

        /**
         * @brief Compare the x & y values of two vectors
         * @param other the other vector to compare
         * @return true if it's equal, false otherwise
         */
        inline bool operator==(const Vector2<T> &other) const
        {
            return x == other.x && y == other.y;
        }

        /**
         * @brief Compare the x & y values of two vectors
         * @param other the other vector to compare
         * @return true if it's not equal, false otherwise
         */
        inline bool operator!=(const Vector2<T> &other) const
        {
            return (x != other.x || y != other.y);
        }

    };

    /**
     * @brief Struct containing a vector with 3 dimensions
     * @tparam T the type of the vector
     */
    template <typename T>
    struct Vector3 final
    {
        T x;
        T y;
        T z;

        /**
         * @brief Create a Vector3
         * @param x the x value
         * @param y the y value
         * @param z the z value
         */
        Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

        /**
         * @brief Compare the x, y & z values of two vectors
         * @param other the other vector to compare
         * @return true if it's equal, false otherwise
         */
        inline bool operator==(const Vector3<T> &other) const
        {
            return x == other.x && y == other.y && z == other.z;
        }

        /**
         * @brief Compare the x, y & z values of two vectors
         * @param other the other vector to compare
         * @return true if it's not equal, false otherwise
         */
        inline bool operator!=(const Vector3<T> &other) const
        {
            return (x != other.x || y != other.y || z != other.z);
        }

    };

}

using Vector2i = raylib::Vector2<int>;
using Vector2f = raylib::Vector2<float>;
using Vector2u = raylib::Vector2<unsigned>;

using Vector3i = raylib::Vector3<int>;
using Vector3f = raylib::Vector3<float>;
using Vector3u = raylib::Vector3<unsigned>;

inline std::ostream &operator<<(std::ostream &os, const Vector2i &vector)
{
    os << "Vector2i" << "(" << vector.x << ", " << vector.y << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector2f &vector)
{
    os << "Vector2f" << "(" << vector.x << ", " << vector.y << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector2u &vector)
{
    os << "Vector2u" << "(" << vector.x << ", " << vector.y << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector3i &vector)
{
    os << "Vector3i" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector3f &vector)
{
    os << "Vector3f" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector3u &vector)
{
    os << "Vector3u" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
}

#endif //INDIESTUDIO_VECTOR_HPP