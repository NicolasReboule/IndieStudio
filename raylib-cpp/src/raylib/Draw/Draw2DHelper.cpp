/*
** EPITECH PROJECT, 2022
** Draw2DHelper.cpp
** File description:
** Draw2DHelper.cpp
*/

#include "raylib/Draw/Draw2DHelper.hpp"

Texture2D raylib::Draw2DHelper::_texShapes = { 1, 1, 1, 1, 7 };
Rectangle raylib::Draw2DHelper::_texShapesRec = { 0, 0, 1, 1 };

void raylib::Draw2DHelper::setShapesTexture(const RlTexture &texture, const Rectangle &source)
{
    _texShapes = texture.get();
    _texShapesRec = source;
    SetShapesTexture(texture.get(), source);
}

void raylib::Draw2DHelper::drawPixel(int posX, int posY, const RlColor &color)
{
    DrawPixel(posX, posY, color.getColor());
}

void raylib::Draw2DHelper::drawPixel(const Vector2f &position, const RlColor &color)
{
    DrawPixelV(raylib::VectorHelper::toRaylibVector(position), color.getColor());
}

void raylib::Draw2DHelper::drawLine(int startPosX, int startPosY, int endPosX, int endPosY, const RlColor &color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, color.getColor());
}

void raylib::Draw2DHelper::drawLine(const Vector2f &startPos, const Vector2f &endPos, const RlColor &color)
{
    DrawLineV(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), color.getColor());
}

void raylib::Draw2DHelper::drawLine(const Vector2f &startPos, const Vector2f &endPos, float thick, const RlColor &color)
{
    DrawLineEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), thick, color.getColor());
}

void raylib::Draw2DHelper::drawLineBezier(const Vector2f &startPos, const Vector2f &endPos, float thick, const RlColor &color)
{
    DrawLineBezier(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), thick, color.getColor());
}

void raylib::Draw2DHelper::drawLineBezierQuad(const Vector2f &startPos, const Vector2f &endPos, const Vector2f &controlPos, float thick, const RlColor &color)
{
    DrawLineBezierQuad(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), raylib::VectorHelper::toRaylibVector(controlPos), thick, color.getColor());
}

void raylib::Draw2DHelper::drawLineBezierCubic(const Vector2f &startPos, const Vector2f &endPos, const Vector2f &startControlPos, const Vector2f &endControlPos, float thick, const RlColor &color)
{
    DrawLineBezierCubic(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), raylib::VectorHelper::toRaylibVector(startControlPos), raylib::VectorHelper::toRaylibVector(endControlPos), thick, color.getColor());
}

void raylib::Draw2DHelper::drawLineStrip(const std::vector<Vector2f> &points, const RlColor &color)
{
    int pointCount = (int) points.size();
    if (pointCount < 2)
        return;
    rlCheckRenderBatchLimit(pointCount);

    rlBegin(RL_LINES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());

    for (int i = 0; i < pointCount - 1; i++) {
        rlVertex2f(points[i].x, points[i].y);
        rlVertex2f(points[i + 1].x, points[i + 1].y);
    }
    rlEnd();
}

void raylib::Draw2DHelper::drawCircle(int centerX, int centerY, float radius, const RlColor &color)
{
    DrawCircle(centerX, centerY, radius, color.getColor());
}

