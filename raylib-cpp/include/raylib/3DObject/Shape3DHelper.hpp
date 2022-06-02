/*
** EPITECH PROJECT, 2022
** Shape3DHelper.hpp
** File description:
** Shape3DHelper.hpp
*/

#ifndef INDIESTUDIO_SHAPE3DHELPER_HPP
#define INDIESTUDIO_SHAPE3DHELPER_HPP

#include "raylib.h"

namespace raylib {
    class Shape3DHelper {
    public:
        // Basic geometric 3D shapes drawing functions
        static void drawLine3D(Vector3 startPos, Vector3 endPos, Color color);                                    // DrawHelper a line in 3D world space
        static void drawPoint3D(Vector3 position, Color color);                                                   // DrawHelper a point in 3D space, actually a small line
        static void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color); // DrawHelper a circle in 3D world space
        static void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color);                              // DrawHelper a color-filled triangle (vertex in counter-clockwise order!)
        static void drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color);                           // DrawHelper a triangle strip defined by points
        static void drawCube(Vector3 position, float width, float height, float length, Color color);             // DrawHelper cube
        static void drawCubeV(Vector3 position, Vector3 size, Color color);                                       // DrawHelper cube (Vector version)
        static void drawCubeWires(Vector3 position, float width, float height, float length, Color color);        // DrawHelper cube wires
        static void drawCubeWiresV(Vector3 position, Vector3 size, Color color);                                  // DrawHelper cube wires (Vector version)
        static void drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color); // DrawHelper cube textured
        static void drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3 position, float width, float height, float length, Color color); // DrawHelper cube with a region of a texture
        static void drawSphere(Vector3 centerPos, float radius, Color color);                                     // DrawHelper sphere
        static void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);            // DrawHelper sphere with extended parameters
        static void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);         // DrawHelper sphere wires
        static void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);        // DrawHelper a cylinder/cone
        static void drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color);      // DrawHelper a cylinder with base at startPos and top at endPos
        static void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);   // DrawHelper a cylinder/cone wires
        static void drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color); // DrawHelper a cylinder wires with base at startPos and top at endPos
        static void drawPlane(Vector3 centerPos, Vector2 size, Color color);                                      // DrawHelper a plane XZ
        static void drawRay(Ray ray, Color color);                                                                // DrawHelper a ray line
        static void drawGrid(int slices, float spacing);                                                          // DrawHelper a grid (centered at (0, 0, 0))
    private:
    };
}

#endif //INDIESTUDIO_SHAPE3DHELPER_HPP
