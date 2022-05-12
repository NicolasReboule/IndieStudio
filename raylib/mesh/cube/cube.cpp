/*
** EPITECH PROJECT, 2022
** cube.cpp
** File description:
** cube.pp
*/

#include "cube.hpp"

raylib::Cube::Cube(Vector3 position, Vector3 size, Vector3 wireSize, Color color, Color wireColor)
{
    this->_position = position;
    this->_size = size;
    this->_wireSize = wireSize;
    this->_color = color;
    this->_wireColor = wireColor;
}

raylib::Cube::~Cube() {}

void raylib::Cube::setPosition(Vector3 position)
{
    this->_position = position;
}

Vector3 raylib::Cube::getPosition()
{
    return (this->_position);
}

void raylib::Cube::setSize(Vector3 size)
{
    this->_size = size;
}

Vector3 raylib::Cube::getSize()
{
    return (this->_size);
}

void raylib::Cube::setWireSize(Vector3 wireSize)
{
    this->_wireSize = wireSize;
}

Vector3 raylib::Cube::getWireSize()
{
    return (this->_wireSize);
}

void raylib::Cube::setColor(Color color)
{
    this->_color = color;
}

Color raylib::Cube::getColor()
{
    return (this->_color);
}

void raylib::Cube::setWireColor(Color color)
{
    this->_wireColor = color;
}

Color raylib::Cube::getWireColor()
{
    return (this->_wireColor);
}













