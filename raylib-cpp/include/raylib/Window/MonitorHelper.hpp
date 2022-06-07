/*
** EPITECH PROJECT, 2022
** MonitorHelper.hpp
** File description:
** MonitorHelper.hpp
*/

#ifndef INDIESTUDIO_MONITORHELPER_HPP
#define INDIESTUDIO_MONITORHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class MonitorHelper {
    public:
        int getScreenWidth();                                               // Get current screen width
        int getScreenHeight();                                              // Get current screen height
        int getMonitorCount();                                              // Get number of connected monitors
        int getCurrentMonitor();                                            // Get current connected monitor
        Vector2 getMonitorPosition(int monitor);                                // Get specified monitor position
        int getMonitorWidth(int monitor);                                       // Get specified monitor width (max available by monitor)
        int getMonitorHeight(int monitor);                                      // Get specified monitor height (max available by monitor)
        int getMonitorPhysicalWidth(int monitor);                               // Get specified monitor physical width in millimetres
        int getMonitorPhysicalHeight(int monitor);                              // Get specified monitor physical height in millimetres
        int getMonitorRefreshRate(int monitor);                                 // Get specified monitor refresh rate

        Vector2 getWindowPosition();                                        // Get window position XY on monitor
        Vector2 getWindowScaleDPI();                                        // Get window scale DPI factor
        std::string getMonitorName(int monitor);                                // Get the human-readable, UTF-8 encoded name of the primary monitor
        void setClipboardText(const std::string &text);                                // Set clipboard text content
        std::string getClipboardText();                                     // Get clipboard text content

    private:
    };
}
#endif //INDIESTUDIO_MONITORHELPER_HPP
