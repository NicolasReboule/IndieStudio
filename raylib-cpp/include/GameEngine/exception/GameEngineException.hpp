/*
** EPITECH PROJECT, 2022
** GameEngineException.hpp
** File description:
** GameEngineException.hpp
*/

#ifndef INDIESTUDIO_GAMEENGINEEXCEPTION_HPP
#define INDIESTUDIO_GAMEENGINEEXCEPTION_HPP

#include <exception>
#include <string>

namespace gameengine::ex {
    /**
     * @brief All exception thrown by the GameEngine will herit from this class
     */
    class GameEngineException : public std::exception {
    public:
        /**
         * @brief Create an exception with the message and a potential prefix
         * @param message the message of the exception
         * @param prefix if prefix "[GameEngine]" will be added to the message
         */
        explicit GameEngineException(const std::string &message, const bool &prefix = true);

        /**
         * @brief What override
         * @return the message of the exception
         */
        const char *what() const noexcept override;

    private:
        std::string _msg; /**< The message */
    };
}

#endif //INDIESTUDIO_GAMEENGINEEXCEPTION_HPP
