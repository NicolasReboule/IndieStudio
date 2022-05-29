/*
** EPITECH PROJECT, 2022
** Window.cpp
** File description:
** Window.cpp
*/

#include "raylib/Window/Window.hpp"
#include "raylib/Core.hpp"

raylib::Window::Window(const std::string &title, int width, int height)
{
    this->_title = title;
    this->_width = width;
    this->_height = height;
    raylib::Core::initWindow(this->_width, this->_height, this->_title);
    std::cout << "Window created (" << this->_width << "x" << this->_height << "): " << this->_title << std::endl;
}

raylib::Window::~Window()
{
    raylib::Core::closeWindow();
    //can't fix glfwInit leak
    std::cout << "Window destroyed" << std::endl;
}
