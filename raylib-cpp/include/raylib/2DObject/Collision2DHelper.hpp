/*
** EPITECH PROJECT, 2022
** Collision2DHelper.hpp
** FileHelper description:
** Collision2DHelper.hpp
*/

#ifndef INDIESTUDIO_COLLISION2DHELPER_HPP
#define INDIESTUDIO_COLLISION2DHELPER_HPP

#include "raylib/Math/VectorHelper.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Basic shapes collision detection functions
     */
    class Collision2DHelper {
    public:

        /**
         * @brief Check if two rectangles are colliding
         * @param rec1 the first rectangle
         * @param rec2 the second rectangle
         * @return true if the rectangles are colliding, false otherwise
         */
        static bool checkCollisionRecs(const Rectangle &rec1, const Rectangle &rec2);

        /**
         * @brief Check if two circles are colliding
         * @param center1 the first circle center
         * @param radius1 the first circle radius
         * @param center2 the second circle center
         * @param radius2 the second circle radius
         * @return true if the circles are colliding, false otherwise
         */
        static bool checkCollisionCircles(const Vector2f &center1, float radius1, const Vector2f &center2, float radius2);

        /**
         * @brief Check if a circle is colliding with a rectangle
         * @param center the circle center
         * @param radius the circle radius
         * @param rec the rectangle
         * @return true if the circle is colliding with the rectangle, false otherwise
         */
        static bool checkCollisionCircleRec(const Vector2f &center, float radius, const Rectangle &rec);

        /**
         * @brief Check if point is inside rectangle
         * @param point the point
         * @param rec the rectangle
         * @return true if the point is colliding with the rectangle, false otherwise
         */
        static bool checkCollisionPointRec(const Vector2f &point, const Rectangle &rec);

        /**
         * @brief Check if point is inside circle
         * @param point the point
         * @param center the circle center
         * @param radius the circle radius
         * @return true if the point is colliding with the circle, false otherwise
         */
        static bool checkCollisionPointCircle(const Vector2f &point, const Vector2f &center, float radius);

        /**
         * @brief Check if point is inside a triangle
         * @param point the point
         * @param p1 the first triangle point
         * @param p2 the second triangle point
         * @param p3 the third triangle point
         * @return true if the point is colliding with the triangle, false otherwise
         */
        static bool checkCollisionPointTriangle(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, const Vector2f &p3);

        /**
         * @brief Check the collision between two lines defined by two points each, returns collision point by reference
         * @param startPos1 the first line start position
         * @param endPos1 the first line end position
         * @param startPos2 the second line start position
         * @param endPos2 the second line end position
         * @param collisionPoint the collision point (stored in it)
         * @return true if the lines are colliding, false otherwise
         */
        static bool checkCollisionLines(const Vector2f &startPos1, const Vector2f &endPos1, const Vector2f &startPos2, const Vector2f &endPos2, Vector2f &collisionPoint);

        /**
         * @brief Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
         * @param point the point
         * @param p1 the first line point
         * @param p2 the second line point
         * @param threshold the margin in pixels
         * @return true if the point is colliding with the line, false otherwise
         */
        static bool checkCollisionPointLine(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, int threshold);

        /**
         * @brief Get collision rectangle for two rectangles collision
         * @param rec1 the first rectangle
         * @param rec2 the second rectangle
         * @return the collision rectangle
         */
        static Rectangle getCollisionRec(const Rectangle &rec1, const Rectangle &rec2);
    };
}

#endif //INDIESTUDIO_COLLISION2DHELPER_HPP
