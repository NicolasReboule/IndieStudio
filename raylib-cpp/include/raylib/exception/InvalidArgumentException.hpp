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
     * @brief Exception thrown when an invalid argument is passed to a function
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
