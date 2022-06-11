/*
** EPITECH PROJECT, 2022
** CoreHelper.hpp
** FileHelper description:
** CoreHelper.hpp
*/

#ifndef INDIESTUDIO_COREHELPER_HPP
#define INDIESTUDIO_COREHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief Helper class for raylib core functions
     */
    class CoreHelper {
    public:
        /**
         * @brief Load VR stereo config for VR simulator device parameters
         * @param device the device to load the config for
         * @return VR stereo config
         */
        static VrStereoConfig loadVrStereoConfig(const VrDeviceInfo &device);

        /**
         * @brief Unload VR stereo config
         * @param config the config to unload
         */
        static void unloadVrStereoConfig(const VrStereoConfig &config);

        /**
         * @brief Set target FPS (maximum)
         * @param fps the target FPS
         */
        static void setFramerateLimit(int fps);

        /**
         * @brief Get current FPS
         * @return the current FPS
         */
        static int getFPS();

        /**
         * @brief Get time in seconds for last frame drawn (delta time)
         * @return the time in seconds for last frame drawn (delta time)
         */
        static float getFrameTime();

        /**
         * @brief Get elapsed time in seconds since InitWindow()
         * @return the elapsed time in seconds since InitWindow()
         */
        static double getTime();

        /**
         * @brief Open URL with default system browser (if available)
         * @param url the URL to open
         */
        static void openURL(const std::string &url);
    };
}

#endif //INDIESTUDIO_COREHELPER_HPP
