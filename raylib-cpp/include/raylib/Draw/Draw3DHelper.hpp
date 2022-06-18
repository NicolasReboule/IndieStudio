/*
** EPITECH PROJECT, 2022
** Draw3DHelper.hpp
** File description:
** Draw3DHelper.hpp
*/

#ifndef INDIESTUDIO_DRAW3DHELPER_HPP
#define INDIESTUDIO_DRAW3DHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include "raylib/Camera/RlCamera.hpp"
#include <raylib.h>
#include <rlgl.h>
#include <vector>

namespace raylib::helper::draw {
    /**
     * @brief Helper class for drawing 3D shapes
     */
    class Draw3DHelper {
    public:

        /**
         * @brief Draw a line in 3D
         * @param startPos the start position of the line
         * @param endPos the end position of the line
         * @param color the color of the line
         */
        static void drawLine(const Vector3f &startPos, const Vector3f &endPos, const RlColor &color);

        /**
         * @brief Draw a point in 3D
         * @param position the position of the point
         * @param color the color of the point
         */
        static void drawPoint(const Vector3f &position, const RlColor &color);

        /**
         * @brief Draw a circle in 3D
         * @param center the center of the circle
         * @param radius the radius of the circle
         * @param rotationAxis the rotation axis of the circle
         * @param rotationAngle the rotation angle of the circle
         * @param color the color of the circle
         */
        static void drawCircle(const Vector3f &center, const float &radius, const Vector3f &rotationAxis, const float &rotationAngle, const RlColor &color);

        /**
         * @brief Draw a color-filled triangle (vertex in counter-clockwise order!) in 3D
         * @param v1 the first vertex of the triangle
         * @param v2 the second vertex of the triangle
         * @param v3 the third vertex of the triangle
         * @param color the color of the triangle
         */
        static void drawTriangle3D(const Vector3f &v1, const Vector3f &v2, const Vector3f &v3, const RlColor &color);

        /**
         * @brief Draw a triangle strip defined by points in 3D
         * @param points the points of the triangle strip
         * @param color the color of the triangle strip
         */
        static void drawTriangleStrip3D(const std::vector<Vector3f> &points, const RlColor &color);

        /**
         * @brief Draw a cube in 3D
         * @param position the position of the cube
         * @param width the width of the cube
         * @param height the height of the cube
         * @param length the length of the cube
         * @param color the color of the cube
         */
        static void drawCube(const Vector3f &position, const float &width, const float &height, const float &length, const RlColor &color);

        /**
         * @brief Draw a cube (Vector version) in 3D
         * @param position the position of the cube
         * @param size the size of the cube
         * @param color the color of the cube
         */
        static void drawCube(const Vector3f &position, const Vector3f &size, const RlColor &color);

        /**
         * @brief Draw cube wires in 3D
         * @param position the position of the cube
         * @param width the width of the cube
         * @param height the height of the cube
         * @param length the length of the cube
         * @param color the color of the cube
         */
        static void drawCubeWires(const Vector3f &position, const float &width, const float &height, const float &length, const RlColor &color);

        /**
         * @brief Draw cube wires (Vector version) in 3D
         * @param position the position of the cube
         * @param size the size of the cube
         * @param color the color of the cube
         */
        static void drawCubeWires(const Vector3f &position, const Vector3f &size, const RlColor &color);

        /**
         * @brief Draw cube textured in 3D
         * @param texture the texture of the cube
         * @param position the position of the cube
         * @param width the width of the cube
         * @param height the height of the cube
         * @param length the length of the cube
         * @param color the color of the cube
         */
        static void drawCubeTexture(const texture::RlTexture &texture, const Vector3f &position, const float &width, const float &height, const float &length, const RlColor &color);

        /**
         * @brief Draw cube with a region of a texture in 3D
         * @param texture the texture of the cube
         * @param source the source of the texture
         * @param position the position of the cube
         * @param width the width of the cube
         * @param height the height of the cube
         * @param length the length of the cube
         * @param color the color of the cube
         */
        static void drawCubeTextureRec(const texture::RlTexture &texture, const Rectangle &source, const Vector3f &position, const float &width, const float &height, const float &length, const RlColor &color);

        /**
         * @brief Draw a sphere in 3D
         * @param centerPos the center position of the sphere
         * @param radius the radius of the sphere
         * @param color the color of the sphere
         */
        static void drawSphere(const Vector3f &centerPos, const float &radius, const RlColor &color);

        /**
         * @brief Draw sphere with extended parameters in 3D
         * @param centerPos the center position of the sphere
         * @param radius the radius of the sphere
         * @param rings the number of rings
         * @param slices the number of slices
         * @param color the color of the sphere
         */
        static void drawSphere(const Vector3f &centerPos, const float &radius, const int &rings, const int &slices, const RlColor &color);

        /**
         * @brief Draw sphere wires in 3D
         * @param centerPos the center position of the sphere
         * @param radius the radius of the sphere
         * @param rings the number of rings
         * @param slices the number of slices
         * @param color the color of the sphere
         */
        static void drawSphereWires(const Vector3f &centerPos, const float &radius, const int &rings, const int &slices, const RlColor &color);

