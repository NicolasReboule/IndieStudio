/*
** EPITECH PROJECT, 2022
** Window.cpp
** File description:
** Window.cpp
*/

#include "raylib/Core.hpp"

void raylib::Core::initWindow(int width, int height, const char *title)
{
    InitWindow(width, height, title);
}

bool raylib::Core::isOpen()
{
    return !WindowShouldClose();
}

void raylib::Core::closeWindow()
{
    CloseWindow();
}

bool raylib::Core::isWindowReady()
{
    return IsWindowReady();
}

bool raylib::Core::isWindowFullscreen()
{
    return IsWindowFullscreen();
}

bool  raylib::Core::isWindowHidden()
{
    return IsWindowHidden();
}

bool raylib::Core::isWindowMaximized()
{
    return IsWindowMaximized();
}

bool raylib::Core::isWindowMinimized()
{
    return IsWindowMinimized();
}

bool raylib::Core::isWindowFocused()
{
    return IsWindowFocused();
}

bool raylib::Core::isWindowResized()
{
    return IsWindowResized();
}

bool raylib::Core::isWindowState(unsigned int flag)
{
    return IsWindowState(flag);
}

void raylib::Core::setWindowState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::Core::clearWindowState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::Core::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::Core::maximizeWindow()
{
    MaximizeWindow();
}

void raylib::Core::minimizeWindow()
{
    MinimizeWindow();
}

void raylib::Core::restoreWindow()
{
    RestoreWindow();
}

void raylib::Core::setWindowIcon(Image image)
{
    SetWindowIcon(image);
}

void raylib::Core::setWindowTitle(const std::string &title)
{
    SetWindowTitle(title.c_str());
}

void raylib::Core::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::Core::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::Core::setWindowMinSize(int width, int height)
{
    SetWindowMinSize(width, height);
}

void raylib::Core::setWindowSize(int width, int height)
{
    SetWindowSize(width, height);
}

std::shared_ptr<void *> raylib::Core::getWindowHandle()
{
    return std::make_shared<void *>(GetWindowHandle());
}

int raylib::Core::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::Core::getScreenHeight()
{
    return GetScreenHeight();
}

int raylib::Core::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::Core::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2 raylib::Core::getMonitorPosition(int monitor)
{
    return GetMonitorPosition(monitor);
}

int raylib::Core::getMonitorWidth(int monitor)
{
    return GetMonitorWidth(monitor);
}

int raylib::Core::getMonitorHeight(int monitor)
{
    return GetMonitorHeight(monitor);
}

int raylib::Core::getMonitorPhysicalWidth(int monitor)
{
    return GetMonitorPhysicalWidth(monitor);
}

int raylib::Core::getMonitorPhysicalHeight(int monitor)
{
    return GetMonitorPhysicalHeight(monitor);
}

int raylib::Core::getMonitorRefreshRate(int monitor)
{
    return GetMonitorRefreshRate(monitor);
}

Vector2 raylib::Core::getWindowPosition()
{
    return GetWindowPosition();
}

Vector2 raylib::Core::getWindowScaleDPI()
{
    return GetWindowScaleDPI();
}

std::string raylib::Core::getMonitorName(int monitor)
{
    return GetMonitorName(monitor);
}

void raylib::Core::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::Core::getClipboardText()
{
    return GetClipboardText();
}
