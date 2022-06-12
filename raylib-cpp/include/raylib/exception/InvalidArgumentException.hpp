/*
** EPITECH PROJECT, 2022
** InvalidArgumentException.hpp
** File description:
** InvalidArgumentException.hpp
*/

#ifndef INDIESTUDIO_INVALIDARGUMENTEXCEPTION_HPP
#define INDIESTUDIO_INVALIDARGUMENTEXCEPTION_HPP

#include "RaylibException.hpp"

namespace raylib::ex {
    /**
     * @brief InvalidArgumentException class
     */
    class InvalidArgumentException : public RaylibException {
    public:
        /**
         * @brief InvalidArgumentException constructor
         * @param msg the message of the exception
         */
        explicit InvalidArgumentException(const std::string &msg);
    };
}

#endif //INDIESTUDIO_INVALIDARGUMENTEXCEPTION_HPP
