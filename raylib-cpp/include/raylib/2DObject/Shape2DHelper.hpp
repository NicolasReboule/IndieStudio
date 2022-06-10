/*
** EPITECH PROJECT, 2022
** Shape2DHelper.hpp
** FileHelper description:
** Shape2DHelper.hpp
*/

#ifndef INDIESTUDIO_SHAPE2DHELPER_HPP
#define INDIESTUDIO_SHAPE2DHELPER_HPP

#include "raylib.h"
#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"

namespace raylib {
    class Shape2DHelper {
    public:
        // Basic shapes drawing functions
        static void drawPixel(int posX, int posY, RlColor color);                                                    // DrawHelper a pixel
        static void drawPixelV(Vector2f position, RlColor color);                                                     // DrawHelper a pixel (Vector version)
        static void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, RlColor color);                 // DrawHelper a line
        static void drawLineV(Vector2f startPos, Vector2f endPos, RlColor color);                                      // DrawHelper a line (Vector version)
        static void drawLineEx(Vector2f startPos, Vector2f endPos, float thick, RlColor color);                        // DrawHelper a line defining thickness
        static void drawLineBezier(Vector2f startPos, Vector2f endPos, float thick, RlColor color);                    // DrawHelper a line using cubic-bezier curves in-out
        static void drawLineBezierQuad(Vector2f startPos, Vector2f endPos, Vector2f controlPos, float thick, RlColor color); //DrawHelper line using quadratic bezier curves with a control point
        static void drawLineBezierCubic(Vector2f startPos, Vector2f endPos, Vector2f startControlPos, Vector2f endControlPos, float thick, RlColor color); // DrawHelper line using cubic bezier curves with 2 control points
        static void drawLineStrip(::Vector2 *points, int pointsCount, RlColor color);                                  // DrawHelper lines sequence
        static void drawCircle(int centerX, int centerY, float radius, RlColor color);                               // DrawHelper a color-filled circle
        static void drawCircleSector(Vector2f center, float radius, float startAngle, float endAngle, int segments, RlColor color);      // DrawHelper a piece of a circle
        static void drawCircleSectorLines(Vector2f center, float radius, float startAngle, float endAngle, int segments, RlColor color); // DrawHelper circle sector outline
        static void drawCircleGradient(int centerX, int centerY, float radius, RlColor color1, RlColor color2);        // DrawHelper a gradient-filled circle
        static void drawCircleV(Vector2f center, float radius, RlColor color);                                        // DrawHelper a color-filled circle (Vector version)
        static void drawCircleLines(int centerX, int centerY, float radius, RlColor color);                          // DrawHelper circle outline
        static void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, RlColor color);              // DrawHelper ellipse
        static void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, RlColor color);         // DrawHelper ellipse outline
        static void drawRing(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, RlColor color); // DrawHelper ring
        static void drawRingLines(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, RlColor color);    // DrawHelper ring outline
        static void drawRectangle(int posX, int posY, int width, int height, RlColor color);                         // DrawHelper a color-filled rectangle
        static void drawRectangleV(Vector2f position, Vector2f size, RlColor color);                                   // DrawHelper a color-filled rectangle (Vector version)
        static void drawRectangleRec(Rectangle rec, RlColor color);                                                  // DrawHelper a color-filled rectangle
        static void drawRectanglePro(Rectangle rec, Vector2f origin, float rotation, RlColor color);                  // DrawHelper a color-filled rectangle with pro parameters
        static void drawRectangleGradientV(int posX, int posY, int width, int height, RlColor color1, RlColor color2); // DrawHelper a vertical-gradient-filled rectangle
        static void drawRectangleGradientH(int posX, int posY, int width, int height, RlColor color1, RlColor color2); // DrawHelper a horizontal-gradient-filled rectangle
        static void drawRectangleGradientEx(Rectangle rec, RlColor col1, RlColor col2, RlColor col3, RlColor col4);        // DrawHelper a gradient-filled rectangle with custom vertex colors
        static void drawRectangleLines(int posX, int posY, int width, int height, RlColor color);                    // DrawHelper rectangle outline
        static void drawRectangleLinesEx(Rectangle rec, float lineThick, RlColor color);                               // DrawHelper rectangle outline with extended parameters
        static void drawRectangleRounded(Rectangle rec, float roundness, int segments, RlColor color);               // DrawHelper rectangle with rounded edges
        static void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, float lineThick, RlColor color); // DrawHelper rectangle with rounded edges outline
        static void drawTriangle(Vector2f v1, Vector2f v2, Vector2f v3, RlColor color);                                 // DrawHelper a color-filled triangle (vertex in counter-clockwise order!)
        static void drawTriangleLines(Vector2f v1, Vector2f v2, Vector2f v3, RlColor color);                            // DrawHelper triangle outline (vertex in counter-clockwise order!)
        static void drawTriangleFan(::Vector2 *points, int pointsCount, RlColor color);                                // DrawHelper a triangle fan defined by points (first vertex is the center)
        static void drawTriangleStrip(::Vector2 *points, int pointsCount, RlColor color);                              // DrawHelper a triangle strip defined by points
        static void drawPoly(Vector2f center, int sides, float radius, float rotation, RlColor color);                // DrawHelper a regular polygon (Vector version)
        static void drawPolyLines(Vector2f center, int sides, float radius, float rotation, RlColor color);           // DrawHelper a polygon outline of n sides
        static void drawPolyLinesEx(Vector2f center, int sides, float radius, float rotation, float lineThick, RlColor color); // DrawHelper a polygon outline of n sides with extended parameters
    private:
    };
}

#endif //INDIESTUDIO_SHAPE2DHELPER_HPP
