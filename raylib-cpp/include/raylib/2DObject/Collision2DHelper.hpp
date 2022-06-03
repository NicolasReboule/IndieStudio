/*
** EPITECH PROJECT, 2022
** Collision2DHelper.hpp
** FileHelper description:
** Collision2DHelper.hpp
*/

#ifndef INDIESTUDIO_COLLISION2DHELPER_HPP
#define INDIESTUDIO_COLLISION2DHELPER_HPP

#include "raylib.h"

namespace raylib {
    class Collision2DHelper {
    public:
        // Basic shapes collision detection functions
        static bool checkCollisionRecs(Rectangle rec1, Rectangle rec2);                                            // Check collision between two rectangles
        static bool checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2);         // Check collision between two circles
        static bool checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec);                          // Check collision between circle and rectangle
        static bool checkCollisionPointRec(Vector2 point, Rectangle rec);                                          // Check if point is inside rectangle
        static bool checkCollisionPointCircle(Vector2 point, Vector2 center, float radius);                        // Check if point is inside circle
        static bool checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3);                // Check if point is inside a triangle
        static bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint); // Check the collision between two lines defined by two points each, returns collision point by reference
        static bool checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold);                 // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
        static Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2);                                          // Get collision rectangle for two rectangles collision
    private:
    };
}

#endif //INDIESTUDIO_COLLISION2DHELPER_HPP
