/*
** EPITECH PROJECT, 2022
** Magma.hpp
** File description:
** Magma.hpp
*/

#ifndef INDIESTUDIO_MAGMA_HPP
#define INDIESTUDIO_MAGMA_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Magma : public GameEngine::StaticBody {
    public:
        Magma(const std::string &name, const std::string &objPath);
        Magma(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Magma() override = default;

        void ready() override;

        void update(float delta) override;

        void handlePlayerCollision();
    private:
        float _timer;
    };
}

#endif //INDIESTUDIO_MAGMA_HPP
