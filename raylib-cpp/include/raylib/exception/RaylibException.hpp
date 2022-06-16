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
    /**
     * @brief All exceptions of the raylib-cpp library will inherit from this class
     */
    class RaylibException : public std::exception {
    public:
        /**
         * @brief RaylibException constructor
         * @param msg the message of the exception
         * @param prefix if prefix "[Raylib]" should be added to the message
         */
        explicit RaylibException(const std::string &msg, bool prefix = true);

        /**
         * @brief What override
         * @return the message of the exception
         */
        const char *what() const noexcept override;

    private:
        std::string _msg; /**< The message */
    };
}

#endif //INDIESTUDIO_RAYLIBEXCEPTION_HPP
