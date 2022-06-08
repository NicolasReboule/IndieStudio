/*
** EPITECH PROJECT, 2022
** Shape3DHelper.cpp
** FileHelper description:
** Shape3DHelper.cpp
*/

#include "raylib/3DObject/Shape3DHelper.hpp"

// Basic geometric 3D shapes drawing functions

void raylib::Shape3DHelper::drawLine3D(Vector3f startPos, Vector3f endPos, Color color)
{
    DrawLine3D(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), color);
}

void raylib::Shape3DHelper::drawPoint3D(Vector3f position, Color color)
{
    DrawPoint3D(raylib::VectorHelper::toRaylibVector(position), color);
}

void raylib::Shape3DHelper::drawCircle3D(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle, Color color)
{
    DrawCircle3D(raylib::VectorHelper::toRaylibVector(center), radius, raylib::VectorHelper::toRaylibVector(rotationAxis), rotationAngle, color);
}

void raylib::Shape3DHelper::drawTriangle3D(Vector3f v1, Vector3f v2, Vector3f v3, Color color)
{
    DrawTriangle3D(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2), raylib::VectorHelper::toRaylibVector(v3), color);
}

void raylib::Shape3DHelper::drawTriangleStrip3D(::Vector3 *points, int pointsCount, Color color)
{
    DrawTriangleStrip3D(points, pointsCount, color);
}

void raylib::Shape3DHelper::drawCube(Vector3f position, float width, float height, float length, Color color)
{
    DrawCube(raylib::VectorHelper::toRaylibVector(position), width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeV(Vector3f position, Vector3f size, Color color)
{
    DrawCubeV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size), color);
}

void raylib::Shape3DHelper::drawCubeWires(Vector3f position, float width, float height, float length, Color color)
{
    DrawCubeWires(raylib::VectorHelper::toRaylibVector(position), width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeWiresV(Vector3f position, Vector3f size, Color color)
{
    DrawCubeWiresV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size), color);
}

void raylib::Shape3DHelper::drawCubeTexture(Texture2D texture, Vector3f position, float width, float height, float length, Color color)
{
    DrawCubeTexture(texture, raylib::VectorHelper::toRaylibVector(position), width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3f position, float width, float height, float length, Color color)
{
    DrawCubeTextureRec(texture, source, raylib::VectorHelper::toRaylibVector(position), width, height, length, color);
}

void raylib::Shape3DHelper::drawSphere(Vector3f centerPos, float radius, Color color)
{
    DrawSphere(raylib::VectorHelper::toRaylibVector(centerPos), radius, color);
}

void raylib::Shape3DHelper::drawSphereEx(Vector3f centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereEx(raylib::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color);
}

void raylib::Shape3DHelper::drawSphereWires(Vector3f centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereWires(raylib::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color);
}

void raylib::Shape3DHelper::drawCylinder(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinder(raylib::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices, color);
}

void raylib::Shape3DHelper::drawCylinderEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), startRadius, endRadius, sides, color);
}

void raylib::Shape3DHelper::drawCylinderWires(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinderWires(raylib::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices, color);
}

void raylib::Shape3DHelper::drawCylinderWiresEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderWiresEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), startRadius, endRadius, sides, color);
}

void raylib::Shape3DHelper::drawPlane(Vector3f centerPos, Vector2f size, Color color)
{
    DrawPlane(raylib::VectorHelper::toRaylibVector(centerPos), raylib::VectorHelper::toRaylibVector(size), color);
}

void raylib::Shape3DHelper::drawRay(Ray ray, Color color)
{
    DrawRay(ray, color);
}

void raylib::Shape3DHelper::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}
