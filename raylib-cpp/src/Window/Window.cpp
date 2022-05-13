/*
** EPITECH PROJECT, 2022
** Window.cpp
** File description:
** Window.cpp
*/

#include "raylib/Window/Window.hpp"

rl::Window::Window(const std::string &title, int width, int height)
{
    this->_title = title;
    this->_width = width;
    this->_height = height;
    std::cout << "Window created" << std::endl;
}

rl::Window::~Window()
{
    std::cout << "Window destroyed" << std::endl;
}
