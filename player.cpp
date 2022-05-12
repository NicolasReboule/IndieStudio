/*
** EPITECH PROJECT, 2022
** player.cpp
** File description:
** player.cpp
*/

#include "player.hpp"

Player::Player(Vector3 position, Vector3 size, Color color)
        : _firstRaycast(), _secondRaycast(), _texture() {

    this->_speed = 1;
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

Player::~Player() = default;

void Player::moveAndCollide(std::vector<raylib::Cube> world) {
    /*for (auto &item: world) {
        if (this->_firstRaycast.isCollidingBox(item.getPosition(), item.getSize()) &&
            !this->_secondRaycast.isCollidingBox(item.getPosition(), item.getSize())) {
            return;
        }
    }*/

    this->_position = (Vector3) {this->_position.x * this->_direction.x + this->_speed,
                                 this->_position.y * this->_direction.y + this->_speed,
                                 this->_position.z * this->_direction.z + this->_speed};
    this->_firstRaycast.setPosition(this->_position);
    this->_secondRaycast.setPosition(this->_position);
    this->_texture.setPosition(this->_position);
}

void Player::draw()
{
    this->_texture.draw();
    this->_firstRaycast.draw();
    this->_secondRaycast.draw();
}

void Player::setDirection(Vector3 direction)
{
    this->_direction = direction;
}

