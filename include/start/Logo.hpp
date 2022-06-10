/*
** EPITECH PROJECT, 2022
** Logo.hpp
** File description:
** Logo.hpp
*/

#ifndef INDIESTUDIO_LOGO_HPP
#define INDIESTUDIO_LOGO_HPP

#include <GameEngine/GameEngine.hpp>

namespace Indie {

    class Logo : public GameEngine::TextureRect {
    public:
        explicit Logo(std::string name, const std::string &filename);

        ~Logo() override = default;

        void bob();

        void ready() override;

        void update() override;


    };
}

#endif //INDIESTUDIO_LOGO_HPP
