/*
** EPITECH PROJECT, 2022
** System.hpp
** File description:
** System.hpp
*/

#ifndef INDIESTUDIO_SYSTEM_HPP
#define INDIESTUDIO_SYSTEM_HPP

#include "raylib/Math.hpp"
#include <raylib.h>
#include <string>

namespace raylib::window {
    /**
     * @brief Some basic information about the system (screen, monitors, clipboard, ...)
     */
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
         * @param monitorIndex the monitor index
         * @return the monitor position
         */
        static Vector2f getMonitorPosition(int monitorIndex);

        /**
         * @brief Get specified monitor width (max available by monitor)
         * @param monitorIndex the monitor index
         * @return the monitor width
         */
        static int getMonitorWidth(int monitorIndex);

        /**
         * @brief Get specified monitor height (max available by monitor)
         * @param monitorIndex the monitor index
         * @return the monitor height
         */
        static int getMonitorHeight(int monitorIndex);

        /**
         * @brief Get specified monitor size
         * @param monitorIndex the monitor index
         * @return the monitor size
         */
        static Vector2i getMonitorSize(int monitorIndex);

        /**
         * @brief Get specified monitor physical width in millimetres
         * @param monitorIndex the monitor index
         * @return the monitor physical width
         */
        static int getMonitorPhysicalWidth(int monitorIndex);

        /**
         * @brief Get specified monitor physical height in millimetres
         * @param monitorIndex the monitor index
         * @return the monitor physical height
         */
        static int getMonitorPhysicalHeight(int monitorIndex);

        /**
         * @brief Get specified monitor physical size
         * @param monitorIndex the monitor index
         * @return the monitor physical size
         */
        static Vector2i getMonitorPhysicalSize(int monitorIndex);

        /**
         * @brief Get specified monitor refresh rate
         * @param monitorIndex the monitor index
         * @return the monitor refresh rate
         */
        static int getMonitorRefreshRate(int monitorIndex);

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
         * @param monitorIndex the monitor index
         * @return the monitor name
         */
        static std::string getMonitorName(int monitorIndex);

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
