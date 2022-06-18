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

    class ButtonLeft : public gameengine::node::_2D::Button {
    public:
        explicit ButtonLeft(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonLeft() override = default;

        void init() override;

        void pressed() override;

        void setIndex(int index);

        int getIndex() const;

    private:
        int _index;
    };
}

#endif //INDIESTUDIO_BUTTONLEFT_HPP
