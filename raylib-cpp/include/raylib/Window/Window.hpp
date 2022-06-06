/*
** EPITECH PROJECT, 2022
** Window.hpp
** FileHelper description:
** Window.hpp
*/

#ifndef RAYLIB_CPP_WINDOW_HPP
#define RAYLIB_CPP_WINDOW_HPP

#include <string>
#include <iostream>
#include <memory>
#include "raylib.h"

namespace raylib {
    class Window { //TODO: Singleton
    public:
        explicit Window(const std::string &title, int width, int height);
        ~Window();
        // Window-related functions
        void initWindow(int width, int height, const std::string &title);              // Initialize window and OpenGL context
        bool isOpen();                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        void closeWindow();                                                 // Close window and unload OpenGL context
        bool isWindowReady();                                               // Check if window has been initialized successfully
        bool isWindowFullscreen();                                          // Check if window is currently fullscreen
        bool isWindowHidden();                                              // Check if window is currently hidden (only PLATFORM_DESKTOP)
        bool isWindowMinimized();                                           // Check if window is currently minimized (only PLATFORM_DESKTOP)
        bool isWindowMaximized();                                           // Check if window is currently maximized (only PLATFORM_DESKTOP)
        bool isWindowFocused();                                             // Check if window is currently focused (only PLATFORM_DESKTOP)
        bool isWindowResized();                                             // Check if window has been resized last frame
        bool isWindowState(unsigned int flag);                                  // Check if one specific window flag is enabled
        void setWindowState(unsigned int flags);                                // Set window configuration state using flags
        void clearWindowState(unsigned int flags);                              // Clear window configuration state flags
        void toggleFullscreen();                                            // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
        void maximizeWindow();                                              // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
        void minimizeWindow();                                              // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
        void restoreWindow();                                               // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
        void setWindowIcon(Image image);                                        // Set icon for window (only PLATFORM_DESKTOP)
        void setWindowTitle(const std::string &title);                                 // Set title for window (only PLATFORM_DESKTOP)
        void setWindowPosition(int x, int y);                                   // Set window position on screen (only PLATFORM_DESKTOP)
        void setWindowMonitor(int monitor);                                     // Set monitor for the current window (fullscreen mode)
        void setWindowMinSize(int width, int height);                           // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
        void setWindowSize(int width, int height);                              // Set window dimensions
        std::shared_ptr<void *> getWindowHandle();                                            // Get native window handle
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

        inline std::string getTitle() const {return _title;};
        inline int getHeight() const {return _height;};
        inline int getWidth() const {return _width;};
        inline int getMinHeight() const {return _minHeight;};
        inline int getMinWidth() const {return _minWidth;};
    private:
        std::string _title;
        int _width;
        int _height;
        int _minWidth;
        int _minHeight;
    };
}

#endif //RAYLIB_CPP_WINDOW_HPP
