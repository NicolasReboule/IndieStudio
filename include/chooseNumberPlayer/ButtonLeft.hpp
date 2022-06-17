/*
** EPITECH PROJECT, 2022
** ButtonLeft.hpp
** File description:
** ButtonLeft.hpp
*/

#ifndef INDIESTUDIO_BUTTONLEFT_HPP
#define INDIESTUDIO_BUTTONLEFT_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonLeft : public gameengine::Button {
    public:
        explicit ButtonLeft(const std::string &name, const std::string &filename);

        ~ButtonLeft() override = default;

        void ready() override;

        void pressed() override;

        void setIndex(int index);

        int getIndex() const;
    private:
        int _index;
    };
}

#endif //INDIESTUDIO_BUTTONLEFT_HPP
