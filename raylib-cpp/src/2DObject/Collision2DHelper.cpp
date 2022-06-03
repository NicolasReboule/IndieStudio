/*
** EPITECH PROJECT, 2022
** Collision2DHelper.cpp
** FileHelper description:
** Collision2DHelper.cpp
*/

#include "raylib/2DObject/Collision2DHelper.hpp"

// Basic shapes collision detection functions

bool raylib::Collision2DHelper::checkCollisionRecs(Rectangle rec1, Rectangle rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool raylib::Collision2DHelper::checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
{
    return CheckCollisionCircles(center1, radius1, center2, radius2);
}

bool raylib::Collision2DHelper::checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
{
    return CheckCollisionCircleRec(center, radius, rec);
}

bool raylib::Collision2DHelper::checkCollisionPointRec(Vector2 point, Rectangle rec)
{
    return CheckCollisionPointRec(point, rec);
}

bool raylib::Collision2DHelper::checkCollisionPointCircle(Vector2 point, Vector2 center, float radius)
{
    return CheckCollisionPointCircle(point, center, radius);
}

bool raylib::Collision2DHelper::checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
{
    return CheckCollisionPointTriangle(point, p1, p2, p3);
}

bool raylib::Collision2DHelper::checkCollisionLines(Vector2 startPos1, Vector2 endPos1,Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
{
    return CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

bool raylib::Collision2DHelper::checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)
{
    return CheckCollisionPointLine(point, p1, p2, threshold);
}

Rectangle raylib::Collision2DHelper::getCollisionRec(Rectangle rec1, Rectangle rec2)
{
    return GetCollisionRec(rec1, rec2);
}
