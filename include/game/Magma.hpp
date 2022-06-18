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
        explicit Magma(const std::string &name, const std::string &objPath, const std::string &playerOwner);
        explicit Magma(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
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
