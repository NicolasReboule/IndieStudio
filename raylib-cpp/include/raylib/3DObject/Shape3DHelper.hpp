/*
** EPITECH PROJECT, 2022
** Shape3DHelper.hpp
** FileHelper description:
** Shape3DHelper.hpp
*/

#ifndef INDIESTUDIO_SHAPE3DHELPER_HPP
#define INDIESTUDIO_SHAPE3DHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include <raylib.h>
#include <rlgl.h>

namespace raylib::helper {
    /**
     * @brief Helper class for 3D shapes
     */
    class Shape3DHelper {
    public:
        /**
         * @brief Draw a line
         * @param startPos Start position of the line
         * @param endPos End position of the line
         * @param color Color of the line
         */
        static void drawLine3D(Vector3f startPos, Vector3f endPos, RlColor color);

        /**
         * @brief Draw a point
         * @param position Position of the point
         * @param color Color of the point
         */
        static void drawPoint3D(Vector3f position, RlColor color);

        /**
         * @brief Draw a circle
         * @param center Center of the circle
         * @param radius Radius of the circle
         * @param color Color of the circle
         */
        static void drawCircle3D(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle, RlColor color);

        /**
         * @brief Draw a triangle
         * @param v1 Vertex 1 of the triangle
         * @param v2 Vertex 2 of the triangle
         * @param v3 Vertex 3 of the triangle
         * @param color Color of the triangle
         */
        static void drawTriangle3D(Vector3f v1, Vector3f v2, Vector3f v3, RlColor color);

        /**
         * @brief Draw triangle strips
         * @param points Points of the triangle strips
         * @param pointsCount Number of points of the triangle strips
         * @param color Color of the triangle strips
         */
        static void drawTriangleStrip3D(::Vector3 *points, int pointsCount, RlColor color);    // TODO: replace with Vector3f

        /**
         * @brief Draw a cube
         * @param position Position of the cube
         * @param width Width of the cube
         * @param height Height of the cube
         * @param length Length of the cube
         * @param color Color of the cube
         */
        static void drawCube(Vector3f position, float width, float height, float length, RlColor color);

        /**
         * @brief Draw a cube
         * @param position Position of the cube
         * @param size Size of the cube
         * @param color Color of the cube
         */
        static void drawCubeV(Vector3f position, Vector3f size, RlColor color);

        /**
         * @brief Draw a cube wires
         * @param position Position of the cube
         * @param width Width of the cube
         * @param height Height of the cube
         * @param length Length of the cube
         * @param color Color of the cube
         */
        static void drawCubeWires(Vector3f position, float width, float height, float length, RlColor color);

        /**
         * @brief Draw a cube wires
         * @param position Position of the cube
         * @param size Size of the cube
         * @param color Color of the cube
         */
        static void drawCubeWiresV(Vector3f position, Vector3f size, RlColor color);

        /**
         * @brief Draw a cube with a texture
         * @param texture Texture of the cube
         * @param position Position of the cube
         * @param width Width of the cube
         * @param height Height of the cube
         * @param length Length of the cube
         * @param color Color of the cube
         */
        static void drawCubeTexture(Texture2D texture, Vector3f position, float width, float height, float length, RlColor color);

        /**
         * @brief Draw a cube with a texture
         * @param texture Texture of the cube
         * @param source Source rectangle of the texture
         * @param position Position of the cube
         * @param size Size of the cube
         * @param color Color of the cube
         */
        static void drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3f position, float width, float height, float length, RlColor color);

        /**
         * @brief Draw a sphere
         * @param centerPos Position of the center of the sphere
         * @param radius Radius of the sphere
         * @param color Color of the sphere
         */
        static void drawSphere(Vector3f centerPos, float radius, RlColor color);

        /**
         * @brief Draw a sphere with extra parameters
         * @param centerPos Position of the center of the sphere
         * @param radius Radius of the sphere
         * @param rings Number of rings of the sphere
         * @param slices Number of slices of the sphere
         * @param color Color of the sphere
         */
        static void drawSphereEx(Vector3f centerPos, float radius, int rings, int slices, RlColor color);

        /**
         * @brief Draw a sphere wires
         * @param centerPos Position of the center of the sphere
         * @param radius Radius of the sphere
         * @param rings Number of rings of the sphere
         * @param slices Slices of the sphere
         * @param color Color of the sphere
         */
        static void drawSphereWires(Vector3f centerPos, float radius, int rings, int slices, RlColor color);

        /**
         * @brief Draw a cylinder
         * @param position Position of the cylinder
         * @param radiusTop Radius of the top of the cylinder
         * @param radiusBottom Radius of the bottom of the cylinder
         * @param height Height of the cylinder
         * @param slices Number of slices of the cylinder
         * @param color Color of the cylinder
         */
        static void drawCylinder(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color);

        /**
         * @brief Draw a cylinder with extra parameters
         * @param startPos Start position of the cylinder
         * @param endPos End position of the cylinder
         * @param startRadius Start radius of the cylinder
         * @param endRadius End radius of the cylinder
         * @param sides Number of sides of the cylinder
         * @param color Color of the cylinder
         */
        static void drawCylinderEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color);

        /**
         * @brief Draw a cylinder wires
         * @param position Position of the cylinder
         * @param radiusTop Radius of the top of the cylinder
         * @param radiusBottom Radius of the bottom of the cylinder
         * @param height Height of the cylinder
         * @param slices Number of slices of the cylinder
         * @param color Color of the cylinder
         */
        static void drawCylinderWires(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color);

        /**
         * @brief Draw a cylinder wires with extra parameters
         * @param startPos Start position of the cylinder
         * @param endPos End position of the cylinder
         * @param startRadius Start radius of the cylinder
         * @param endRadius End radius of the cylinder
         * @param sides Number of sides of the cylinder
         * @param color Color of the cylinder
         */
        static void drawCylinderWiresEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color);

        /**
         * @brief Draw a plane
         * @param centerPos Position of the center of the plane
         * @param size Size of the plane
         * @param color Color of the plane
         */
        static void drawPlane(Vector3f centerPos, Vector2f size, RlColor color);

        /**
         * @brief Draw a ray
         * @param ray Ray to draw
         * @param color Color of the ray
         */
        static void drawRay(Ray ray, RlColor color);

        /**
         * @brief Draw a grid
         * @param slices Number of slices of the grid
         * @param spacing Spacing of the grid
         */
        static void drawGrid(int slices, float spacing);

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
    };
}

#endif //INDIESTUDIO_SHAPE3DHELPER_HPP
