/*
** EPITECH PROJECT, 2022
** Shape2DHelper.hpp
** FileHelper description:
** Shape2DHelper.hpp
*/

#ifndef INDIESTUDIO_SHAPE2DHELPER_HPP
#define INDIESTUDIO_SHAPE2DHELPER_HPP

#include "raylib.h"

namespace raylib {
    class Shape2DHelper {
    public:
        // Basic shapes drawing functions
        static void drawPixel(int posX, int posY, Color color);                                                    // DrawHelper a pixel
        static void drawPixelV(Vector2 position, Color color);                                                     // DrawHelper a pixel (Vector version)
        static void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color);                 // DrawHelper a line
        static void drawLineV(Vector2 startPos, Vector2 endPos, Color color);                                      // DrawHelper a line (Vector version)
        static void drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color);                        // DrawHelper a line defining thickness
        static void drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color);                    // DrawHelper a line using cubic-bezier curves in-out
        static void drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color); //DrawHelper line using quadratic bezier curves with a control point
        static void drawLineBezierCubic(Vector2 startPos, Vector2 endPos, Vector2 startControlPos, Vector2 endControlPos, float thick, Color color); // DrawHelper line using cubic bezier curves with 2 control points
        static void drawLineStrip(Vector2 *points, int pointsCount, Color color);                                  // DrawHelper lines sequence
        static void drawCircle(int centerX, int centerY, float radius, Color color);                               // DrawHelper a color-filled circle
        static void drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color);      // DrawHelper a piece of a circle
        static void drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color); // DrawHelper circle sector outline
        static void drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2);        // DrawHelper a gradient-filled circle
        static void drawCircleV(Vector2 center, float radius, Color color);                                        // DrawHelper a color-filled circle (Vector version)
        static void drawCircleLines(int centerX, int centerY, float radius, Color color);                          // DrawHelper circle outline
        static void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color);              // DrawHelper ellipse
        static void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color);         // DrawHelper ellipse outline
        static void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color); // DrawHelper ring
        static void drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color);    // DrawHelper ring outline
        static void drawRectangle(int posX, int posY, int width, int height, Color color);                         // DrawHelper a color-filled rectangle
        static void drawRectangleV(Vector2 position, Vector2 size, Color color);                                   // DrawHelper a color-filled rectangle (Vector version)
        static void drawRectangleRec(Rectangle rec, Color color);                                                  // DrawHelper a color-filled rectangle
        static void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color);                  // DrawHelper a color-filled rectangle with pro parameters
        static void drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2); // DrawHelper a vertical-gradient-filled rectangle
        static void drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2); // DrawHelper a horizontal-gradient-filled rectangle
        static void drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4);        // DrawHelper a gradient-filled rectangle with custom vertex colors
        static void drawRectangleLines(int posX, int posY, int width, int height, Color color);                    // DrawHelper rectangle outline
        static void drawRectangleLinesEx(Rectangle rec, float lineThick, Color color);                               // DrawHelper rectangle outline with extended parameters
        static void drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color);               // DrawHelper rectangle with rounded edges
        static void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color); // DrawHelper rectangle with rounded edges outline
        static void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color);                                 // DrawHelper a color-filled triangle (vertex in counter-clockwise order!)
        static void drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color);                            // DrawHelper triangle outline (vertex in counter-clockwise order!)
        static void drawTriangleFan(Vector2 *points, int pointsCount, Color color);                                // DrawHelper a triangle fan defined by points (first vertex is the center)
        static void drawTriangleStrip(Vector2 *points, int pointsCount, Color color);                              // DrawHelper a triangle strip defined by points
        static void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color);                // DrawHelper a regular polygon (Vector version)
        static void drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color);           // DrawHelper a polygon outline of n sides
        static void drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color); // DrawHelper a polygon outline of n sides with extended parameters
    private:
    };
}

#endif //INDIESTUDIO_SHAPE2DHELPER_HPP
