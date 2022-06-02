/*
** EPITECH PROJECT, 2022
** Shape2DHelper2DHelper.cpp
** File description:
** Shape2DHelper2DHelper.cpp
*/

#include "raylib/2DObject/Shape2DHelper.hpp"

// Basic shapes drawing functions

void raylib::Shape2DHelper::drawPixel(int posX, int posY, Color color)
{
    DrawPixel(posY, posY, color);
}

void raylib::Shape2DHelper::drawPixelV(Vector2 position, Color color)
{
    DrawPixelV(position, color);
}

void raylib::Shape2DHelper::drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

void raylib::Shape2DHelper::drawLineV(Vector2 startPos, Vector2 endPos, Color color)
{
    DrawLineV(startPos, endPos, color);
}

void raylib::Shape2DHelper::drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineEx(startPos, endPos, thick, color);
}

void raylib::Shape2DHelper::drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineBezier(startPos, endPos, thick, color);
}

void raylib::Shape2DHelper::drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color)
{
    DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
}

void raylib::Shape2DHelper::drawLineBezierCubic(Vector2 startPos, Vector2 endPos, Vector2 startControlPos, Vector2 endControlPos, float thick, Color color)
{
    DrawLineBezierCubic(startPos, endPos, startControlPos, endControlPos, thick, color);
}

void raylib::Shape2DHelper::drawLineStrip(Vector2 *points, int pointsCount, Color color)
{
    DrawLineStrip(points, pointsCount, color);
}

void raylib::Shape2DHelper::drawCircle(int centerX, int centerY, float radius, Color color)
{
    DrawCircle(centerX, centerY, radius, color);
}

void raylib::Shape2DHelper::drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

void raylib::Shape2DHelper::drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

void raylib::Shape2DHelper::drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
{
    DrawCircleGradient(centerX, centerY, radius, color1, color2);
}

void raylib::Shape2DHelper::drawCircleV(Vector2 center, float radius, Color color)
{
    DrawCircleV(center, radius, color);
}

void raylib::Shape2DHelper::drawCircleLines(int centerX, int centerY, float radius, Color color)
{
    DrawCircleLines(centerX, centerY, radius, color);
}

void raylib::Shape2DHelper::drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

void raylib::Shape2DHelper::drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
}

void raylib::Shape2DHelper::drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void raylib::Shape2DHelper::drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void raylib::Shape2DHelper::drawRectangle(int posX, int posY, int width, int height, Color color)
{
    DrawRectangle(posX, posY, width, height, color);
}

void raylib::Shape2DHelper::drawRectangleV(Vector2 position, Vector2 size, Color color)
{
    DrawRectangleV(position, size, color);
}

void raylib::Shape2DHelper::drawRectangleRec(Rectangle rec, Color color)
{
    DrawRectangleRec(rec, color);
}

void raylib::Shape2DHelper::drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
{
    DrawRectanglePro(rec, origin, rotation, color);
}

void raylib::Shape2DHelper::drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientV(posX, posY, width, height, color1, color2);
}

void raylib::Shape2DHelper::drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientH(posX, posY, width, height, color1, color2);
}

void raylib::Shape2DHelper::drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
{
    DrawRectangleGradientEx(rec, col1, col2, col3, col4);
}

void raylib::Shape2DHelper::drawRectangleLines(int posX, int posY, int width, int height, Color color)
{
    DrawRectangleLines(posX, posY, width, height, color);
}

void raylib::Shape2DHelper::drawRectangleLinesEx(Rectangle rec, float lineThick, Color color)
{
    DrawRectangleLinesEx(rec, lineThick, color);
}

void raylib::Shape2DHelper::drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
{
    DrawRectangleRounded(rec, roundness, segments, color);
}

void raylib::Shape2DHelper::drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
}

void raylib::Shape2DHelper::drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangle(v1, v2, v3, color);
}

void raylib::Shape2DHelper::drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangleLines(v1, v2, v3, color);
}

void raylib::Shape2DHelper::drawTriangleFan(Vector2 *points, int pointsCount, Color color)
{
    drawTriangleFan(points, pointsCount, color);
}

void raylib::Shape2DHelper::drawTriangleStrip(Vector2 *points, int pointsCount, Color color)
{
    DrawTriangleStrip(points, pointsCount, color);
}

void raylib::Shape2DHelper::drawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPoly(center, sides, radius, rotation, color);
}

void raylib::Shape2DHelper::drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPolyLines(center, sides, radius, rotation, color);
}

void raylib::Shape2DHelper::drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)
{
    DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
}