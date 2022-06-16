/*
** EPITECH PROJECT, 2022
** RlWindow.cpp
** FileHelper description:
** RlWindow.cpp
*/

#include "raylib/Window/RlWindow.hpp"

std::shared_ptr<raylib::window::RlWindow> raylib::window::RlWindow::_instance;

raylib::window::RlWindow::RlWindow() : _width(), _height(), _minWidth(), _minHeight()
{
}

void raylib::window::RlWindow::createWindow(const std::string &title, int width, int height, int fps)
{
    if (_isCreated)
        throw raylib::ex::WindowException("RlWindow already created");
    this->_title = title;
    this->_width = width;
    this->_height = height;
    this->_minWidth = 0;
    this->_minHeight = 0;
    InitWindow(this->_width, this->_height, this->_title.c_str());
    raylib::CoreHelper::setFramerateLimit(fps);
    this->_isCreated = true;
    std::cout << "RlWindow created (" << this->_width << "x" << this->_height << "): " << this->_title << std::endl;
}

raylib::window::RlWindow::~RlWindow()
{
    CloseWindow();
    std::cout << "RlWindow destroyed" << std::endl;
}

std::shared_ptr<raylib::window::RlWindow> &raylib::window::RlWindow::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<raylib::window::RlWindow>();
    return _instance;
}

bool raylib::window::RlWindow::isOpen()
{
    return !WindowShouldClose();
}

bool raylib::window::RlWindow::isWindowReady()
{
    return IsWindowReady();
}

bool raylib::window::RlWindow::isWindowFullscreen()
{
    return IsWindowFullscreen();
}

bool raylib::window::RlWindow::isWindowHidden()
{
    return IsWindowHidden();
}

bool raylib::window::RlWindow::isWindowMaximized()
{
    return IsWindowMaximized();
}

bool raylib::window::RlWindow::isWindowMinimized()
{
    return IsWindowMinimized();
}

bool raylib::window::RlWindow::isWindowFocused()
{
    return IsWindowFocused();
}

bool raylib::window::RlWindow::isWindowResized()
{
    return IsWindowResized();
}

bool raylib::window::RlWindow::hasWindowState(const ConfigFlags &flag)
{
    return IsWindowState(flag);
}

void raylib::window::RlWindow::setWindowState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::window::RlWindow::setConfigFlags(unsigned int flags)
{
    SetConfigFlags(flags);
}

void raylib::window::RlWindow::clearWindowState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::window::RlWindow::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::window::RlWindow::maximizeWindow()
{
    MaximizeWindow();
}

void raylib::window::RlWindow::minimizeWindow()
{
    MinimizeWindow();
}

void raylib::window::RlWindow::restoreWindow()
{
    RestoreWindow();
}

void raylib::window::RlWindow::setWindowIcon(const image::RlImage &image)
{
    SetWindowIcon(image.getImage());
}

void raylib::window::RlWindow::setWindowTitle(const std::string &title)
{
    _title = title;
    SetWindowTitle(title.c_str());
}

void raylib::window::RlWindow::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::window::RlWindow::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::window::RlWindow::setWindowMinSize(int width, int height)
{
    this->_minHeight = height;
    this->_minWidth = width;
    SetWindowMinSize(width, height);
}

void raylib::window::RlWindow::setWindowSize(int width, int height)
{
    this->_height = height;
    this->_width = width;
    SetWindowSize(width, height);
}

void raylib::window::RlWindow::takeScreenshot(const std::string &fileName)
{
    TakeScreenshot(fileName.c_str());
}

const std::string &raylib::window::RlWindow::getTitle() const
{
    return this->_title;
}

const int &raylib::window::RlWindow::getWidth() const
{
    return this->_width;
}

const int &raylib::window::RlWindow::getHeight() const
{
    return this->_height;
}

const int &raylib::window::RlWindow::getMinWidth() const
{
    return this->_minWidth;
}

const int &raylib::window::RlWindow::getMinHeight() const
{
    return this->_minHeight;
}

const bool &raylib::window::RlWindow::isIsCreated() const
{
    return this->_isCreated;
}
