/*
** EPITECH PROJECT, 2022
** Shape3DHelper.hpp
** FileHelper description:
** Shape3DHelper.hpp
*/

#ifndef INDIESTUDIO_SHAPE3DHELPER_HPP
#define INDIESTUDIO_SHAPE3DHELPER_HPP

#include <raylib.h>
#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"

namespace raylib {
    class Shape3DHelper {
    public:
        // Basic geometric 3D shapes drawing functions
        static void drawLine3D(Vector3f startPos, Vector3f endPos, RlColor color);                                    // DrawHelper a line in 3D world space
        static void drawPoint3D(Vector3f position, RlColor color);                                                   // DrawHelper a point in 3D space, actually a small line
        static void drawCircle3D(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle, RlColor color); // DrawHelper a circle in 3D world space
        static void drawTriangle3D(Vector3f v1, Vector3f v2, Vector3f v3, RlColor color);                              // DrawHelper a color-filled triangle (vertex in counter-clockwise order!)
        static void drawTriangleStrip3D(::Vector3 *points, int pointsCount, RlColor color);    // TODO: replace with Vector3f                       // DrawHelper a triangle strip defined by points
        static void drawCube(Vector3f position, float width, float height, float length, RlColor color);             // DrawHelper cube
        static void drawCubeV(Vector3f position, Vector3f size, RlColor color);                                       // DrawHelper cube (Vector version)
        static void drawCubeWires(Vector3f position, float width, float height, float length, RlColor color);        // DrawHelper cube wires
        static void drawCubeWiresV(Vector3f position, Vector3f size, RlColor color);                                  // DrawHelper cube wires (Vector version)
        static void drawCubeTexture(Texture2D texture, Vector3f position, float width, float height, float length, RlColor color); // DrawHelper cube textured
        static void drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3f position, float width, float height, float length, RlColor color); // DrawHelper cube with a region of a texture
        static void drawSphere(Vector3f centerPos, float radius, RlColor color);                                     // DrawHelper sphere
        static void drawSphereEx(Vector3f centerPos, float radius, int rings, int slices, RlColor color);            // DrawHelper sphere with extended parameters
        static void drawSphereWires(Vector3f centerPos, float radius, int rings, int slices, RlColor color);         // DrawHelper sphere wires
        static void drawCylinder(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color);        // DrawHelper a cylinder/cone
        static void drawCylinderEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color);      // DrawHelper a cylinder with base at startPos and top at endPos
        static void drawCylinderWires(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, RlColor color);   // DrawHelper a cylinder/cone wires
        static void drawCylinderWiresEx(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, RlColor color); // DrawHelper a cylinder wires with base at startPos and top at endPos
        static void drawPlane(Vector3f centerPos, Vector2f size, RlColor color);                                      // DrawHelper a plane XZ
        static void drawRay(Ray ray, RlColor color);                                                                // DrawHelper a ray line
        static void drawGrid(int slices, float spacing);                                                          // DrawHelper a grid (centered at (0, 0, 0))
    private:
    };
}

#endif //INDIESTUDIO_SHAPE3DHELPER_HPP
