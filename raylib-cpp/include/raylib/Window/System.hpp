static /*
** EPITECH PROJECT, 2022
** System.h
** File description:
** System.h
*/

#ifndef INDIESTUDIO_SYSTEM_HPP
#define INDIESTUDIO_SYSTEM_HPP

#include <raylib.h>
#include <string>
#include "raylib/Math.hpp"

namespace raylib {
    class System {
    public:
        /**
        * @brief Get current screen width
        * @return the screen width
        */
        static int getScreenWidth();

        /**
         * @brief Get current screen height
         * @return the screen height
         */
        static int getScreenHeight();

        /**
         * @brief Get the screen size
         * @return the screen size
         */
        static Vector2i getScreenSize();

        /**
         * @brief Get number of connected monitors
         * @return the number of connected monitors
         */
        static int getMonitorCount();

        /**
         * @brief Get current connected monitor (index)
         * @return the current connected monitor (index)
         */
        static int getCurrentMonitor();

        /**
         * @brief Get specified monitor position
         * @param monitor the monitor index
         * @return the monitor position
         */
        static Vector2f getMonitorPosition(int monitor);

        /**
         * @brief Get specified monitor width (max available by monitor)
         * @param monitor the monitor index
         * @return the monitor width
         */
        static int getMonitorWidth(int monitor);

        /**
         * @brief Get specified monitor height (max available by monitor)
         * @param monitor the monitor index
         * @return the monitor height
         */
        static int getMonitorHeight(int monitor);

        /**
         * @brief Get specified monitor size
         * @param monitor the monitor index
         * @return the monitor size
         */
        static Vector2i getMonitorSize(int monitor);

        /**
         * @brief Get specified monitor physical width in millimetres
         * @param monitor the monitor index
         * @return the monitor physical width
         */
        static int getMonitorPhysicalWidth(int monitor);

        /**
         * @brief Get specified monitor physical height in millimetres
         * @param monitor the monitor index
         * @return the monitor physical height
         */
        static int getMonitorPhysicalHeight(int monitor);

        /**
         * @brief Get specified monitor physical size
         * @param monitor the monitor index
         * @return the monitor physical size
         */
        static Vector2i getMonitorPhysicalSize(int monitor);

        /**
         * @brief Get specified monitor refresh rate
         * @param monitor the monitor index
         * @return the monitor refresh rate
         */
        static int getMonitorRefreshRate(int monitor);

        /**
         * @brief Get window position XY on monitor
         * @return the window position XY
         */
        static Vector2f getWindowPosition();

        /**
         * @brief Get window scale DPI factor
         * @return the window scale DPI factor
         */
        static Vector2f getWindowScaleDPI();

        /**
         * @brief Get the human-readable, UTF-8 encoded name of the primary monitor
         * @param monitor the monitor index
         * @return the monitor name
         */
        static std::string getMonitorName(int monitor);

        /**
         * @brief Set clipboard text content
         * @param text the text to set
         */
        static void setClipboardText(const std::string &text);

        /**
         * @brief Get clipboard text content
         * @return the clipboard text
         */
        static std::string getClipboardText();

    };
}

#endif //INDIESTUDIO_SYSTEM_HPP
