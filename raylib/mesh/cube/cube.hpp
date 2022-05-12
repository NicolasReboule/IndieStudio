/*
** EPITECH PROJECT, 2022
** cube.hpp
** File description:
** cube.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CUBE_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CUBE_HPP

#include "../../raylib.hpp"

namespace raylib {
    class Cube {
    public:
        Cube(Vector3 position, Vector3 size, Vector3 wireSize, Color color, Color wireColor);
        ~Cube();

        void setPosition(Vector3 position);

        Vector3 getPosition();

        void setSize(Vector3 size);

        Vector3 getSize();

        void setWireSize(Vector3 wireSize);

        Vector3 getWireSize();

        void setColor(Color color);

        Color getColor();

        void setWireColor(Color color);

        Color getWireColor();

    private:
        Color _color;
        Color _wireColor;
        Vector3 _position;
        Vector3 _size;
        Vector3 _wireSize;
    };
}

#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CUBE_HPP
