/*
** EPITECH PROJECT, 2022
** Collision2DHelper.hpp
** FileHelper description:
** Collision2DHelper.hpp
*/

#ifndef INDIESTUDIO_COLLISION2DHELPER_HPP
#define INDIESTUDIO_COLLISION2DHELPER_HPP

#include "raylib.h"
#include "raylib/Math/Vector.hpp"

namespace raylib {
    class Collision2DHelper {
    public:
        // Basic shapes collision detection functions
        static bool checkCollisionRecs(Rectangle rec1, Rectangle rec2);                                            // Check collision between two rectangles
        static bool checkCollisionCircles(Vector2f center1, float radius1, Vector2f center2, float radius2);         // Check collision between two circles
        static bool checkCollisionCircleRec(Vector2f center, float radius, Rectangle rec);                          // Check collision between circle and rectangle
        static bool checkCollisionPointRec(Vector2f point, Rectangle rec);                                          // Check if point is inside rectangle
        static bool checkCollisionPointCircle(Vector2f point, Vector2f center, float radius);                        // Check if point is inside circle
        static bool checkCollisionPointTriangle(Vector2f point, Vector2f p1, Vector2f p2, Vector2f p3);                // Check if point is inside a triangle
        //static bool checkCollisionLines(Vector2f startPos1, Vector2f endPos1, Vector2f startPos2, Vector2f endPos2, Vector2f *collisionPoint); // Check the collision between two lines defined by two points each, returns collision point by reference
        static bool checkCollisionPointLine(Vector2f point, Vector2f p1, Vector2f p2, int threshold);                 // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
        static Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2);                                          // Get collision rectangle for two rectangles collision
    private:
    };
}

#endif //INDIESTUDIO_COLLISION2DHELPER_HPP
