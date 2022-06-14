/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** CursorHelper
*/

#include "raylib/Inputs/CursorHelper.hpp"

void raylib::input::CursorHelper::showCursor()
{
    ShowCursor();
}

void raylib::input::CursorHelper::hideCursor()
{
    HideCursor();
}

bool raylib::input::CursorHelper::isCursorHidden()
{
    return IsCursorHidden();
}

void raylib::input::CursorHelper::enableCursor()
{
    EnableCursor();
}

void raylib::input::CursorHelper::disableCursor()
{
    DisableCursor();
}

bool raylib::input::CursorHelper::isCursorOnScreen()
{
    return IsCursorOnScreen();
}
