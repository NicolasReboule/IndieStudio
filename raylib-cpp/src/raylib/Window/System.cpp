/*
** EPITECH PROJECT, 2022
** System.cpp
** File description:
** System.cpp
*/

#include "raylib/Window/System.hpp"

int raylib::window::System::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::window::System::getScreenHeight()
{
    return GetScreenHeight();
}

Vector2i raylib::window::System::getScreenSize()
{
    return {getScreenWidth(), getScreenHeight()};
}

int raylib::window::System::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::window::System::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2f raylib::window::System::getMonitorPosition(int monitorIndex)
{
    return raylib::VectorHelper::toVectorf(GetMonitorPosition(monitorIndex));
}

int raylib::window::System::getMonitorWidth(int monitorIndex)
{
    return GetMonitorWidth(monitorIndex);
}

int raylib::window::System::getMonitorHeight(int monitorIndex)
{
    return GetMonitorHeight(monitorIndex);
}

Vector2i raylib::window::System::getMonitorSize(int monitorIndex)
{
    return {getMonitorWidth(monitorIndex), getMonitorHeight(monitorIndex)};
}

int raylib::window::System::getMonitorPhysicalWidth(int monitorIndex)
{
    return GetMonitorPhysicalWidth(monitorIndex);
}

int raylib::window::System::getMonitorPhysicalHeight(int monitorIndex)
{
    return GetMonitorPhysicalHeight(monitorIndex);
}

Vector2i raylib::window::System::getMonitorPhysicalSize(int monitorIndex)
{
    return {getMonitorPhysicalWidth(monitorIndex), getMonitorPhysicalHeight(monitorIndex)};
}

int raylib::window::System::getMonitorRefreshRate(int monitorIndex)
{
    return GetMonitorRefreshRate(monitorIndex);
}

Vector2f raylib::window::System::getWindowPosition()
{
    return raylib::VectorHelper::toVectorf(GetWindowPosition());
}

Vector2f raylib::window::System::getWindowScaleDPI()
{
    return raylib::VectorHelper::toVectorf(GetWindowScaleDPI());
}

std::string raylib::window::System::getMonitorName(int monitorIndex)
{
    return GetMonitorName(monitorIndex);
}

void raylib::window::System::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::window::System::getClipboardText()
{
    return GetClipboardText();
}
