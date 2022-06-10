/*
** EPITECH PROJECT, 2022
** Shape2DHelper2DHelper.cpp
** FileHelper description:
** Shape2DHelper2DHelper.cpp
*/

#include "raylib/2DObject/Shape2DHelper.hpp"

// Basic shapes drawing functions

void raylib::Shape2DHelper::drawPixel(int posX, int posY, RlColor color)
{
    DrawPixel(posX, posY, color.getColor());
}

void raylib::Shape2DHelper::drawPixelV(Vector2f position, RlColor color)
{
    DrawPixelV(raylib::VectorHelper::toRaylibVector(position), color.getColor());
}

void raylib::Shape2DHelper::drawLine(int startPosX, int startPosY, int endPosX, int endPosY, RlColor color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, color.getColor());
}

void raylib::Shape2DHelper::drawLineV(Vector2f startPos, Vector2f endPos, RlColor color)
{
    DrawLineV(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), color.getColor());
}

void raylib::Shape2DHelper::drawLineEx(Vector2f startPos, Vector2f endPos, float thick, RlColor color)
{
    DrawLineEx(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), thick, color.getColor());
}

void raylib::Shape2DHelper::drawLineBezier(Vector2f startPos, Vector2f endPos, float thick, RlColor color)
{
    DrawLineBezier(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), thick, color.getColor());
}

void raylib::Shape2DHelper::drawLineBezierQuad(Vector2f startPos, Vector2f endPos, Vector2f controlPos, float thick, RlColor color)
{
    DrawLineBezierQuad(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), raylib::VectorHelper::toRaylibVector(controlPos), thick, color.getColor());
}

void raylib::Shape2DHelper::drawLineBezierCubic(Vector2f startPos, Vector2f endPos, Vector2f startControlPos, Vector2f endControlPos, float thick, RlColor color)
{
    DrawLineBezierCubic(raylib::VectorHelper::toRaylibVector(startPos), raylib::VectorHelper::toRaylibVector(endPos), raylib::VectorHelper::toRaylibVector(startControlPos), raylib::VectorHelper::toRaylibVector(endControlPos), thick, color.getColor());
}

void raylib::Shape2DHelper::drawLineStrip(::Vector2 *points, int pointsCount, RlColor color)
{
    DrawLineStrip(points, pointsCount, color.getColor());
}

void raylib::Shape2DHelper::drawCircle(int centerX, int centerY, float radius, RlColor color)
{
    DrawCircle(centerX, centerY, radius, color.getColor());
}

