/*
** EPITECH PROJECT, 2022
** Global.hpp
** File description:
** Global.hpp
*/

#ifndef INDIESTUDIO_GLOBAL_HPP
#define INDIESTUDIO_GLOBAL_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {
    /**
     * @brief Global class
     */
    class Global : public gameengine::node::AbstractBase {
    public:
        explicit Global(const std::string &name);

        void init() override;

        void update(const float &delta) override;

        void draw() override;

        float getRotationDegrees() const override;

        ~Global() override = default;
    };
}

#endif //INDIESTUDIO_GLOBAL_HPP
