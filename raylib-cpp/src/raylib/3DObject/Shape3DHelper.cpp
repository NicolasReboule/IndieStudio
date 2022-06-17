/*
** EPITECH PROJECT, 2022
** Shape3DHelper.cpp
** FileHelper description:
** Shape3DHelper.cpp
*/

#include "raylib/3DObject/Shape3DHelper.hpp"

// Basic geometric 3D shapes drawing functions

void raylib::helper::Shape3DHelper::drawLine3D(Vector3f startPos, Vector3f endPos, RlColor color)
{
    DrawLine3D(raylib::helper::VectorHelper::toRaylibVector(startPos), raylib::helper::VectorHelper::toRaylibVector(endPos),
               color.getColor());
}

void raylib::helper::Shape3DHelper::drawPoint3D(Vector3f position, RlColor color)
{
    DrawPoint3D(raylib::helper::VectorHelper::toRaylibVector(position), color.getColor());
}

void raylib::helper::Shape3DHelper::drawCircle3D(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle,
                                         RlColor color)
{
    DrawCircle3D(raylib::helper::VectorHelper::toRaylibVector(center), radius,
                 raylib::helper::VectorHelper::toRaylibVector(rotationAxis), rotationAngle, color.getColor());
}

void raylib::helper::Shape3DHelper::drawTriangle3D(Vector3f v1, Vector3f v2, Vector3f v3, RlColor color)
{
    DrawTriangle3D(raylib::helper::VectorHelper::toRaylibVector(v1), raylib::helper::VectorHelper::toRaylibVector(v2),
                   raylib::helper::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::helper::Shape3DHelper::drawTriangleStrip3D(::Vector3 *points, int pointsCount, RlColor color)
{
    DrawTriangleStrip3D(points, pointsCount, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCube(Vector3f position, float width, float height, float length, RlColor color)
{
    DrawCube(raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCubeV(Vector3f position, Vector3f size, RlColor color)
{
    DrawCubeV(raylib::helper::VectorHelper::toRaylibVector(position), raylib::helper::VectorHelper::toRaylibVector(size),
              color.getColor());
}

void raylib::helper::Shape3DHelper::drawCubeWires(Vector3f position, float width, float height, float length, RlColor color)
{
    DrawCubeWires(raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCubeWiresV(Vector3f position, Vector3f size, RlColor color)
{
    DrawCubeWiresV(raylib::helper::VectorHelper::toRaylibVector(position), raylib::helper::VectorHelper::toRaylibVector(size),
                   color.getColor());
}

void
raylib::helper::Shape3DHelper::drawCubeTexture(Texture2D texture, Vector3f position, float width, float height, float length,
                                       RlColor color)
{
    DrawCubeTexture(texture, raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3f position, float width,
                                               float height, float length, RlColor color)
{
    DrawCubeTextureRec(texture, source, raylib::helper::VectorHelper::toRaylibVector(position), width, height, length,
                       color.getColor());
}

void raylib::helper::Shape3DHelper::drawSphere(Vector3f centerPos, float radius, RlColor color)
{
    DrawSphere(raylib::helper::VectorHelper::toRaylibVector(centerPos), radius, color.getColor());
}

void raylib::helper::Shape3DHelper::drawSphereEx(Vector3f centerPos, float radius, int rings, int slices, RlColor color)
{
    DrawSphereEx(raylib::helper::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void raylib::helper::Shape3DHelper::drawSphereWires(Vector3f centerPos, float radius, int rings, int slices, RlColor color)
{
    DrawSphereWires(raylib::helper::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCylinder(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color)
{
    DrawCylinder(raylib::helper::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices,
                 color.getColor());
}

void raylib::helper::Shape3DHelper::drawCylinderEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color)
{
    DrawCylinderEx(raylib::helper::VectorHelper::toRaylibVector(startPos), raylib::helper::VectorHelper::toRaylibVector(endPos),
                   startRadius, endRadius, sides, color.getColor());
}

void raylib::helper::Shape3DHelper::drawCylinderWires(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color)
{
    DrawCylinderWires(raylib::helper::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices,
                      color.getColor());
}

void raylib::helper::Shape3DHelper::drawCylinderWiresEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color)
{
    DrawCylinderWiresEx(raylib::helper::VectorHelper::toRaylibVector(startPos), raylib::helper::VectorHelper::toRaylibVector(endPos),
                        startRadius, endRadius, sides, color.getColor());
}

void raylib::helper::Shape3DHelper::drawPlane(Vector3f centerPos, Vector2f size, RlColor color)
{
    DrawPlane(raylib::helper::VectorHelper::toRaylibVector(centerPos), raylib::helper::VectorHelper::toRaylibVector(size),
              color.getColor());
}

void raylib::helper::Shape3DHelper::drawRay(Ray ray, RlColor color)
{
    DrawRay(ray, color.getColor());
}

void raylib::helper::Shape3DHelper::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}

void raylib::helper::Shape3DHelper::drawGrid(const Vector2i &size, const float &spacing)
{
    drawGrid(size, {0, 0, 0}, spacing);
}

void raylib::helper::Shape3DHelper::drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing)
{
    drawGrid(size, position, spacing, RlColor::Black);
}

void raylib::helper::Shape3DHelper::drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &color)
{
    rlBegin(RL_LINES);
    rlCheckRenderBatchLimit((size.x + size.y + 2) * 4);

    float halfSizeX = (float) size.x * 0.5f;
    float halfSizeZ = (float) size.y * 0.5f;

    rlColor3f(color.getRed(), color.getGreen(), color.getBlue());

    for (int i = 0; i <= size.x; i++) {
        rlVertex3f((float) i * spacing - halfSizeX + position.x, position.y, halfSizeZ + position.z);
        rlVertex3f((float) i * spacing - halfSizeX + position.x, position.y, -halfSizeZ + position.z);
    }

    for (int i = 0; i <= size.y; i++) {
        rlVertex3f(-halfSizeX + position.x, position.y, (float) i * spacing - halfSizeZ + position.z);
        rlVertex3f(halfSizeX + position.x, position.y, (float) i * spacing - halfSizeZ + position.z);
    }

    rlEnd();
}