void raylib::Shape2DHelper::drawCircleSector(Vector2f center, float radius, float startAngle, float endAngle, int segments, RlColor color)
{
    DrawCircleSector(raylib::VectorHelper::toRaylibVector(center), radius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Shape2DHelper::drawCircleSectorLines(Vector2f center, float radius, float startAngle, float endAngle, int segments, RlColor color)
{
    DrawCircleSectorLines(raylib::VectorHelper::toRaylibVector(center), radius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Shape2DHelper::drawCircleGradient(int centerX, int centerY, float radius, RlColor color1, RlColor color2)
{
    DrawCircleGradient(centerX, centerY, radius, color1.getColor(), color2.getColor());
}

void raylib::Shape2DHelper::drawCircleV(Vector2f center, float radius, RlColor color)
{
    DrawCircleV(raylib::VectorHelper::toRaylibVector(center), radius, color.getColor());
}

void raylib::Shape2DHelper::drawCircleLines(int centerX, int centerY, float radius, RlColor color)
{
    DrawCircleLines(centerX, centerY, radius, color.getColor());
}

void raylib::Shape2DHelper::drawEllipse(int centerX, int centerY, float radiusH, float radiusV, RlColor color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, color.getColor());
}

void raylib::Shape2DHelper::drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, RlColor color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color.getColor());
}

void raylib::Shape2DHelper::drawRing(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, RlColor color)
{
    DrawRing(raylib::VectorHelper::toRaylibVector(center), innerRadius, outerRadius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Shape2DHelper::drawRingLines(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, RlColor color)
{
    DrawRingLines(raylib::VectorHelper::toRaylibVector(center), innerRadius, outerRadius, startAngle, endAngle, segments, color.getColor());
}

void raylib::Shape2DHelper::drawRectangle(int posX, int posY, int width, int height, RlColor color)
{
    DrawRectangle(posX, posY, width, height, color.getColor());
}

void raylib::Shape2DHelper::drawRectangleV(Vector2f position, Vector2f size, RlColor color)
{
    DrawRectangleV(raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size), color.getColor());
}

void raylib::Shape2DHelper::drawRectangleRec(Rectangle rec, RlColor color)
{
    DrawRectangleRec(rec, color.getColor());
}

void raylib::Shape2DHelper::drawRectanglePro(Rectangle rec, Vector2f origin, float rotation, RlColor color)
{
    DrawRectanglePro(rec, raylib::VectorHelper::toRaylibVector(origin), rotation, color.getColor());
}

void raylib::Shape2DHelper::drawRectangleGradientV(int posX, int posY, int width, int height, RlColor color1, RlColor color2)
{
    DrawRectangleGradientV(posX, posY, width, height, color1.getColor(), color2.getColor());
}

void raylib::Shape2DHelper::drawRectangleGradientH(int posX, int posY, int width, int height, RlColor color1, RlColor color2)
{
    DrawRectangleGradientH(posX, posY, width, height, color1.getColor(), color2.getColor());
}

void raylib::Shape2DHelper::drawRectangleGradientEx(Rectangle rec, RlColor col1, RlColor col2, RlColor col3, RlColor col4)
{
    DrawRectangleGradientEx(rec, col1.getColor(), col2.getColor(), col3.getColor(), col4.getColor());
}

void raylib::Shape2DHelper::drawRectangleLines(int posX, int posY, int width, int height, RlColor color)
{
    DrawRectangleLines(posX, posY, width, height, color.getColor());
}

void raylib::Shape2DHelper::drawRectangleLinesEx(Rectangle rec, float lineThick, RlColor color)
{
    DrawRectangleLinesEx(rec, lineThick, color.getColor());
}

void raylib::Shape2DHelper::drawRectangleRounded(Rectangle rec, float roundness, int segments, RlColor color)
{
    DrawRectangleRounded(rec, roundness, segments, color.getColor());
}

void raylib::Shape2DHelper::drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, float lineThick, RlColor color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color.getColor());
}

void raylib::Shape2DHelper::drawTriangle(Vector2f v1, Vector2f v2, Vector2f v3, RlColor color)
{
    DrawTriangle(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2), raylib::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::Shape2DHelper::drawTriangleLines(Vector2f v1, Vector2f v2, Vector2f v3, RlColor color)
{
    DrawTriangleLines(raylib::VectorHelper::toRaylibVector(v1), raylib::VectorHelper::toRaylibVector(v2), raylib::VectorHelper::toRaylibVector(v3), color.getColor());
}

void raylib::Shape2DHelper::drawTriangleFan(::Vector2 *points, int pointsCount, RlColor color)
{
    DrawTriangleFan(points, pointsCount, color.getColor());
}

void raylib::Shape2DHelper::drawTriangleStrip(::Vector2 *points, int pointsCount, RlColor color)
{
    DrawTriangleStrip(points, pointsCount, color.getColor());
}

void raylib::Shape2DHelper::drawPoly(Vector2f center, int sides, float radius, float rotation, RlColor color)
{
    DrawPoly(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, color.getColor());
}

void raylib::Shape2DHelper::drawPolyLines(Vector2f center, int sides, float radius, float rotation, RlColor color)
{
    DrawPolyLines(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, color.getColor());
}

void raylib::Shape2DHelper::drawPolyLinesEx(Vector2f center, int sides, float radius, float rotation, float lineThick, RlColor color)
{
    DrawPolyLinesEx(raylib::VectorHelper::toRaylibVector(center), sides, radius, rotation, lineThick, color.getColor());
}