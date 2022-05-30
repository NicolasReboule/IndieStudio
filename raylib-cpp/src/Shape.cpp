/*
** EPITECH PROJECT, 2022
** Shape.cpp
** File description:
** Shape.cpp
*/

#include "raylib/Shape.hpp"

void raylib::Shape::setShapesTexture(Texture2D texture, Rectangle source)
{
    SetShapesTexture(texture, source);
}

// Basic shapes drawing functions

void raylib::Shape::drawPixel(int posX, int posY, Color color)
{
    DrawPixel(posY, posY, color);
}

void raylib::Shape::drawPixelV(Vector2 position, Color color)
{
    DrawPixelV(position, color);
}

void raylib::Shape::drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

void raylib::Shape::drawLineV(Vector2 startPos, Vector2 endPos, Color color)
{
    DrawLineV(startPos, endPos, color);
}

void raylib::Shape::drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineEx(startPos, endPos, thick, color);
}

void raylib::Shape::drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineBezier(startPos, endPos, thick, color);
}

void raylib::Shape::drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color)
{
    DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
}

void raylib::Shape::drawLineBezierCubic(Vector2 startPos, Vector2 endPos, Vector2 startControlPos, Vector2 endControlPos, float thick, Color color)
{
    DrawLineBezierCubic(startPos, endPos, startControlPos, endControlPos, thick, color);
}

void raylib::Shape::drawLineStrip(Vector2 *points, int pointsCount, Color color)
{
    DrawLineStrip(points, pointsCount, color);
}

void raylib::Shape::drawCircle(int centerX, int centerY, float radius, Color color)
{
    DrawCircle(centerX, centerY, radius, color);
}

void raylib::Shape::drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

void raylib::Shape::drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

void raylib::Shape::drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
{
    DrawCircleGradient(centerX, centerY, radius, color1, color2);
}

void raylib::Shape::drawCircleV(Vector2 center, float radius, Color color)
{
    DrawCircleV(center, radius, color);
}

void raylib::Shape::drawCircleLines(int centerX, int centerY, float radius, Color color)
{
    DrawCircleLines(centerX, centerY, radius, color);
}

void raylib::Shape::drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

void raylib::Shape::drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color),
}

void raylib::Shape::drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void raylib::Shape::drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void raylib::Shape::drawRectangle(int posX, int posY, int width, int height, Color color)
{
    DrawRectangle(posX, posY, width, height, color);
}

void raylib::Shape::drawRectangleV(Vector2 position, Vector2 size, Color color)
{
    DrawRectangleV(position, size, color);
}

void raylib::Shape::drawRectangleRec(Rectangle rec, Color color)
{
    DrawRectangleRec(rec, color);
}

void raylib::Shape::drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
{
    DrawRectanglePro(rec, origin, rotation, color);
}

void raylib::Shape::drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientV(posX, posY, width, height, color1, color2);
}

void raylib::Shape::drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientH(posX, posY, width, height, color1, color2);
}

void raylib::Shape::drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
{
    DrawRectangleGradientEx(rec, col1, col2, col3, col4);
}

void raylib::Shape::drawRectangleLines(int posX, int posY, int width, int height, Color color)
{
    DrawRectangleLines(posX, posY, width, height, color);
}

void raylib::Shape::drawRectangleLinesEx(Rectangle rec, float lineThick, Color color)
{
    DrawRectangleLinesEx(rec, lineThick, color);
}

void raylib::Shape::drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
{
    DrawRectangleRounded(rec, roundness, segments, color);
}

void raylib::Shape::drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
}

void raylib::Shape::drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangle(v1, v2, v3, color);
}

void raylib::Shape::drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangleLines(v1, v2, v3, color);
}

void raylib::Shape::drawTriangleFan(Vector2 *points, int pointsCount, Color color)
{
    drawTriangleFan(points, pointsCount, color);
}

void raylib::Shape::drawTriangleStrip(Vector2 *points, int pointsCount, Color color)
{
    DrawTriangleStrip(points, pointsCount, color);
}

void raylib::Shape::drawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPoly(center, sides, radius, rotation, color);
}

void raylib::Shape::drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPolyLines(center, sides, radius, rotation, color);
}

void raylib::Shape::drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)
{
    DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
}

// Basic shapes collision detection functions

bool raylib::Shape::checkCollisionRecs(Rectangle rec1, Rectangle rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool raylib::Shape::checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
{
    return CheckCollisionCircles(center1, radius1, center2, radius2);
}

bool raylib::Shape::checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
{
    return CheckCollisionCircleRec(center, radius, rec);
}

bool raylib::Shape::checkCollisionPointRec(Vector2 point, Rectangle rec)
{
    return CheckCollisionPointRec(point, rec);
}

bool raylib::Shape::checkCollisionPointCircle(Vector2 point, Vector2 center, float radius)
{
    return CheckCollisionPointCircle(point, center, radius);
}

bool raylib::Shape::checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
{
    return CheckCollisionPointTriangle(point, p1, p2, p3);
}

bool raylib::Shape::checkCollisionLines(Vector2 startPos1, Vector2 endPos1,Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
{
    return CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

bool raylib::Shape::checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)
{
    return CheckCollisionPointLine(point, p1, p2, threshold);
}

Rectangle raylib::Shape::getCollisionRec(Rectangle rec1, Rectangle rec2)
{
    return GetCollisionRec(rec1, rec2);
}
