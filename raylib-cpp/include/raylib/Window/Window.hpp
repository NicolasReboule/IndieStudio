/*
** EPITECH PROJECT, 2022
** Window.hpp
** File description:
** Window.hpp
*/

#ifndef RAYLIB_CPP_WINDOW_HPP
#define RAYLIB_CPP_WINDOW_HPP

#include <string>
#include <iostream>
#include <memory>
#include "raylib.h"

namespace raylib {
    class Window {
    public:
        explicit Window(const std::string &title, int width, int height);
        ~Window();
        // Window-related functions
        static void initWindow(int width, int height, const std::string &title);              // Initialize window and OpenGL context
        static bool isOpen();                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        static void closeWindow();                                                 // Close window and unload OpenGL context
        static bool isWindowReady();                                               // Check if window has been initialized successfully
        static bool isWindowFullscreen();                                          // Check if window is currently fullscreen
        static bool isWindowHidden();                                              // Check if window is currently hidden (only PLATFORM_DESKTOP)
        static bool isWindowMinimized();                                           // Check if window is currently minimized (only PLATFORM_DESKTOP)
        static bool isWindowMaximized();                                           // Check if window is currently maximized (only PLATFORM_DESKTOP)
        static bool isWindowFocused();                                             // Check if window is currently focused (only PLATFORM_DESKTOP)
        static bool isWindowResized();                                             // Check if window has been resized last frame
        static bool isWindowState(unsigned int flag);                                  // Check if one specific window flag is enabled
        static void setWindowState(unsigned int flags);                                // Set window configuration state using flags
        static void clearWindowState(unsigned int flags);                              // Clear window configuration state flags
        static void toggleFullscreen();                                            // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
        static void maximizeWindow();                                              // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
        static void minimizeWindow();                                              // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
        static void restoreWindow();                                               // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
        static void setWindowIcon(Image image);                                        // Set icon for window (only PLATFORM_DESKTOP)
        static void setWindowTitle(const std::string &title);                                 // Set title for window (only PLATFORM_DESKTOP)
        static void setWindowPosition(int x, int y);                                   // Set window position on screen (only PLATFORM_DESKTOP)
        static void setWindowMonitor(int monitor);                                     // Set monitor for the current window (fullscreen mode)
        static void setWindowMinSize(int width, int height);                           // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
        static void setWindowSize(int width, int height);                              // Set window dimensions
        static std::shared_ptr<void *> getWindowHandle();                                            // Get native window handle
        static int getScreenWidth();                                               // Get current screen width
        static int getScreenHeight();                                              // Get current screen height
        static int getMonitorCount();                                              // Get number of connected monitors
        static int getCurrentMonitor();                                            // Get current connected monitor
        static Vector2 getMonitorPosition(int monitor);                                // Get specified monitor position
        static int getMonitorWidth(int monitor);                                       // Get specified monitor width (max available by monitor)
        static int getMonitorHeight(int monitor);                                      // Get specified monitor height (max available by monitor)
        static int getMonitorPhysicalWidth(int monitor);                               // Get specified monitor physical width in millimetres
        static int getMonitorPhysicalHeight(int monitor);                              // Get specified monitor physical height in millimetres
        static int getMonitorRefreshRate(int monitor);                                 // Get specified monitor refresh rate
        static Vector2 getWindowPosition();                                        // Get window position XY on monitor
        static Vector2 getWindowScaleDPI();                                        // Get window scale DPI factor
        static std::string getMonitorName(int monitor);                                // Get the human-readable, UTF-8 encoded name of the primary monitor
        static void setClipboardText(const std::string &text);                                // Set clipboard text content
        static std::string getClipboardText();                                     // Get clipboard text content


    private:
        std::string _title;
        int _width;
        int _height;
    };
}

#endif //RAYLIB_CPP_WINDOW_HPP
