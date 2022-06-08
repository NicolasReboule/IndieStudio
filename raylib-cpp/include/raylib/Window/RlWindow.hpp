/*
** EPITECH PROJECT, 2022
** RlWindow.hpp
** FileHelper description:
** RlWindow.hpp
*/

#ifndef RAYLIB_CPP_WINDOW_HPP
#define RAYLIB_CPP_WINDOW_HPP

#include <string>
#include <iostream>
#include <memory>
#include <raylib.h>
#include "raylib/exception/WindowException.hpp"

namespace raylib {
    class RlWindow {
    public:

        /**
         * @deprecated Don't use this use RlWindow#getInstance
         * @see RlWindow#getInstanve RlWindow#createWindow
         */
        RlWindow() = default;

        /**
         * @brief Destroy the RlWindow
         */
        ~RlWindow();

        /**
         * @brief Create a window with the given title, width and height
         * @param title
         * @param height
         * @param width
         * @throws WindowException if the window has already been created
         */
        void createWindow(const std::string &title, int height, int width);

        bool isOpen();                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        bool isWindowReady();                                               // Check if window has been initialized successfully
        bool isWindowFullscreen();                                          // Check if window is currently fullscreen
        bool isWindowHidden();                                              // Check if window is currently hidden (only PLATFORM_DESKTOP)
        bool isWindowMinimized();                                           // Check if window is currently minimized (only PLATFORM_DESKTOP)
        bool isWindowMaximized();                                           // Check if window is currently maximized (only PLATFORM_DESKTOP)
        bool isWindowFocused();                                             // Check if window is currently focused (only PLATFORM_DESKTOP)
        bool isWindowResized();                                             // Check if window has been resized last frame
        bool hasWindowState(unsigned int flag);                                  // Check if one specific window flag is enabled
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

        inline std::string getTitle() const {return _title;};
        inline int getHeight() const {return _height;};
        inline int getWidth() const {return _width;};
        inline int getMinHeight() const {return _minHeight;};
        inline int getMinWidth() const {return _minWidth;};

        static std::shared_ptr<RlWindow> &getInstance();
    private:
        static std::shared_ptr<RlWindow> _instance;

        std::string _title;
        int _width;
        int _height;
        int _minWidth;
        int _minHeight;
        bool _isCreated = false;
    };
}

#endif //RAYLIB_CPP_WINDOW_HPP
