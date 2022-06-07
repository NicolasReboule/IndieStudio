/*
** EPITECH PROJECT, 2022
** RlWindow.cpp
** FileHelper description:
** RlWindow.cpp
*/

#include "raylib/Window/RlWindow.hpp"

std::shared_ptr<raylib::RlWindow> raylib::RlWindow::_instance;

void raylib::RlWindow::createWindow(const std::string &title, int height, int width)
{
    try {
        if (_isCreated)
            throw raylib::ex::WindowException("RlWindow already created");
        else {
            this->_title = title;
            this->_width = width;
            this->_height = height;
            this->_minWidth = 0;
            this->_minHeight = 0;
            InitWindow(this->_width, this->_height, this->_title.c_str());
            _isCreated = true;
            std::cout << "RlWindow created (" << this->_width << "x" << this->_height << "): " << this->_title << std::endl;
        }
    } catch (const raylib::ex::WindowException &e) {
        std::cerr << e.what() << std::endl;
    }
}

raylib::RlWindow::~RlWindow()
{
    CloseWindow();
    //can't fix glfwInit leak
    std::cout << "RlWindow destroyed" << std::endl;
}

std::shared_ptr<raylib::RlWindow> &raylib::RlWindow::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<raylib::RlWindow>();
    return _instance;
}

// RlWindow-related functions

bool raylib::RlWindow::isOpen()
{
    return !WindowShouldClose();
}

bool raylib::RlWindow::isWindowReady()
{
    return IsWindowReady();
}

bool raylib::RlWindow::isWindowFullscreen()
{
    return IsWindowFullscreen();
}

bool  raylib::RlWindow::isWindowHidden()
{
    return IsWindowHidden();
}

bool raylib::RlWindow::isWindowMaximized()
{
    return IsWindowMaximized();
}

bool raylib::RlWindow::isWindowMinimized()
{
    return IsWindowMinimized();
}

bool raylib::RlWindow::isWindowFocused()
{
    return IsWindowFocused();
}

bool raylib::RlWindow::isWindowResized()
{
    return IsWindowResized();
}

bool raylib::RlWindow::isWindowState(unsigned int flag)
{
    return IsWindowState(flag);
}

void raylib::RlWindow::setWindowState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::RlWindow::clearWindowState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::RlWindow::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::RlWindow::maximizeWindow()
{
    MaximizeWindow();
}

void raylib::RlWindow::minimizeWindow()
{
    MinimizeWindow();
}

void raylib::RlWindow::restoreWindow()
{
    RestoreWindow();
}

void raylib::RlWindow::setWindowIcon(Image image)
{
    SetWindowIcon(image);
}

void raylib::RlWindow::setWindowTitle(const std::string &title)
{
    _title = title;
    SetWindowTitle(title.c_str());
}

void raylib::RlWindow::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::RlWindow::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::RlWindow::setWindowMinSize(int width, int height)
{
    this->_minHeight = height;
    this->_minWidth = width;
    SetWindowMinSize(width, height);
}

void raylib::RlWindow::setWindowSize(int width, int height)
{
    this->_height = height;
    this->_width = width;
    SetWindowSize(width, height);
}
