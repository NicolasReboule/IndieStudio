/*
** EPITECH PROJECT, 2022
** ButtonRight.hpp
** File description:
** ButtonRight.hpp
*/

#ifndef INDIESTUDIO_BUTTONRIGHT_HPP
#define INDIESTUDIO_BUTTONRIGHT_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonRight : public gameengine::Button {
    public:
        explicit ButtonRight(const std::string &name, const std::string &filename);

        ~ButtonRight() override = default;

        void ready() override;

        void pressed() override;

        void setIndex(int index);

        int getIndex() const;
    private:
        int _index;
    };
}

#endif //INDIESTUDIO_BUTTONRIGHT_HPP
