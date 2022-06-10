/*
** EPITECH PROJECT, 2022
** BuilderException.hpp
** File description:
** BuilderException.hpp
*/

#ifndef INDIESTUDIO_BUILDEREXCEPTION_HPP
#define INDIESTUDIO_BUILDEREXCEPTION_HPP

#include "raylib/exception/RaylibException.hpp"

namespace raylib::ex {
    class BuilderException : public RaylibException {
    public:
        explicit BuilderException(const std::string &msg);
    };
}
#endif //INDIESTUDIO_BUILDEREXCEPTION_HPP
