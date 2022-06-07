/*
** EPITECH PROJECT, 2022
** WindowException.hpp
** File description:
** WindowException.hpp
*/

#ifndef INDIESTUDIO_WINDOWEXCEPTION_HPP
#define INDIESTUDIO_WINDOWEXCEPTION_HPP

#include "RaylibException.hpp"

namespace raylib::ex {
    class WindowException : public RaylibException {
    public:
        explicit WindowException(const std::string &msg);
    };
}

#endif //INDIESTUDIO_WINDOWEXCEPTION_HPP
