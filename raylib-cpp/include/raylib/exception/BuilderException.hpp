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
    /**
     * @brief BuilderException class
     */
    class BuilderException : public RaylibException {
    public:
        /**
         * @brief BuilderException constructor
         * @param msg the message of the exception
         */
        explicit BuilderException(const std::string &msg);
    };
}
#endif //INDIESTUDIO_BUILDEREXCEPTION_HPP
