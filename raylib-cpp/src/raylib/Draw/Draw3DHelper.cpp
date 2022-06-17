/*
** EPITECH PROJECT, 2022
** Draw3DHelper.cpp
** File description:
** Draw3DHelper.cpp
*/

#include "raylib/Draw/Draw3DHelper.hpp"

void raylib::helper::draw::Draw3DHelper::drawLine(const Vector3f &startPos, const Vector3f &endPos, const RlColor &color)
{
    rlCheckRenderBatchLimit(8);

    rlBegin(RL_LINES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
    rlVertex3f(startPos.x, startPos.y, startPos.z);
    rlVertex3f(endPos.x, endPos.y, endPos.z);
    rlEnd();
}

void raylib::helper::draw::Draw3DHelper::drawPoint(const Vector3f &position, const RlColor &color)
{
    rlCheckRenderBatchLimit(8);

    rlPushMatrix();
    rlTranslatef(position.x, position.y, position.z);
    rlBegin(RL_LINES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
    rlVertex3f(0.0f, 0.0f, 0.0f);
    rlVertex3f(0.0f, 0.0f, 0.1f);
    rlEnd();
    rlPopMatrix();
}

void raylib::helper::draw::Draw3DHelper::drawCircle(const Vector3f &center, const float &radius, \
const Vector3f &rotationAxis, const float &rotationAngle, const RlColor &color)
{
    rlCheckRenderBatchLimit(2 * 36);

    rlPushMatrix();
    rlTranslatef(center.x, center.y, center.z);
    rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);

    rlBegin(RL_LINES);
    for (int i = 0; i < 360; i += 10) {
        rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
        rlVertex3f(sinf(DEG2RAD * (float) i) * radius, cosf(DEG2RAD * (float) i) * radius, 0.0f);
        rlVertex3f(sinf(DEG2RAD * (float) (i + 10)) * radius, cosf(DEG2RAD * (float) (i + 10)) * radius, 0.0f);
    }
    rlEnd();
    rlPopMatrix();
}

void raylib::helper::draw::Draw3DHelper::drawTriangle3D(const Vector3f &v1, const Vector3f &v2, const Vector3f &v3, const RlColor &color)
{
    rlCheckRenderBatchLimit(3);

    rlBegin(RL_TRIANGLES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
    rlVertex3f(v1.x, v1.y, v1.z);
    rlVertex3f(v2.x, v2.y, v2.z);
    rlVertex3f(v3.x, v3.y, v3.z);
    rlEnd();
}

void raylib::helper::draw::Draw3DHelper::drawTriangleStrip3D(const std::vector<Vector3f> &points, const RlColor &color)
{
    int pointCount = (int) points.size();
    if (pointCount < 3)
        return;
    rlCheckRenderBatchLimit(3 * (pointCount - 2));

    rlBegin(RL_TRIANGLES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());

    for (int i = 2; i < pointCount; i++) {
        if ((i % 2) == 0) {
            rlVertex3f(points[i].x, points[i].y, points[i].z);
            rlVertex3f(points[i - 2].x, points[i - 2].y, points[i - 2].z);
            rlVertex3f(points[i - 1].x, points[i - 1].y, points[i - 1].z);
        } else {
            rlVertex3f(points[i].x, points[i].y, points[i].z);
            rlVertex3f(points[i - 1].x, points[i - 1].y, points[i - 1].z);
            rlVertex3f(points[i - 2].x, points[i - 2].y, points[i - 2].z);
        }
    }
    rlEnd();
}

void raylib::helper::draw::Draw3DHelper::drawCube(const Vector3f &position, const float &width, const float &height, \
const float &length, const RlColor &color)
{
    DrawCube(raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCube(const Vector3f &position, const Vector3f &size, const RlColor &color)
{
    drawCube(position, size.x, size.y, size.z, color);
}

void raylib::helper::draw::Draw3DHelper::drawCubeWires(const Vector3f &position, const float &width, const float &height, \
const float &length, const RlColor &color)
{
    DrawCubeWires(raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCubeWires(const Vector3f &position, const Vector3f &size, const RlColor &color)
{
    drawCubeWires(position, size.x, size.y, size.z, color);
}

void raylib::helper::draw::Draw3DHelper::drawCubeTexture(const raylib::texture::RlTexture &texture, const Vector3f &position, const float &width, \
const float &height, const float &length, const RlColor &color)
{
    DrawCubeTexture(texture.get(), raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCubeTextureRec(const raylib::texture::RlTexture &texture, \
const Rectangle &source, const Vector3f &position, const float &width, const float &height, const float &length, const RlColor &color)
{
    DrawCubeTextureRec(texture.get(), source, raylib::helper::VectorHelper::toRaylibVector(position), width, height, length, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawSphere(const Vector3f &centerPos, const float &radius, const RlColor &color)
{
    drawSphere(centerPos, radius, 16, 16, color);
}

void raylib::helper::draw::Draw3DHelper::drawSphere(const Vector3f &centerPos, const float &radius, const int &rings, \
const int &slices, const RlColor &color)
{
    DrawSphereEx(raylib::helper::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawSphereWires(const Vector3f &centerPos, const float &radius, const int &rings, \
const int &slices, const RlColor &color)
{
    DrawSphereWires(raylib::helper::VectorHelper::toRaylibVector(centerPos), radius, rings, slices, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCylinder(const Vector3f &position, const float &radiusTop, \
const float &radiusBottom, const float &height, const int &slices, const RlColor &color)
{
    DrawCylinder(raylib::helper::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCylinder(const Vector3f &startPos, const Vector3f &endPos, \
const float &startRadius, const float &endRadius, const int &sides, const RlColor &color)
{
    DrawCylinderEx(raylib::helper::VectorHelper::toRaylibVector(startPos), raylib::helper::VectorHelper::toRaylibVector(endPos),
                   startRadius, endRadius, sides, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCylinderWires(const Vector3f &position, const float &radiusTop, \
const float &radiusBottom, const float &height, const int &slices, const RlColor &color)
{
    DrawCylinderWires(raylib::helper::VectorHelper::toRaylibVector(position), radiusTop, radiusBottom, height, slices,color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawCylinderWires(const Vector3f &startPos, const Vector3f &endPos, \
const float &startRadius, const float &endRadius, const int &sides,  const RlColor &color)
{
    DrawCylinderWiresEx(raylib::helper::VectorHelper::toRaylibVector(startPos), raylib::helper::VectorHelper::toRaylibVector(endPos),
                        startRadius, endRadius, sides, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawPlane(const Vector3f &centerPos, const Vector2f &size, const RlColor &color)
{
    DrawPlane(raylib::helper::VectorHelper::toRaylibVector(centerPos), raylib::helper::VectorHelper::toRaylibVector(size), color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawRay(const Ray &ray, const RlColor &color)
{
    DrawRay(ray, color.getColor());
}

void raylib::helper::draw::Draw3DHelper::drawGrid(const int &slices, const float &spacing)
{
    DrawGrid(slices, spacing);
}

void raylib::helper::draw::Draw3DHelper::drawGrid(const Vector2i &size, const float &spacing)
{
    drawGrid(size, {0, 0, 0}, spacing);
}

void raylib::helper::draw::Draw3DHelper::drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing)
{
    drawGrid(size, position, spacing, RlColor::Black);
}

void raylib::helper::draw::Draw3DHelper::drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing,
                                                  const RlColor &color)
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
