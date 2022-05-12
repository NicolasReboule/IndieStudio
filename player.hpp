/*
** EPITECH PROJECT, 2022
** player.hpp
** File description:
** player.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_PLAYER_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_PLAYER_HPP

#include "./raylib/raylib-cpp.hpp"

class Player {
public:
    Player(Vector3 position, Vector3 size, Color color);
    ~Player();

    void moveAndCollide(std::vector<raylib::Cube> world);

    void setDirection(Vector3 direction);

    void draw();

private:
    float _speed;
    Vector3 _position;
    float _hitDistance;
    Vector3 _direction;
    raylib::Cube _texture;
    raylib::Raycast _firstRaycast;
    raylib::Raycast _secondRaycast;
};

#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_PLAYER_HPP
