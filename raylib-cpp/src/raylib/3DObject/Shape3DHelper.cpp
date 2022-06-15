/*
** EPITECH PROJECT, 2022
** Shape3DHelper.cpp
** FileHelper description:
** Shape3DHelper.cpp
*/

#include "raylib/3DObject/Shape3DHelper.hpp"

// Basic geometric 3D shapes drawing functions

void raylib::Shape3DHelper::drawLine3D(Vector3f startPos, Vector3f endPos, RlColor color)
{
    DrawLine3D(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos),
               color.getColor());
}

void raylib::Shape3DHelper::drawPoint3D(Vector3f position, RlColor color)
{
    DrawPoint3D(raylib::VectorHelper::toRaylibVector(position), color.getColor());
}

void raylib::Shape3DHelper::drawCircle3D(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle,
                                         RlColor color)
{
    DrawCircle3D(raylib::VectorHelper::toRaylibVector(center), radius,
                 raylib::VectorHelper::toRaylibVector(rotationAxis), rotationAngle, color.getColor());
}

void raylib::Shape3DHelper::drawTriangle3D(Vector3f v1, Vector3f v2, Vector3f v3, RlColor color)
{
    DrawTriangle3D(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2),
                   raylib::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::Shape3DHelper::drawTriangleStrip3D(::Vector3 *points, int pointsCount, RlColor color)
{
    DrawTriangleStrip3D(points, pointsCount, color.getColor());
}

void raylib::Shape3DHelper::drawCube(Vector3f position, float width, float height, float length, RlColor color)
{
    DrawCube(raylib::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::Shape3DHelper::drawCubeV(Vector3f position, Vector3f size, RlColor color)
{
    DrawCubeV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size),
              color.getColor());
}

void raylib::Shape3DHelper::drawCubeWires(Vector3f position, float width, float height, float length, RlColor color)
{
    DrawCubeWires(raylib::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::Shape3DHelper::drawCubeWiresV(Vector3f position, Vector3f size, RlColor color)
{
    DrawCubeWiresV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size),
                   color.getColor());
}

void
raylib::Shape3DHelper::drawCubeTexture(Texture2D texture, Vector3f position, float width, float height, float length,
                                       RlColor color)
{
    DrawCubeTexture(texture, raylib::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::Shape3DHelper::drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3f position, float width,
                                               float height, float length, RlColor color)
{
    DrawCubeTextureRec(texture, source, raylib::VectorHelper::toRaylibVector(position), width, height, length,
                       color.getColor());
}

void raylib::Shape3DHelper::drawSphere(Vector3f centerPos, float radius, RlColor color)
{
    DrawSphere(raylib::VectorHelper::toRaylibVector(centerPos), radius, color.getColor());
}

void raylib::Shape3DHelper::drawSphereEx(Vector3f centerPos, float radius, int rings, int slices, RlColor color)
{
    DrawSphereEx(raylib::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void raylib::Shape3DHelper::drawSphereWires(Vector3f centerPos, float radius, int rings, int slices, RlColor color)
{
    DrawSphereWires(raylib::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void
raylib::Shape3DHelper::drawCylinder(Vector3f position, float radiusTop, float radiusBottom, float height, int slices,
                                    RlColor color)
{
    DrawCylinder(raylib::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices,
                 color.getColor());
}

void
raylib::Shape3DHelper::drawCylinderEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides,
                                      RlColor color)
{
    DrawCylinderEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos),
                   startRadius, endRadius, sides, color.getColor());
}

void raylib::Shape3DHelper::drawCylinderWires(Vector3f position, float radiusTop, float radiusBottom, float height,
                                              int slices, RlColor color)
{
    DrawCylinderWires(raylib::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices,
                      color.getColor());
}

void raylib::Shape3DHelper::drawCylinderWiresEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius,
                                                int sides, RlColor color)
{
    DrawCylinderWiresEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos),
                        startRadius, endRadius, sides, color.getColor());
}

void raylib::Shape3DHelper::drawPlane(Vector3f centerPos, Vector2f size, RlColor color)
{
    DrawPlane(raylib::VectorHelper::toRaylibVector(centerPos), raylib::VectorHelper::toRaylibVector(size),
              color.getColor());
}

void raylib::Shape3DHelper::drawRay(Ray ray, RlColor color)
{
    DrawRay(ray, color.getColor());
}

void raylib::Shape3DHelper::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}

void raylib::Shape3DHelper::drawGrid(const Vector2i &size, const float &spacing)
{
    drawGrid(size, {0, 0, 0}, spacing);
}

void raylib::Shape3DHelper::drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing)
{
    rlBegin(RL_LINES);
    rlCheckRenderBatchLimit((size.x + size.y + 2) * 4);

    float halfSizeX = (float) size.x * 0.5f;
    float halfSizeZ = (float) size.y * 0.5f;

    rlColor3f(0.5f, 0.5f, 0.5f);
    rlColor3f(0.5f, 0.5f, 0.5f);
    rlColor3f(0.5f, 0.5f, 0.5f);
    rlColor3f(0.5f, 0.5f, 0.5f);

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
