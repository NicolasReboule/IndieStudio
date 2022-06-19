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
    raylib::helper::CoreHelper::setFramerateLimit(fps);
    this->_isCreated = true;
    this->_isOpen = true;
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
    return !WindowShouldClose() && this->_isOpen;
}

bool raylib::window::RlWindow::isReady()
{
    return IsWindowReady();
}

bool raylib::window::RlWindow::isFullScreen()
{
    return IsWindowFullscreen();
}

bool raylib::window::RlWindow::isHidden()
{
    return IsWindowHidden();
}

bool raylib::window::RlWindow::isMaximized()
{
    return IsWindowMaximized();
}

bool raylib::window::RlWindow::isMinimized()
{
    return IsWindowMinimized();
}

bool raylib::window::RlWindow::isFocused()
{
    return IsWindowFocused();
}

bool raylib::window::RlWindow::isResized()
{
    return IsWindowResized();
}

bool raylib::window::RlWindow::hasState(const ConfigFlags &flag)
{
    return IsWindowState(flag);
}

void raylib::window::RlWindow::setState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::window::RlWindow::setConfigFlags(unsigned int flags)
{
    SetConfigFlags(flags);
}

void raylib::window::RlWindow::clearState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::window::RlWindow::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::window::RlWindow::maximize()
{
    MaximizeWindow();
}

void raylib::window::RlWindow::minimize()
{
    MinimizeWindow();
}

void raylib::window::RlWindow::restore()
{
    RestoreWindow();
}

void raylib::window::RlWindow::setIcon(const image::RlImage &image)
{
    SetWindowIcon(image.getImage());
}

void raylib::window::RlWindow::setTitle(const std::string &title)
{
    _title = title;
    SetWindowTitle(title.c_str());
}

void raylib::window::RlWindow::setPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::window::RlWindow::setMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::window::RlWindow::setMinSize(int width, int height)
{
    this->_minHeight = height;
    this->_minWidth = width;
    SetWindowMinSize(width, height);
}

void raylib::window::RlWindow::setSize(int width, int height)
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

raylib::RlCamera &raylib::window::RlWindow::getCamera()
{
    return this->_camera;
}

const raylib::RlCamera &raylib::window::RlWindow::getCamera() const
{
    return this->_camera;
}

void raylib::window::RlWindow::setCamera(const raylib::RlCamera &camera)
{
    this->_camera = camera;
}

void raylib::window::RlWindow::setIsOpen(const bool &isOpen)
{
    this->_isOpen = isOpen;
}
