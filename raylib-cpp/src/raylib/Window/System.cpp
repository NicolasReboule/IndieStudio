/*
** EPITECH PROJECT, 2022
** System.cpp
** File description:
** System.cpp
*/

#include "raylib/Window/System.hpp"

int raylib::System::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::System::getScreenHeight()
{
    return GetScreenHeight();
}

Vector2i raylib::System::getScreenSize()
{
    return {getScreenWidth(), getScreenHeight()};
}

int raylib::System::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::System::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2f raylib::System::getMonitorPosition(int monitorIndex)
{
    return raylib::VectorHelper::toVectorf(GetMonitorPosition(monitorIndex));
}

int raylib::System::getMonitorWidth(int monitorIndex)
{
    return GetMonitorWidth(monitorIndex);
}

int raylib::System::getMonitorHeight(int monitorIndex)
{
    return GetMonitorHeight(monitorIndex);
}

Vector2i raylib::System::getMonitorSize(int monitorIndex)
{
    return {getMonitorWidth(monitorIndex), getMonitorHeight(monitorIndex)};
}

int raylib::System::getMonitorPhysicalWidth(int monitorIndex)
{
    return GetMonitorPhysicalWidth(monitorIndex);
}

int raylib::System::getMonitorPhysicalHeight(int monitorIndex)
{
    return GetMonitorPhysicalHeight(monitorIndex);
}

Vector2i raylib::System::getMonitorPhysicalSize(int monitorIndex)
{
    return {getMonitorPhysicalWidth(monitorIndex), getMonitorPhysicalHeight(monitorIndex)};
}

int raylib::System::getMonitorRefreshRate(int monitorIndex)
{
    return GetMonitorRefreshRate(monitorIndex);
}

Vector2f raylib::System::getWindowPosition()
{
    return raylib::VectorHelper::toVectorf(GetWindowPosition());
}

Vector2f raylib::System::getWindowScaleDPI()
{
    return raylib::VectorHelper::toVectorf(GetWindowScaleDPI());
}

std::string raylib::System::getMonitorName(int monitorIndex)
{
    return GetMonitorName(monitorIndex);
}

void raylib::System::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::System::getClipboardText()
{
    return GetClipboardText();
}
