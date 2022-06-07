/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "raylib.h"

namespace raylib {
    class RlCamera {
        public:
            // Camera System Functions (Module: rcamera)
            RlCamera();
            RlCamera(Vector3 position, Vector3 target, Vector3 up, float fovy, int projection);
            ~RlCamera() = default;

            void update();
            void setPosition(Vector3 position);
            void setTarget(Vector3 target);

            Camera3D get();

            void setPanControl(int keyPan);// Set camera pan key to combine with mouse movement (free camera)
            void setAltControl(int keyAlt);// Set camera alt key to combine with mouse movement (free camera)
            void setSmoothZoomControl(int keySmoothZoom);// Set camera smooth zoom key to combine with mouse (free camera)
            void setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown);// Set camera move controls (1st person and 3rd person cameras)
            Matrix geMatrix();// Get camera transform matrix (view matrix)

    private:
        Camera3D camera;
    };
}

#endif /* !CAMERA_HPP_ */
