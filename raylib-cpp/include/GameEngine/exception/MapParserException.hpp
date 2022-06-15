/*
** EPITECH PROJECT, 2022
** MapParserException.hpp
** File description:
** MapParserException.hpp
*/

#ifndef INDIESTUDIO_MAPPARSEREXCEPTION_HPP
#define INDIESTUDIO_MAPPARSEREXCEPTION_HPP

#include "GameEngineException.hpp"

namespace gameengine::ex {
    /**
     * @brief Exception thrown by the Parser
     */
    class MapParserException : public GameEngineException {
    public:
        /**
         * @brief Create a new MapParserException object
         * @param message the message of the exception
         */
        explicit MapParserException(const std::string &message);
    };
}

#endif //INDIESTUDIO_MAPPARSEREXCEPTION_HPP
