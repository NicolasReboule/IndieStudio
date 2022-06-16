/*
** EPITECH PROJECT, 2022
** RlWindow.hpp
** FileHelper description:
** RlWindow.hpp
*/

#ifndef RAYLIB_CPP_WINDOW_HPP
#define RAYLIB_CPP_WINDOW_HPP

#include "raylib/exception/WindowException.hpp"
#include "raylib/Core/CoreHelper.hpp"
#include "raylib/Image/RlImage.hpp"
#include "raylib/Camera/RlCamera.hpp"
#include <string>
#include <iostream>
#include <memory>
#include <raylib.h>

namespace raylib::window {
    /**
     * @brief Window class
     */
    class RlWindow {
    public:

        /**
         * @deprecated Don't use this use RlWindow#getInstance
         * @see RlWindow#getInstanve RlWindow#createWindow
         */
        RlWindow();

        /**
         * @brief Destroy the RlWindow
         */
        ~RlWindow();

        /**
         * @brief Create a window with the given title, width and height
         * @param title the title of the window
         * @param height the height of the window
         * @param width the width of the window
         * @throws WindowException if the window has already been created
         */
        void createWindow(const std::string &title, int width, int height, int fps = 60);

        /**
         * @brief Get the singleton instance of the RlWindow
         * @return the singleton instance of the RlWindow
         */
        static std::shared_ptr<RlWindow> &getInstance();

        /**
         * @brief Check if the window is open
         * @return true if the window is open, false if close icon has been pressed
         */
        bool isOpen();

        /**
         * @brief Check if window has been initialized successfully
         * @return true if the window has been initialized successfully, false otherwise
         */
        bool isWindowReady();

        /**
         * @brief Check if window is currently fullscreen
         * @return true if the window is fullscreen, false otherwise
         */
        bool isWindowFullscreen();

        /**
         * @brief Check if window is currently hidden (only PLATFORM_DESKTOP)
         * @return true if the window is hidden, false otherwise
         */
        bool isWindowHidden();

        /**
         * @brief Check if window is currently minimized (only PLATFORM_DESKTOP)
         * @return true if the window is minimized, false otherwise
         */
        bool isWindowMinimized();

        /**
         * @brief Check if window is currently maximized (only PLATFORM_DESKTOP)
         * @return true if the window is maximized, false otherwise
         */
        bool isWindowMaximized();

        /**
         * @brief Check if window is currently focused (only PLATFORM_DESKTOP)
         * @return true if the window is focused, false otherwise
         */
        bool isWindowFocused();

        /**
         * @brief Check if window has been resized last frame
         * @return true if the window has been resized, false otherwise
         */
        bool isWindowResized();

        /**
         * @brief Check if one specific window flag is enabled
         * @param flag the flag to check (@see ConfigFlags enum)
         * @return true if the flag is enabled, false otherwise
         */
        bool hasWindowState(const ConfigFlags &flag);

        /**
         * @brief Set window configuration state using flags
         * @param flags the flags to set (@see ConfigFlags enum)
         */
        void setWindowState(unsigned int flags);

        /**
         * @brief Set window configuration state using flags
         * @param flags the flags to set (@see ConfigFlags enum)
         */
        void setConfigFlags(unsigned int flags);

        /**
         * @brief Clear window configuration state flags
         * @param flags the flags to clear (@see ConfigFlags enum)
         */
        void clearWindowState(unsigned int flags);

        /**
         * @brief Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
         */
        void toggleFullscreen();

        /**
         * @brief Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
         */
        void maximizeWindow();

        /**
         * @brief Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
         */
        void minimizeWindow();

        /**
         * @brief Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
         */
        void restoreWindow();

        /**
         * @brief Set icon for window (only PLATFORM_DESKTOP)
         * @param image the image to set as icon
         */
        void setWindowIcon(const image::RlImage &image);

        /**
         * @brief Set title for window (only PLATFORM_DESKTOP)
         * @param title the title to set
         */
        void setWindowTitle(const std::string &title);

        /**
         * @brief Set window position on screen (only PLATFORM_DESKTOP)
         * @param x the x position
         * @param y the y position
         */
        void setWindowPosition(int x, int y);

        /**
         * @brief Set monitor for the current window (fullscreen mode)
         * @param monitor the monitor to set
         */
        void setWindowMonitor(int monitor);

        /**
         * @brief Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
         * @param width the minimum width
         * @param height the minimum height
         */
        void setWindowMinSize(int width, int height);

        /**
         * @brief Set window dimensions
         * @param width the width
         * @param height the height
         */
        void setWindowSize(int width, int height);

        /**
         * @brief Take a screenshot of the current window
         * @param fileName the file name to save the screenshot
         */
        void takeScreenshot(const std::string &fileName);

        /**
         * @brief Get the window title
         * @return the window title
         */
        const std::string &getTitle() const;

        /**
         * @brief Get the window width
         * @return the window width
         */
        const int &getWidth() const;

        /**
         * @brief Get the window height
         * @return the window height
         */
        const int &getHeight() const;

        /**
         * @brief Get the window minimum width
         * @return the window minimum width
         */
        const int &getMinWidth() const;

        /**
         * @brief Get the window minimum height
         * @return the window minimum height
         */
        const int &getMinHeight() const;

        /**
         * @brief Check if the window is created
         * @return true if the window is created, false otherwise
         */
        const bool &isIsCreated() const;

        /**
         * @brief Get the window mutable RlCamera
         * @return the window mutable RlCamera
         */
        raylib::RlCamera &getCamera();

        /**
         * @brief Get the window immutable RlCamera
         * @return the window immutable RlCamera
         */
        const raylib::RlCamera &getCamera() const;

        /**
         * @brief Set the window RlCamera
         * @param camera the window RlCamera
         */
        void setCamera(const RlCamera &camera);

    private:
        static std::shared_ptr<RlWindow> _instance; /**< The singleton instance of the RlWindow */

        std::string _title; /**< The title of the window */
        int _width; /**< The width of the window */
        int _height; /**< The height of the window */
        int _minWidth; /**< The minimum width of the window */
        int _minHeight; /**< The minimum height of the window */
        bool _isCreated = false; /**< If the window is created */

        raylib::RlCamera _camera; /**< The camera */
    };
}

#endif //RAYLIB_CPP_WINDOW_HPP
