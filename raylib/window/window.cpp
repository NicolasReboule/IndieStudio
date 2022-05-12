/*
** EPITECH PROJECT, 2022
** window.cpp
** File description:
** window.cpp
*/

#include "window.hpp"

raylib::Window::Window()
{
    this->_width = 800;
    this->_height = 450;
    this->_title = "---raylib---";
    SetTargetFPS(60);
    InitWindow(this->_width, this->_height, this->_title.c_str());
}

raylib::Window::Window(Vector2 size, std::string title, int fps)
{
    this->_width = (int)size.x;
    this->_height = (int)size.y;
    this->_title = std::move(title);
    SetTargetFPS(fps);
    InitWindow(this->_width, this->_height, this->_title.c_str());
}

raylib::Window::~Window() = default;

void raylib::Window::setTargetFPS(int fps)
{
    SetTargetFPS(fps);
}

void raylib::Window::draw()
{
    BeginDrawing();
}

void raylib::Window::endDraw()
{
    EndDrawing();
}

void raylib::Window::clear(Color color)
{
    ClearBackground(color);
}

void raylib::Window::setSize(Vector2 size)
{
    SetWindowSize(size.x, size.y);
}

Vector2 raylib::Window::getSize()
{
    float width = this->_width;
    float height = this->_height;
    Vector2 size = (Vector2){width, height};
    return (size);
}

bool raylib::Window::isOpen()
{
    return (!WindowShouldClose());
}

void raylib::Window::drawFps(Vector2 position)
{
    DrawFPS((int)position.x, (int)position.y);
}

void raylib::Window::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}

void raylib::Window::close()
{
    CloseWindow();
}















