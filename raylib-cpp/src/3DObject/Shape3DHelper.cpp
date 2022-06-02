/*
** EPITECH PROJECT, 2022
** Shape3DHelper.cpp
** File description:
** Shape3DHelper.cpp
*/

#include "raylib/3DObject/Shape3DHelper.hpp"

// Basic geometric 3D shapes drawing functions

void raylib::Shape3DHelper::drawLine3D(Vector3 startPos, Vector3 endPos, Color color)
{
    DrawLine3D(startPos, endPos, color);
}

void raylib::Shape3DHelper::drawPoint3D(Vector3 position, Color color)
{
    DrawPoint3D(position, color);
}

void raylib::Shape3DHelper::drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
{
    DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

void raylib::Shape3DHelper::drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
{
    DrawTriangle3D(v1, v2, v3, color);
}

void raylib::Shape3DHelper::drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color)
{
    DrawTriangleStrip3D(points, pointsCount, color);
}

void raylib::Shape3DHelper::drawCube(Vector3 position, float width, float height, float length, Color color)
{
    DrawCube(position, width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeV(position, size, color);
}

void raylib::Shape3DHelper::drawCubeWires(Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeWires(position, width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeWiresV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeWiresV(position, size, color);
}

void raylib::Shape3DHelper::drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTexture(texture, position, width, height, length, color);
}

void raylib::Shape3DHelper::drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTextureRec(texture, source, position, width, height, length, color);
}

void raylib::Shape3DHelper::drawSphere(Vector3 centerPos, float radius, Color color)
{
    DrawSphere(centerPos, radius, color);
}

void raylib::Shape3DHelper::drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereEx(centerPos, radius, rings, slices, color);
}

void raylib::Shape3DHelper::drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereWires(centerPos, radius, rings, slices, color);
}

void raylib::Shape3DHelper::drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

void raylib::Shape3DHelper::drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void raylib::Shape3DHelper::drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

void raylib::Shape3DHelper::drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void raylib::Shape3DHelper::drawPlane(Vector3 centerPos, Vector2 size, Color color)
{
    DrawPlane(centerPos, size, color);
}

void raylib::Shape3DHelper::drawRay(Ray ray, Color color)
{
    DrawRay(ray, color);
}

void raylib::Shape3DHelper::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}
