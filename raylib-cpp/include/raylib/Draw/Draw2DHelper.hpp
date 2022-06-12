/*
** EPITECH PROJECT, 2022
** Draw2DHelper.hpp
** File description:
** Draw2DHelper.hpp
*/

#ifndef INDIESTUDIO_DRAW2DHELPER_HPP
#define INDIESTUDIO_DRAW2DHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include <raylib.h>
#include <rlgl.h>
#include <vector>

namespace raylib {
    /**
     * @brief Helper class for drawing.
     */
    class Draw2DHelper {
    public:
        /**
         * @brief Set texture and rectangle to be used on shapes drawing
         * NOTE: It can be useful when using basic shapes and one single font,
         * defining a font char white rectangle would allow drawing everything in a single Draw call
         * @param texture texture to be used
         * @param source texture rectangle to be used
         */
        static void setShapesTexture(const RlTexture &texture, const Rectangle &source);

        /**
         * @brief Draw a pixel
         * @param posX to Draw at
         * @param posY to Draw at
         * @param color to use
         */
        static void drawPixel(int posX, int posY, const RlColor &color);

        /**
         * @brief Draw a pixel
         * @param position to Draw at
         * @param color to use
         */
        static void drawPixel(const Vector2f &position, const RlColor &color);

        /**
         * @brief Draw a line
         * @param startPosX to Draw from
         * @param startPosY to Draw from
         * @param endPosX to Draw to
         * @param endPosY to Draw to
         * @param color to use
         */
        static void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, const RlColor &color);

        /**
         * @brief Draw a line
         * @param startPos to Draw from
         * @param endPos to Draw to
         * @param color to use
         */
        static void drawLine(const Vector2f &startPos, const Vector2f &endPos, const RlColor &color);

        /**
         * @brief Draw a line
         * @param startPos to Draw from
         * @param endPos to Draw to
         * @param thick to use
         * @param color to use
         */
        static void drawLine(const Vector2f &startPos, const Vector2f &endPos, float thick, const RlColor &color);

        /**
         * @brief Draw a Line using cubic-bezier curves in-out
         * @param startPos to Draw from
         * @param endPos to Draw to
         * @param thick to use
         * @param color to use
         */
        static void drawLineBezier(const Vector2f &startPos, const Vector2f &endPos, float thick, const RlColor &color);

        /**
         * @brief Draw a line using quadratic bezier curves with a control point
         * @param startPos to Draw from
         * @param endPos to Draw to
         * @param controlPos to use
         * @param thick to use
         * @param color to use
         */
        static void drawLineBezierQuad(const Vector2f &startPos, const Vector2f &endPos, const Vector2f &controlPos, float thick, const RlColor &color);

        /**
         * @brief Draw a line using cubic bezier curves with 2 control points
         * @param startPos to Draw from
         * @param endPos to Draw to
         * @param startControlPos to use
         * @param endControlPos to use
         * @param thick to use
         * @param color to use
         */
        static void drawLineBezierCubic(const Vector2f &startPos, const Vector2f &endPos, const Vector2f &startControlPos, const Vector2f &endControlPos, float thick, const RlColor &color);

        /**
         * @brief Draw lines sequence
         * @param points
         * @param pointsCount
         * @param color
         */
        static void drawLineStrip(const std::vector<Vector2f> &points, const RlColor &color);

        /**
         * @brief Draw a color-filled circle
         * @param centerX to Draw at
         * @param centerY to Draw at
         * @param radius to use
         * @param color to use
         */
        static void drawCircle(int centerX, int centerY, float radius, const RlColor &color);

        /**
         * @brief Draw a piece of a circle
         * @param center to Draw at
         * @param radius to use
         * @param startAngle to use
         * @param endAngle to use
         * @param segments to use
         * @param color to use
         */
        static void drawCircleSector(const Vector2f &center, float radius, float startAngle, float endAngle, int segments, const RlColor &color);

        /**
         * @brief Draw circle sector outline
         * @param center to Draw at
         * @param radius to use
         * @param startAngle to use
         * @param endAngle to use
         * @param segments to use
         * @param color to use
         */
        static void drawCircleSectorLines(const Vector2f &center, float radius, float startAngle, float endAngle, int segments, const RlColor &color);

        /**
         * @brief Draw a gradient-filled circle
         * @param centerX to Draw at
         * @param centerY to Draw at
         * @param radius to use
         * @param color1 to use
         * @param color2 to use
         */
        static void drawCircleGradient(int centerX, int centerY, float radius, const RlColor &color1, const RlColor &color2);

        /**
         * @brief Draw a color-filled circle
         * @param center
         * @param radius
         * @param color
         */
        static void drawCircle(const Vector2f &center, float radius, const RlColor &color);

        /**
         * @brief Draw circle outline
         * @param centerX to Draw at
         * @param centerY to Draw at
         * @param radius to use
         * @param color to use
         */
        static void drawCircleLines(int centerX, int centerY, float radius, const RlColor &color);

