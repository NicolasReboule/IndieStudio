/*
** EPITECH PROJECT, 2022
** CoreHelper.hpp
** FileHelper description:
** CoreHelper.hpp
*/

#ifndef INDIESTUDIO_COREHELPER_HPP
#define INDIESTUDIO_COREHELPER_HPP

#include "raylib.h"
#include <string>
#include <memory>

namespace raylib {

    class CoreHelper {
    public:
        // VR stereo config functions for VR simulator
        static VrStereoConfig loadVrStereoConfig(VrDeviceInfo device);                 // Load VR stereo config for VR simulator device parameters
        static void unloadVrStereoConfig(VrStereoConfig config);                       // Unload VR stereo config

        // Timing-related functions
        static void setFramerateLimit(int fps);                                             // Set target FPS (maximum)
        static int getFPS();                                                       // Get current FPS
        static float getFrameTime();                                               // Get time in seconds for last frame drawn (delta time)
        static double getTime();                                                   // Get elapsed time in seconds since InitWindow()

        // Misc. functions
        static void takeScreenshot(const std::string &fileName);                              // Takes a screenshot of current screen (filename extension defines format)
        static void setConfigFlags(unsigned int flags);                                // Setup init configuration flags (view FLAGS)

        // Misc.
        static void openURL(const std::string &url);                                          // Open URL with default system browser (if available)
    private:
    };
}

#endif //INDIESTUDIO_COREHELPER_HPP
