/*
** EPITECH PROJECT, 2022
** Color.hpp
** File description:
** Color.hpp
*/

#ifndef INDIESTUDIO_RLCOLOR_HPP
#define INDIESTUDIO_RLCOLOR_HPP

#include <cstdint>
#include "raylib.h"

namespace raylib {
    class RlColor {
    public:
        RlColor(Color color);
        RlColor(unsigned int r,unsigned int g, unsigned int b, unsigned int a);

        const Color &getColor() const;
        unsigned int getRed() const;
        unsigned int getGreen() const;
        unsigned int getBlue() const;
        unsigned int getAlpha() const;

        void setColor(unsigned int r,unsigned int g, unsigned int b, unsigned int a);
    private:
        Color _color;
    };
}
#endif //INDIESTUDIO_RLCOLOR_HPP