void raylib::Draw2DHelper::drawCircleSector(const Vector2f &center, float radius, float startAngle, float endAngle, int segments, const RlColor &color)
{
    DrawCircleSector(raylib::VectorHelper::toRaylibVector(center), radius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Draw2DHelper::drawCircleSectorLines(const Vector2f &center, float radius, float startAngle, float endAngle, int segments, const RlColor &color)
{
    DrawCircleSectorLines(raylib::VectorHelper::toRaylibVector(center), radius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Draw2DHelper::drawCircleGradient(int centerX, int centerY, float radius, const RlColor &color1, const RlColor &color2)
{
    DrawCircleGradient(centerX, centerY, radius, color1.getColor(), color2.getColor());
}

void raylib::Draw2DHelper::drawCircle(const Vector2f &center, float radius, const RlColor &color)
{
    DrawCircleV(raylib::VectorHelper::toRaylibVector(center), radius, color.getColor());
}

void raylib::Draw2DHelper::drawCircleLines(int centerX, int centerY, float radius, const RlColor &color)
{
    DrawCircleLines(centerX, centerY, radius, color.getColor());
}

void raylib::Draw2DHelper::drawEllipse(int centerX, int centerY, float radiusH, float radiusV, const RlColor &color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, color.getColor());
}

void raylib::Draw2DHelper::drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, const RlColor &color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color.getColor());
}

void raylib::Draw2DHelper::drawRing(const Vector2f &center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, const RlColor &color)
{
    DrawRing(raylib::VectorHelper::toRaylibVector(center), innerRadius, outerRadius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Draw2DHelper::drawRingLines(const Vector2f &center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, const RlColor &color)
{
    DrawRingLines(raylib::VectorHelper::toRaylibVector(center), innerRadius, outerRadius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Draw2DHelper::drawRectangle(int posX, int posY, int width, int height, const RlColor &color)
{
    DrawRectangle(posX, posY, width, height, color.getColor());
}

void raylib::Draw2DHelper::drawRectangle(const Vector2f &position, const Vector2f &size, const RlColor &color)
{
    DrawRectangleV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size), color.getColor());
}

void raylib::Draw2DHelper::drawRectangle(const Rectangle &rec, const RlColor &color)
{
    DrawRectangleRec(rec, color.getColor());
}

void raylib::Draw2DHelper::drawRectangle(const Rectangle &rec, const Vector2f &origin, float rotation, const RlColor &color)
{
    DrawRectanglePro(rec, raylib::VectorHelper::toRaylibVector(origin), rotation, color.getColor());
}

void raylib::Draw2DHelper::drawRectangleGradientV(int posX, int posY, int width, int height, const RlColor &color1, const RlColor &color2)
{
    DrawRectangleGradientV(posX, posY, width, height, color1.getColor(), color2.getColor());
}

void raylib::Draw2DHelper::drawRectangleGradientH(int posX, int posY, int width, int height, const RlColor &color1, const RlColor &color2)
{
    DrawRectangleGradientH(posX, posY, width, height, color1.getColor(), color2.getColor());
}

void raylib::Draw2DHelper::drawRectangleGradient(const Rectangle &rec, const RlColor &col1, const RlColor &col2, const RlColor &col3, const RlColor &col4)
{
    DrawRectangleGradientEx(rec, col1.getColor(), col2.getColor(), col3.getColor(), col4.getColor());
}

void raylib::Draw2DHelper::drawRectangleLines(int posX, int posY, int width, int height, const RlColor &color)
{
    DrawRectangleLines(posX, posY, width, height, color.getColor());
}

void raylib::Draw2DHelper::drawRectangleLinesEx(const Rectangle &rec, float lineThick, const RlColor &color)
{
    DrawRectangleLinesEx(rec, lineThick, color.getColor());
}

void raylib::Draw2DHelper::drawRectangleRounded(const Rectangle &rec, float roundness, int segments, const RlColor &color)
{
    DrawRectangleRounded(rec, roundness, segments, color.getColor());
}

void raylib::Draw2DHelper::drawRectangleRoundedLines(const Rectangle &rec, float roundness, int segments, float lineThick, const RlColor &color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color.getColor());
}

void raylib::Draw2DHelper::drawTriangle(const Vector2f &v1, const Vector2f &v2, const Vector2f &v3, const RlColor &color)
{
    DrawTriangle(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2), raylib::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::Draw2DHelper::drawTriangleLines(const Vector2f &v1, const Vector2f &v2, const Vector2f &v3, const RlColor &color)
{
    DrawTriangleLines(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2), raylib::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::Draw2DHelper::drawTriangleFan(const std::vector<Vector2f> &points, const RlColor &color)
{
    int pointCount = (int) points.size();
    if (pointCount < 3)
        return;
    rlCheckRenderBatchLimit((pointCount - 2) * 4);

    rlSetTexture(_texShapes.id);
    rlBegin(RL_QUADS);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());

    for (int i = 1; i < pointCount - 1; i++) {
        rlTexCoord2f(_texShapesRec.x / (float) _texShapes.width, _texShapesRec.y/ (float) _texShapes.height);
        rlVertex2f(points[0].x, points[0].y);

        rlTexCoord2f(_texShapesRec.x / (float) _texShapes.width, (_texShapesRec.y + _texShapesRec.height)/ (float) _texShapes.height);
        rlVertex2f(points[i].x, points[i].y);

        rlTexCoord2f((_texShapesRec.x + _texShapesRec.width) / (float)_texShapes.width, (_texShapesRec.y + _texShapesRec.height) / (float) _texShapes.height);
        rlVertex2f(points[i + 1].x, points[i + 1].y);

        rlTexCoord2f((_texShapesRec.x + _texShapesRec.width) / (float) _texShapes.width, _texShapesRec.y / (float) _texShapes.height);
        rlVertex2f(points[i + 1].x, points[i + 1].y);
    }
    rlEnd();
    rlSetTexture(0);
}

void raylib::Draw2DHelper::drawTriangleStrip(const std::vector<Vector2f> &points, const RlColor &color)
{
    int pointCount = (int) points.size();
    if (pointCount < 3)
        return;
    rlCheckRenderBatchLimit(3*(pointCount - 2));

    rlBegin(RL_TRIANGLES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());

    for (int i = 2; i < pointCount; i++) {
        if ((i % 2) == 0) {
            rlVertex2f(points[i].x, points[i].y);
            rlVertex2f(points[i - 2].x, points[i - 2].y);
            rlVertex2f(points[i - 1].x, points[i - 1].y);
        } else {
            rlVertex2f(points[i].x, points[i].y);
            rlVertex2f(points[i - 1].x, points[i - 1].y);
            rlVertex2f(points[i - 2].x, points[i - 2].y);
        }
    }
    rlEnd();
}

void raylib::Draw2DHelper::drawPoly(const Vector2f &center, int sides, float radius, float rotation, const RlColor &color)
{
    DrawPoly(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, color.getColor());
}

void raylib::Draw2DHelper::drawPolyLines(const Vector2f &center, int sides, float radius, float rotation, const RlColor &color)
{
    DrawPolyLines(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, color.getColor());
}

void raylib::Draw2DHelper::drawPolyLines(const Vector2f &center, int sides, float radius, float rotation, float lineThick, const RlColor &color)
{
    DrawPolyLinesEx(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, lineThick, color.getColor());
}