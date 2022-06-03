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
            void setCameraMode(Camera camera, int mode);                            // Set camera mode (multiple camera modes available)
            void updateCamera(Camera *camera);                                      // Update camera position for selected mode
            void setCameraPanControl(int keyPan);                                   // Set camera pan key to combine with mouse movement (free camera)
            void setCameraAltControl(int keyAlt);                                   // Set camera alt key to combine with mouse movement (free camera)
            void setCameraSmoothZoomControl(int keySmoothZoom);                     // Set camera smooth zoom key to combine with mouse (free camera)
            void setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown); // Set camera move controls (1st person and 3rd person cameras)
            Matrix getCameraMatrix(Camera camera);                                  // Get camera transform matrix (view matrix)
            Matrix getCameraMatrix2D(Camera2D camera);
    private:
    };
}

#endif /* !CAMERA_HPP_ */
