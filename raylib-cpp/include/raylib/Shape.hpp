/*
** EPITECH PROJECT, 2022
** Shape.hpp
** File description:
** Shape.hpp
*/

#ifndef INDIESTUDIO_SHAPE_HPP
#define INDIESTUDIO_SHAPE_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class Shape {
    public:

        // Set texture and rectangle to be used on shapes drawing
        // NOTE: It can be useful when using basic shapes and one single font,
        // defining a font char white rectangle would allow drawing everything in a single draw call
        void setShapesTexture(Texture2D texture, Rectangle source);

        // Basic shapes drawing functions
        void drawPixel(int posX, int posY, Color color);                                                    // Draw a pixel
        void drawPixelV(Vector2 position, Color color);                                                     // Draw a pixel (Vector version)
        void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color);                 // Draw a line
        void drawLineV(Vector2 startPos, Vector2 endPos, Color color);                                      // Draw a line (Vector version)
        void drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color);                        // Draw a line defining thickness
        void drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color);                    // Draw a line using cubic-bezier curves in-out
        void drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color); //Draw line using quadratic bezier curves with a control point
        void drawLineBezierCubic(Vector2 startPos, Vector2 endPos, Vector2 startControlPos, Vector2 endControlPos, float thick, Color color); // Draw line using cubic bezier curves with 2 control points
        void drawLineStrip(Vector2 *points, int pointsCount, Color color);                                  // Draw lines sequence
        void drawCircle(int centerX, int centerY, float radius, Color color);                               // Draw a color-filled circle
        void drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color);      // Draw a piece of a circle
        void drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color); // Draw circle sector outline
        void drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2);        // Draw a gradient-filled circle
        void drawCircleV(Vector2 center, float radius, Color color);                                        // Draw a color-filled circle (Vector version)
        void drawCircleLines(int centerX, int centerY, float radius, Color color);                          // Draw circle outline
        void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color);              // Draw ellipse
        void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color);         // Draw ellipse outline
        void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color); // Draw ring
        void drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color);    // Draw ring outline
        void drawRectangle(int posX, int posY, int width, int height, Color color);                         // Draw a color-filled rectangle
        void drawRectangleV(Vector2 position, Vector2 size, Color color);                                   // Draw a color-filled rectangle (Vector version)
        void drawRectangleRec(Rectangle rec, Color color);                                                  // Draw a color-filled rectangle
        void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color);                  // Draw a color-filled rectangle with pro parameters
        void drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2); // Draw a vertical-gradient-filled rectangle
        void drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2); // Draw a horizontal-gradient-filled rectangle
        void drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4);        // Draw a gradient-filled rectangle with custom vertex colors
        void drawRectangleLines(int posX, int posY, int width, int height, Color color);                    // Draw rectangle outline
        void drawRectangleLinesEx(Rectangle rec, float lineThick, Color color);                               // Draw rectangle outline with extended parameters
        void drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color);               // Draw rectangle with rounded edges
        void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color); // Draw rectangle with rounded edges outline
        void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color);                                 // Draw a color-filled triangle (vertex in counter-clockwise order!)
        void drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color);                            // Draw triangle outline (vertex in counter-clockwise order!)
        void drawTriangleFan(Vector2 *points, int pointsCount, Color color);                                // Draw a triangle fan defined by points (first vertex is the center)
        void drawTriangleStrip(Vector2 *points, int pointsCount, Color color);                              // Draw a triangle strip defined by points
        void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color);                // Draw a regular polygon (Vector version)
        void drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color);           // Draw a polygon outline of n sides
        void drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color); // Draw a polygon outline of n sides with extended parameters

        // Basic shapes collision detection functions
        bool checkCollisionRecs(Rectangle rec1, Rectangle rec2);                                            // Check collision between two rectangles
        bool checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2);         // Check collision between two circles
        bool checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec);                          // Check collision between circle and rectangle
        bool checkCollisionPointRec(Vector2 point, Rectangle rec);                                          // Check if point is inside rectangle
        bool checkCollisionPointCircle(Vector2 point, Vector2 center, float radius);                        // Check if point is inside circle
        bool checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3);                // Check if point is inside a triangle
        bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint); // Check the collision between two lines defined by two points each, returns collision point by reference
        bool checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold);                 // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
        Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2);                                          // Get collision rectangle for two rectangles collision

    private:
    };
}

#endif //INDIESTUDIO_SHAPE_HPP
