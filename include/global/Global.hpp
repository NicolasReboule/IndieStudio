/*
** EPITECH PROJECT, 2022
** Global.hpp
** File description:
** Global.hpp
*/

#ifndef INDIESTUDIO_GLOBAL_HPP
#define INDIESTUDIO_GLOBAL_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Global : public GameEngine::Base {
        public:
        explicit Global(const std::string &name);

        void ready() override;

        void update(float delta) override;

        void draw() override;

        float getRotationDegrees() override;

        ~Global() override = default;
    };
}

#endif //INDIESTUDIO_GLOBAL_HPP
