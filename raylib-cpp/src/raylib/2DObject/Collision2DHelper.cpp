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
    return CheckCollisionCircles(raylib::helper::VectorHelper::toRaylibVector(center1), radius1, raylib::helper::VectorHelper::toRaylibVector(center2), radius2);
}

bool raylib::Collision2DHelper::checkCollisionCircleRec(const Vector2f &center, float radius, const Rectangle &rec)
{
    return CheckCollisionCircleRec(raylib::helper::VectorHelper::toRaylibVector(center), radius, rec);
}

bool raylib::Collision2DHelper::checkCollisionPointRec(const Vector2f &point, const Rectangle &rec)
{
    return CheckCollisionPointRec(raylib::helper::VectorHelper::toRaylibVector(point), rec);
}

bool raylib::Collision2DHelper::checkCollisionPointCircle(const Vector2f &point, const Vector2f &center, float radius)
{
    return CheckCollisionPointCircle(raylib::helper::VectorHelper::toRaylibVector(point), raylib::helper::VectorHelper::toRaylibVector(center), radius);
}

bool raylib::Collision2DHelper::checkCollisionPointTriangle(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, const Vector2f &p3)
{
    return CheckCollisionPointTriangle(raylib::helper::VectorHelper::toRaylibVector(point), raylib::helper::VectorHelper::toRaylibVector(p1), raylib::helper::VectorHelper::toRaylibVector(p2), raylib::helper::VectorHelper::toRaylibVector(p3));
}

bool raylib::Collision2DHelper::checkCollisionLines(const Vector2f &startPos1, const Vector2f &endPos1,
                                                    const Vector2f &startPos2, const Vector2f &endPos2,
                                                    Vector2f &collisionPoint)
{
    ::Vector2 vec = {0, 0};
    bool result = CheckCollisionLines(raylib::helper::VectorHelper::toRaylibVector(startPos1), raylib::helper::VectorHelper::toRaylibVector(endPos1),
                                      raylib::helper::VectorHelper::toRaylibVector(startPos2), raylib::helper::VectorHelper::toRaylibVector(endPos2),
                                      &vec);
    collisionPoint = raylib::helper::VectorHelper::toVectorf(vec);
    return result;
}

bool raylib::Collision2DHelper::checkCollisionPointLine(const Vector2f &point, const Vector2f &p1, const Vector2f &p2, int threshold)
{
    return CheckCollisionPointLine(raylib::helper::VectorHelper::toRaylibVector(point), raylib::helper::VectorHelper::toRaylibVector(p1), raylib::helper::VectorHelper::toRaylibVector(p2), threshold);
}

Rectangle raylib::Collision2DHelper::getCollisionRec(const Rectangle &rec1, const Rectangle &rec2)
{
    return GetCollisionRec(rec1, rec2);
}
