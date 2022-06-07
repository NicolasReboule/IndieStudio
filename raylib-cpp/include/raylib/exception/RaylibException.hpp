/*
** EPITECH PROJECT, 2022
** RaylibException.hpp
** File description:
** RaylibException.hpp
*/

#ifndef INDIESTUDIO_RAYLIBEXCEPTION_HPP
#define INDIESTUDIO_RAYLIBEXCEPTION_HPP

#include <exception>
#include <string>

namespace raylib::ex {
    class RaylibException : public std::exception {
    public:
        explicit RaylibException(const std::string &msg, bool prefix = true);
        const char *what() const noexcept override;

    private:
        std::string _msg;
    };
}

#endif //INDIESTUDIO_RAYLIBEXCEPTION_HPP