        /**
         * @brief Draw ellipse
         * @param centerX to Draw at
         * @param centerY to Draw at
         * @param radiusH to use
         * @param radiusV to use
         * @param color to use
         */
        static void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, const RlColor &color);

        /**
         * @brief Draw ellipse outline
         * @param centerX to Draw at
         * @param centerY to Draw at
         * @param radiusH to use
         * @param radiusV to use
         * @param color to use
         */
        static void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, const RlColor &color);

        /**
         * @brief Draw a ring
         * @param center to Draw at
         * @param innerRadius to use
         * @param outerRadius to use
         * @param startAngle to use
         * @param endAngle to use
         * @param segments to use
         * @param color to use
         */
        static void drawRing(const Vector2f &center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, const RlColor &color);

        /**
         * @brief Draw a ring outline
         * @param center to Draw at
         * @param innerRadius to use
         * @param outerRadius to use
         * @param startAngle to use
         * @param endAngle to use
         * @param segments to use
         * @param color to use
         */
        static void drawRingLines(const Vector2f &center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, const RlColor &color);

        /**
         * @brief Draw a filled rectangle
         * @param posX to Draw at
         * @param posY to Draw at
         * @param width to use
         * @param height to use
         * @param color to use
         */
        static void drawRectangle(int posX, int posY, int width, int height, const RlColor &color);

        /**
         * @brief Draw a filled rectangle
         * @param position to Draw at
         * @param size to use
         * @param color to use
         */
        static void drawRectangle(const Vector2f &position, const Vector2f &size, const RlColor &color);

        /**
         * @brief Draw a filled rectangle
         * @param rec to Draw
         * @param color to use
         */
        static void drawRectangle(const Rectangle &rec, const RlColor &color);

        /**
         * @brief Draw a filled rectangle
         * @param rec to Draw
         * @param origin to use
         * @param rotation to use
         * @param color to use
         */
        static void drawRectangle(const Rectangle &rec, const Vector2f &origin, float rotation, const RlColor &color);

        /**
         * @brief Draw a vertical-gradient-filled rectangle
         * @param posX to Draw at
         * @param posY to Draw at
         * @param width to use
         * @param height to use
         * @param color1 to use
         * @param color2 to use
         */
        static void drawRectangleGradientV(int posX, int posY, int width, int height, const RlColor &color1, const RlColor &color2);

        /**
         * @brief Draw a horizontal-gradient-filled rectangle
         * @param posX to Draw at
         * @param posY to Draw at
         * @param width to use
         * @param height to use
         * @param color1 to use
         * @param color2 to use
         */
        static void drawRectangleGradientH(int posX, int posY, int width, int height, const RlColor &color1, const RlColor &color2);

        /**
         * @brief Draw a gradient-filled rectangle with custom vertex colors
         * @param posX to Draw at
         * @param posY to Draw at
         * @param width to use
         * @param height to use
         * @param color to use
         */
        static void drawRectangleGradient(const Rectangle &rec, const RlColor &col1, const RlColor &col2, const RlColor &col3, const RlColor &col4);

        /**
         * @brief Draw rectangle outline
         * @param posX to Draw at
         * @param posY to Draw at
         * @param width to use
         * @param height to use
         * @param color to use
         */
        static void drawRectangleLines(int posX, int posY, int width, int height, const RlColor &color);

        /**
         * @brief Draw rectangle outline with extended parameters
         * @param rec to Draw
         * @param lineThick to use
         * @param color to use
         */
        static void drawRectangleLinesEx(const Rectangle &rec, float lineThick, const RlColor &color);

        /**
         * @brief Draw rectangle with rounded edges
         * @param rec to Draw
         * @param roundness to use
         * @param segments to use
         * @param color to use
         */
        static void drawRectangleRounded(const Rectangle &rec, float roundness, int segments, const RlColor &color);

        /**
         * @brief Draw rectangle with rounded edges outline
         * @param rec to Draw
         * @param roundness to use
         * @param segments to use
         * @param lineThick to use
         * @param color to use
         */
        static void drawRectangleRoundedLines(const Rectangle &rec, float roundness, int segments, float lineThick, const RlColor &color); // DrawHelper

        /**
         * @brief Draw a color-filled triangle (vertex in counter-clockwise order!)
         * @param v1 to Draw at
         * @param v2 to Draw at
         * @param v3 to Draw at
         * @param color to use
         */
        static void drawTriangle(const Vector2f &v1, const Vector2f &v2, const Vector2f &v3, const RlColor &color);

        /**
         * @brief Draw a triangle outline (vertex in counter-clockwise order!)
         * @param v1 to Draw at
         * @param v2 to Draw at
         * @param v3 to Draw at
         * @param color to use
         */
        static void drawTriangleLines(const Vector2f &v1, const Vector2f &v2, const Vector2f &v3, const RlColor &color);

        /**
         * @brief Draw a triangle fan defined by points (first vertex is the center, shared by all triangles)
         * By default, following vertex should be provided in counter-clockwise order
         * @param points to Draw
         * @param color to use
         */
        static void drawTriangleFan(const std::vector<Vector2f> &points, const RlColor &color);

        /**
         * @brief Draw a triangle strip defined by points
         * @param points to Draw
         * @param color to use
         */
        static void drawTriangleStrip(const std::vector<Vector2f> &points,  const RlColor &color);

        /**
         * @brief Draw a regular polygon (Vector version)
         * @param center to Draw at
         * @param sides to use
         * @param radius to use
         * @param rotation to use
         * @param color to use
         */
        static void drawPoly(const Vector2f &center, int sides, float radius, float rotation, const RlColor &color);

        /**
         * @brief Draw a polygon outline of n sides
         * @param center to Draw at
         * @param sides to use
         * @param radius to use
         * @param rotation to use
         * @param color to use
         */
        static void drawPolyLines(const Vector2f &center, int sides, float radius, float rotation, const RlColor &color);

        /**
         * @brief Draw a polygon outline of n sides with extended parameters
         * @param center to Draw at
         * @param sides to use
         * @param radius to use
         * @param rotation to use
         * @param lineThick to use
         * @param color to use
         */
        static void drawPolyLines(const Vector2f &center, int sides, float radius, float rotation, float lineThick, const RlColor &color);

    private:
        static Texture2D _texShapes;
        static Rectangle _texShapesRec;
    };
}

#endif //INDIESTUDIO_DRAW2DHELPER_HPP
