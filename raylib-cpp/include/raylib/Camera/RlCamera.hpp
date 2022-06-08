/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "raylib.h"
#include "raylib/Math.hpp"

namespace raylib {
    class RlCamera {
        public:
            // Camera System Functions (Module: rcamera)
            RlCamera();
            RlCamera(Vector3f position, Vector3f target, Vector3f up, float fovy, int projection);
            ~RlCamera() = default;

            void update();
            void setPosition(Vector3f position);
            void setTarget(Vector3f target);

            Camera3D get();

            void setPanControl(int keyPan);// Set camera pan key to combine with mouse movement (free camera)
            void setAltControl(int keyAlt);// Set camera alt key to combine with mouse movement (free camera)
            void setSmoothZoomControl(int keySmoothZoom);// Set camera smooth zoom key to combine with mouse (free camera)
            void setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown);// Set camera move controls (1st person and 3rd person cameras)
            Matrix geMatrix();// Get camera transform matrix (view matrix)

    private:
        Camera3D _camera;
    };
}

#endif /* !CAMERA_HPP_ */
