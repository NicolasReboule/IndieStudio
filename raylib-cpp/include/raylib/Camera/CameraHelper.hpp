/*
** EPITECH PROJECT, 2022
** CameraHelper.hpp
** File description:
** CameraHelper.hpp
*/

#ifndef INDIESTUDIO_CAMERAHELPER_HPP
#define INDIESTUDIO_CAMERAHELPER_HPP

#include "RlCamera.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Helper for Camera
     */
    class CameraHelper {
    public:
        /**
         * @brief Set camera pan key to combine with mouse movement (free camera)
         * @param keyPan the key to combine with mouse movement
         */
        static void setPanControl(int keyPan);

        /**
         * @brief Set camera alt key to combine with mouse movement (free camera)
         * @param keyAlt the key to combine with mouse movement
         */
        static void setAltControl(int keyAlt);

        /**
         * @brief Set camera smooth zoom key to combine with mouse movement (free camera)
         * @param keySmoothZoom the key to combine with mouse movement
         */
        static void setSmoothZoomControl(int keySmoothZoom);

        /**
         * @brief Set camera move controls (1st person and 3rd person cameras)
         * @param keyFront the key to forward
         * @param keyBack the key to backward
         * @param keyRight the key to right
         * @param keyLeft the key to left
         * @param keyUp the key to up
         * @param keyDown the key to down
         */
        static void setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown);

        /**
         * @brief Set camera mode (global camera)
         * @param camera the camera to set
         * @param mode the mode to set
         */
        static void setCameraMode(const RlCamera &camera, const CameraMode &mode);
    };
}

#endif //INDIESTUDIO_CAMERAHELPER_HPP
