/*
** EPITECH PROJECT, 2022
** Player.hpp
** File description:
** Player.hpp
*/

#ifndef INDIESTUDIO_PLAYER_HPP
#define INDIESTUDIO_PLAYER_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class PLayer : public GameEngine::KinematicBody {
    public:
        PLayer(const std::string &name, const std::string &modelPath, const std::string &texturePath);
        PLayer(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~PLayer() override = default;

        void update(float delta) override;

        void ready() override;

    private:
    };
}

#endif //INDIESTUDIO_PLAYER_HPP
