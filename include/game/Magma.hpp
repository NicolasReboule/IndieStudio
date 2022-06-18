/*
** EPITECH PROJECT, 2022
** Magma.hpp
** File description:
** Magma.hpp
*/

#ifndef INDIESTUDIO_MAGMA_HPP
#define INDIESTUDIO_MAGMA_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Magma : public gameengine::node::_3D::StaticBody {
    public:
        explicit Magma(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);
        ~Magma() override = default;

        void init() override;

        void update(const float &delta) override;

        void handlePlayerCollision();

        void checkWallCollision();

    private:
        std::string _playerOwner;
        float _timer;
    };
}

#endif //INDIESTUDIO_MAGMA_HPP
