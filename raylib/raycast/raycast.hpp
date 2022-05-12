/*
** EPITECH PROJECT, 2022
** raycast.hpp
** File description:
** raycast.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_RAYCAST_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_RAYCAST_HPP

#include "../raylib.hpp"

namespace raylib {
    class Raycast {
    public:
        Raycast();
        Raycast(Vector3 position, Vector3 direction, float distance);
        ~Raycast();

        void setPosition(Vector3 position);

        void setDirection(Vector3 direction);

        void setDistance(float distance);

        void setColor(Color color);

        bool isCollidingBox(Vector3 position, Vector3 size);

        void draw();

    private:
        Vector3 _position;
        Vector3 _direction;
        float _distance;
        Color _color;
    };
}

#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_RAYCAST_HPP
