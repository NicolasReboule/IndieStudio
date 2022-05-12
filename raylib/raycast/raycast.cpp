/*
** EPITECH PROJECT, 2022
** raycast.cpp
** File description:
** raycast.cpp
*/

#include "raycast.hpp"

raylib::Raycast::Raycast(Vector3 position, Vector3 direction, float distance)
{
    this->_position = position;
    this->_direction = direction;
    this->_distance = distance;
    this->_color = BLANK;
}

raylib::Raycast::~Raycast() = default;

bool raylib::Raycast::isCollidingBox(Vector3 position, Vector3 size)
{
    Vector3 min = (Vector3){ position.x - size.x/2,position.y - size.y/2,position.z - size.z/2 };
    Vector3 max = (Vector3){ position.x - size.x/2,position.y - size.y/2,position.z - size.z/2 };
    BoundingBox box = (BoundingBox){min, max};
    Ray raycast = {this->_position, this->_direction};
    RayCollision collision = GetRayCollisionBox(raycast, box);
    if (collision.hit && collision.distance < this->_distance)
        return true;
    return false;
}

void raylib::Raycast::draw()
{
    Ray raycast = {this->_position, this->_direction};
    DrawRay(raycast, this->_color);
}


























