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

    class Magma : public gameengine::StaticBody {
    public:
        Magma(const std::string &name, const std::string &objPath, const std::string &playerOwner);
        Magma(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Magma() override = default;

        void ready() override;

        void update(float delta) override;

        void handlePlayerCollision();

        void checkWallCollision();
    private:
        std::string _playerOwner;
        float _timer;
    };
}

#endif //INDIESTUDIO_MAGMA_HPP
