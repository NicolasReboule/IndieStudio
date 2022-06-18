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

    class ButtonRight : public gameengine::node::_2D::Button {
    public:
        explicit ButtonRight(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonRight() override = default;

        void init() override;

        void pressed() override;

        void setIndex(int index);

        int getIndex() const;

    private:
        int _index;
    };
}

#endif //INDIESTUDIO_BUTTONRIGHT_HPP
