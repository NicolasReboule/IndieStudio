/*
** EPITECH PROJECT, 2022
** KinematicBody.cpp
** File description:
** KinematicBody.cpp
*/

#include "kinematicBody.hpp"
#include <iostream>

KinematicBody::KinematicBody(Vector3 position, Vector3 size, Color color)
        : _firstRaycast(), _secondRaycast(), _texture() {

    this->_speed = 0.1;
    this->_hitDistance = 0.1f;
    this->_position = position;

    this->_direction = (Vector3){1, 0, 0};

    Vector3 direction = {1, 0, 0};
    this->_firstRaycast.setDirection(direction);
    this->_firstRaycast.setDistance(this->_hitDistance);
    this->_firstRaycast.setDirection(direction);
    this->_secondRaycast.setDistance(this->_hitDistance);

    this->_firstRaycast.setPosition(this->_position);
    this->_secondRaycast.setPosition(this->_position);

    this->_texture.setPosition(this->_position);
}

KinematicBody::~KinematicBody() = default;

void KinematicBody::moveAndCollide(std::vector<raylib::Cube> world) {
    for (auto &item: world) {
        if (this->_firstRaycast.isCollidingBox(item.getPosition(), item.getSize()) &&
            !this->_secondRaycast.isCollidingBox(item.getPosition(), item.getSize())) {
            return;
        }
    }

    //std::cout << "position(" << this->_position.x << "," << this->_position.y << "," << this->_position.z << ")" << std::endl;
    //std::cout << "direction(" << this->_direction.x << "," << this->_direction.y << "," << this->_direction.z << ")" << std::endl;
    this->_position = (Vector3) {this->_position.x + this->_direction.x * this->_speed,
                                 this->_position.y + this->_direction.y * this->_speed,
                                 this->_position.z + this->_direction.z * this->_speed};
    this->_firstRaycast.setPosition(this->_position);
    this->_secondRaycast.setPosition(this->_position);
    this->_texture.setPosition(this->_position);
    //std::cout << "position(" << this->_position.x << "," << this->_position.y << "," << this->_position.z << ")" << std::endl;
    //std::cout << "direction(" << this->_direction.x << "," << this->_direction.y << "," << this->_direction.z << ")" << std::endl;
}

void KinematicBody::draw()
{
    this->_texture.draw();
    this->_firstRaycast.draw();
    this->_secondRaycast.draw();
}

void KinematicBody::setDirection(Vector3 direction)
{
    this->_direction = direction;
    this->_firstRaycast.setDirection(this->_direction);
    this->_secondRaycast.setDirection(this->_direction);
}

