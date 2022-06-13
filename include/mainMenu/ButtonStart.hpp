/*
** EPITECH PROJECT, 2022
** ButtonStart.hpp
** File description:
** ButtonStart.hpp
*/

#ifndef INDIESTUDIO_BUTTONSTART_HPP
#define INDIESTUDIO_BUTTONSTART_HPP

#include <GameEngine/GameEngine.hpp>

namespace Indie {

    class ButtonStart : public GameEngine::Button {
    public:
        explicit ButtonStart(const std::string &name, const std::string &filename);

        ~ButtonStart() override = default;

        void ready() override;

        void update(float delta) override;
    private:
    };

}

#endif //INDIESTUDIO_BUTTONSTART_HPP
