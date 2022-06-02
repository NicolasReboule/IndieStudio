/*
** EPITECH PROJECT, 2022
** ModelHelper.hpp
** File description:
** ModelHelper.hpp
*/

#ifndef INDIESTUDIO_MODELHELPER_HPP
#define INDIESTUDIO_MODELHELPER_HPP

#include "raylib.h"

namespace raylib {
    class ModelHelper {
    public:
        // Model drawing functions
        static void drawModel(Model model, Vector3 position, float scale, Color tint);                            // DrawHelper a model (with texture if set)
        static void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint); // DrawHelper a model with extended parameters
        static void drawModelWires(Model model, Vector3 position, float scale, Color tint);                       // DrawHelper a model wires (with texture if set)
        static void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint); // DrawHelper a model wires (with texture if set) with extended parameters
        static void drawBoundingBox(BoundingBox box, Color color);                                                // DrawHelper bounding box (wires)
        static void drawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint);    // DrawHelper a billboard texture
        static void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint); // DrawHelper a billboard texture defined by source
        static void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint); // DrawHelper a billboard texture defined by source and rotation

    private:
    };
}

#endif //INDIESTUDIO_MODELHELPER_HPP
