/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** CursorHelper
*/

#include "raylib/Inputs/CursorHelper.hpp"

void raylib::helper::input::CursorHelper::showCursor()
{
    ShowCursor();
}

void raylib::helper::input::CursorHelper::hideCursor()
{
    HideCursor();
}

bool raylib::helper::input::CursorHelper::isCursorHidden()
{
    return IsCursorHidden();
}

void raylib::helper::input::CursorHelper::enableCursor()
{
    EnableCursor();
}

void raylib::helper::input::CursorHelper::disableCursor()
{
    DisableCursor();
}

bool raylib::helper::input::CursorHelper::isCursorOnScreen()
{
    return IsCursorOnScreen();
}
