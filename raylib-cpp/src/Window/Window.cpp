/*
** EPITECH PROJECT, 2022
** Window.cpp
** FileHelper description:
** Window.cpp
*/

#include "raylib/Window/Window.hpp"

std::shared_ptr<raylib::Window> raylib::Window::_instance;

void raylib::Window::createWindow(const std::string &title, int height, int width)
{
    try {
        if (_isCreated)
            throw raylib::ex::WindowException("Window already created");
        else {
            this->_title = title;
            this->_width = width;
            this->_height = height;
            this->_minWidth = 0;
            this->_minHeight = 0;
            InitWindow(this->_width, this->_height, this->_title.c_str());
            _isCreated = true;
            std::cout << "Window created (" << this->_width << "x" << this->_height << "): " << this->_title << std::endl;
        }
    } catch (const raylib::ex::WindowException &e) {
        std::cerr << e.what() << std::endl;
    }
}

raylib::Window::~Window()
{
    CloseWindow();
    //can't fix glfwInit leak
    std::cout << "Window destroyed" << std::endl;
}

std::shared_ptr<raylib::Window> &raylib::Window::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<raylib::Window>();
    return _instance;
}

// Window-related functions

bool raylib::Window::isOpen()
{
    return !WindowShouldClose();
}

bool raylib::Window::isWindowReady()
{
    return IsWindowReady();
}

bool raylib::Window::isWindowFullscreen()
{
    return IsWindowFullscreen();
}

bool  raylib::Window::isWindowHidden()
{
    return IsWindowHidden();
}

bool raylib::Window::isWindowMaximized()
{
    return IsWindowMaximized();
}

bool raylib::Window::isWindowMinimized()
{
    return IsWindowMinimized();
}

bool raylib::Window::isWindowFocused()
{
    return IsWindowFocused();
}

bool raylib::Window::isWindowResized()
{
    return IsWindowResized();
}

bool raylib::Window::isWindowState(unsigned int flag)
{
    return IsWindowState(flag);
}

void raylib::Window::setWindowState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::Window::clearWindowState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::Window::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::Window::maximizeWindow()
{
    MaximizeWindow();
}

void raylib::Window::minimizeWindow()
{
    MinimizeWindow();
}

void raylib::Window::restoreWindow()
{
    RestoreWindow();
}

void raylib::Window::setWindowIcon(Image image)
{
    SetWindowIcon(image);
}

void raylib::Window::setWindowTitle(const std::string &title)
{
    _title = title;
    SetWindowTitle(title.c_str());
}

void raylib::Window::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::Window::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::Window::setWindowMinSize(int width, int height)
{
    this->_minHeight = height;
    this->_minWidth = width;
    SetWindowMinSize(width, height);
}

void raylib::Window::setWindowSize(int width, int height)
{
    this->_height = height;
    this->_width = width;
    SetWindowSize(width, height);
}
