/*
** EPITECH PROJECT, 2022
** Collision2DHelper.cpp
** FileHelper description:
** Collision2DHelper.cpp
*/

#include "raylib/2DObject/Collision2DHelper.hpp"
#include "raylib/Math/VectorHelper.hpp"

// Basic shapes collision detection functions

bool raylib::Collision2DHelper::checkCollisionRecs(Rectangle rec1, Rectangle rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool raylib::Collision2DHelper::checkCollisionCircles(Vector2f center1, float radius1, Vector2f center2, float radius2)
{
    return CheckCollisionCircles(raylib::VectorHelper::toRaylibVector(center1), radius1, raylib::VectorHelper::toRaylibVector(center2), radius2);
}

bool raylib::Collision2DHelper::checkCollisionCircleRec(Vector2f center, float radius, Rectangle rec)
{
    return CheckCollisionCircleRec(raylib::VectorHelper::toRaylibVector(center), radius, rec);
}

bool raylib::Collision2DHelper::checkCollisionPointRec(Vector2f point, Rectangle rec)
{
    return CheckCollisionPointRec(raylib::VectorHelper::toRaylibVector(point), rec);
}

bool raylib::Collision2DHelper::checkCollisionPointCircle(Vector2f point, Vector2f center, float radius)
{
    return CheckCollisionPointCircle(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(center), radius);
}

bool raylib::Collision2DHelper::checkCollisionPointTriangle(Vector2f point, Vector2f p1, Vector2f p2, Vector2f p3)
{
    return CheckCollisionPointTriangle(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(p1), raylib::VectorHelper::toRaylibVector(p2), raylib::VectorHelper::toRaylibVector(p3));
}

/*bool raylib::Collision2DHelper::checkCollisionLines(Vector2f startPos1, Vector2f endPos1,Vector2f startPos2, Vector2f endPos2, Vector2f *collisionPoint)
{
    return CheckCollisionLines(raylib::VectorHelper::toRaylibVector(startPos1), raylib::VectorHelper::toRaylibVector(endPos1), raylib::VectorHelper::toRaylibVector(startPos2), raylib::VectorHelper::toRaylibVector(endPos2), raylib::VectorHelper::toRaylibVector(collisionPoint));
}*/

bool raylib::Collision2DHelper::checkCollisionPointLine(Vector2f point, Vector2f p1, Vector2f p2, int threshold)
{
    return CheckCollisionPointLine(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(p1), raylib::VectorHelper::toRaylibVector(p2), threshold);
}

Rectangle raylib::Collision2DHelper::getCollisionRec(Rectangle rec1, Rectangle rec2)
{
    return GetCollisionRec(rec1, rec2);
}
