/*
** EPITECH PROJECT, 2022
** Window.cpp
** FileHelper description:
** Window.cpp
*/

#include "raylib/Window/Window.hpp"

raylib::Window::Window(const std::string &title, int width, int height)
{
    this->_title = title;
    this->_width = width;
    this->_height = height;
    this->_minWidth = 0;
    this->_minHeight = 0;
    InitWindow(this->_width, this->_height, this->_title.c_str());

    std::cout << "Window created (" << this->_width << "x" << this->_height << "): " << this->_title << std::endl;
}

raylib::Window::~Window()
{
    CloseWindow();
    //can't fix glfwInit leak
    std::cout << "Window destroyed" << std::endl;
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

std::shared_ptr<void *> raylib::Window::getWindowHandle()
{
    return std::make_shared<void *>(GetWindowHandle());
}

int raylib::Window::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::Window::getScreenHeight()
{
    return GetScreenHeight();
}

int raylib::Window::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::Window::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2 raylib::Window::getMonitorPosition(int monitor)
{
    return GetMonitorPosition(monitor);
}

int raylib::Window::getMonitorWidth(int monitor)
{
    return GetMonitorWidth(monitor);
}

int raylib::Window::getMonitorHeight(int monitor)
{
    return GetMonitorHeight(monitor);
}

int raylib::Window::getMonitorPhysicalWidth(int monitor)
{
    return GetMonitorPhysicalWidth(monitor);
}

int raylib::Window::getMonitorPhysicalHeight(int monitor)
{
    return GetMonitorPhysicalHeight(monitor);
}

int raylib::Window::getMonitorRefreshRate(int monitor)
{
    return GetMonitorRefreshRate(monitor);
}

Vector2 raylib::Window::getWindowPosition()
{
    return GetWindowPosition();
}

Vector2 raylib::Window::getWindowScaleDPI()
{
    return GetWindowScaleDPI();
}

std::string raylib::Window::getMonitorName(int monitor)
{
    return GetMonitorName(monitor);
}

void raylib::Window::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::Window::getClipboardText()
{
    return GetClipboardText();
}