        /**
         * @brief Draw a cylinder/cone in 3D
         * @param position the position of the cylinder/cone
         * @param radiusTop the radius of the top of the cylinder/cone
         * @param radiusBottom the radius of the bottom of the cylinder/cone
         * @param height the height of the cylinder/cone
         * @param slices the number of slices
         * @param color the color of the cylinder/cone
         */
        static void drawCylinder(const Vector3f &position, const float &radiusTop, const float &radiusBottom, const float &height, const int &slices, const RlColor &color);

        /**
         * @brief Draw a cylinder with base at startPos and top at endPos in 3D
         * @param startPos the start position of the cylinder
         * @param endPos the end position of the cylinder
         * @param startRadius the start radius of the cylinder
         * @param endRadius the end radius of the cylinder
         * @param sides the number of sides
         * @param color the color of the cylinder
         */
        static void drawCylinder(const Vector3f &startPos, const Vector3f &endPos, const float &startRadius, const float &endRadius, const int &sides, const RlColor &color);

        /**
         * @brief Draw a cylinder/cone wires in 3D
         * @param position the position of the cylinder/cone
         * @param radiusTop the radius of the top of the cylinder/cone
         * @param radiusBottom the radius of the bottom of the cylinder/cone
         * @param height the height of the cylinder/cone
         * @param slices the number of slices
         * @param color the color of the cylinder/cone
         */
        static void drawCylinderWires(const Vector3f &position, const float &radiusTop, const float &radiusBottom, const float &height, const int &slices, const RlColor &color);

        /**
         * @brief Draw a cylinder wires with base at startPos and top at endPos in 3D
         * @param startPos the start position of the cylinder
         * @param endPos the end position of the cylinder
         * @param startRadius the start radius of the cylinder
         * @param endRadius the end radius of the cylinder
         * @param sides the number of sides
         * @param color the color of the cylinder
         */
        static void drawCylinderWires(const Vector3f &startPos, const Vector3f &endPos, const float &startRadius, const float &endRadius, const int &sides, const RlColor &color);

        /**
         * @brief Draw a plane XZ in 3D
         * @param centerPos the center position of the plane
         * @param size the size of the plane
         * @param color the color of the plane
         */
        static void drawPlane(const Vector3f &centerPos, const Vector2f &size, const RlColor &color);

        /**
         * @brief Draw a ray line
         * @param ray the ray to draw
         * @param color the color of the ray
         */
        static void drawRay(const Ray &ray, const RlColor &color);

        /**
         * @brief Draw a grid
         * @param slices Number of slices of the grid
         * @param spacing Spacing of the grid
         */
        static void drawGrid(const int &slices, const float &spacing);

        /**
         * @brief Draw a grid of size (width/height) with some spacing, centered on (0, 0, 0)
         * @param size the size of the grid (width & height)
         * @param spacing the spacing between each rect
         */
        static void drawGrid(const Vector2i &size, const float &spacing);

        /**
         * @brief Draw a grid of size (width/height) with some spacing, centered on position
         * @param size the size of the grid (width & height)
         * @param position the position of the grid
         * @param spacing the spacing between each rect
         */
        static void drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing);

        /**
         * @brief Draw a grid of size (width/height) with some spacing, centered on position, with a color
         * @param size the size of the grid (width & height)
         * @param position the position of the grid
         * @param spacing the spacing between each rect
         * @param color the color of the grid
         */
        static void drawGrid(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &color);

        /**
         * @brief Draw bounding box (wires)
         * @param box to use
         * @param color to use
         */
        static void drawBoundingBox(const BoundingBox &box, const RlColor &color);

        /**
         * @brief Draw a billboard texture
         * @param camera the camera to use
         * @param texture the texture to use
         * @param position the position of the billboard
         * @param size the size of the billboard
         * @param tint the tint of the billboard
         */
        static void drawBillboard(const RlCamera &camera, const texture::RlTexture &texture, const Vector3f &position, float size, const RlColor &tint);

        /**
         * @brief Draw a billboard texture defined by source
         * @param camera the camera to use
         * @param texture the texture to use
         * @param source the source of the texture
         * @param position the position of the billboard
         * @param size the size of the billboard
         * @param tint the tint of the billboard
         */
        static void drawBillboardRec(const RlCamera &camera, const texture::RlTexture &texture, const Rectangle &source,
                                     const Vector3f &position, const Vector2f &size, const RlColor &tint);

        /**
         * @brief Draw a billboard texture defined by source and rotation
         * @param camera the camera to use
         * @param texture the texture to use
         * @param source the source of the texture
         * @param position the position of the billboard
         * @param up the up vector of the billboard
         * @param size the size of the billboard
         * @param origin the origin of the billboard
         * @param rotation the rotation of the billboard
         * @param tint the tint of the billboard
         */
        static void drawBillboardPro(const RlCamera &camera, const texture::RlTexture &texture, const Rectangle &source,
                                     const Vector3f &position, const Vector3f &up, const Vector2f &size,
                                     const Vector2f &origin, float rotation, const RlColor &tint);

    };
}

#endif //INDIESTUDIO_DRAW3DHELPER_HPP
