/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "raylib.h"

namespace raylib {
    class RlCamera {
        public:
            // Camera System Functions (Module: rcamera)
            static void setCameraMode(Camera camera, int mode);                            // Set camera mode (multiple camera modes available)
            static void updateCamera(Camera *camera);                                      // Update camera position for selected mode
            static void setCameraPanControl(int keyPan);                                   // Set camera pan key to combine with mouse movement (free camera)
            static void setCameraAltControl(int keyAlt);                                   // Set camera alt key to combine with mouse movement (free camera)
            static void setCameraSmoothZoomControl(int keySmoothZoom);                     // Set camera smooth zoom key to combine with mouse (free camera)
            static void setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown); // Set camera move controls (1st person and 3rd person cameras)
            static Matrix getCameraMatrix(Camera camera);                                  // Get camera transform matrix (view matrix)
            static Matrix getCameraMatrix2D(Camera2D camera);
    private:
    };
}

#endif /* !CAMERA_HPP_ */
