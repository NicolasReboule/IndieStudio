/*
** EPITECH PROJECT, 2022
** Collision2DHelper.cpp
** FileHelper description:
** Collision2DHelper.cpp
*/

#include "raylib/2DObject/Collision2DHelper.hpp"

bool raylib::Collision2DHelper::checkCollisionRecs(const Rectangle &rec1, const Rectangle &rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool raylib::Collision2DHelper::checkCollisionCircles(const Vector2f &center1, float radius1, const Vector2f &center2, float radius2)
{
    return CheckCollisionCircles(raylib::VectorHelper::toRaylibVector(center1), radius1, raylib::VectorHelper::toRaylibVector(center2), radius2);
}

bool raylib::Collision2DHelper::checkCollisionCircleRec(const Vector2f &center, float radius, const Rectangle &rec)
{
    return CheckCollisionCircleRec(raylib::VectorHelper::toRaylibVector(center), radius, rec);
}

bool raylib::Collision2DHelper::checkCollisionPointRec(const Vector2f &point, const Rectangle &rec)
{
    return CheckCollisionPointRec(raylib::VectorHelper::toRaylibVector(point), rec);
}

bool raylib::Collision2DHelper::checkCollisionPointCircle(const Vector2f &point, const Vector2f &center, float radius)
{
    return CheckCollisionPointCircle(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(center), radius);
}

bool raylib::Collision2DHelper::checkCollisionPointTriangle(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, const Vector2f &p3)
{
    return CheckCollisionPointTriangle(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(p1), raylib::VectorHelper::toRaylibVector(p2), raylib::VectorHelper::toRaylibVector(p3));
}

bool raylib::Collision2DHelper::checkCollisionLines(const Vector2f &startPos1, const Vector2f &endPos1,
                                                    const Vector2f &startPos2, const Vector2f &endPos2,
                                                    Vector2f &collisionPoint)
{
    ::Vector2 vec = {0, 0};
    bool result = CheckCollisionLines(raylib::VectorHelper::toRaylibVector(startPos1), raylib::VectorHelper::toRaylibVector(endPos1),
                                      raylib::VectorHelper::toRaylibVector(startPos2), raylib::VectorHelper::toRaylibVector(endPos2),
                                      &vec);
    collisionPoint = raylib::VectorHelper::toVectorf(vec);
    return result;
}

bool raylib::Collision2DHelper::checkCollisionPointLine(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, int threshold)
{
    return CheckCollisionPointLine(raylib::VectorHelper::toRaylibVector(point), raylib::VectorHelper::toRaylibVector(p1), raylib::VectorHelper::toRaylibVector(p2), threshold);
}

Rectangle raylib::Collision2DHelper::getCollisionRec(const Rectangle &rec1, const Rectangle &rec2)
{
    return GetCollisionRec(rec1, rec2);
}
