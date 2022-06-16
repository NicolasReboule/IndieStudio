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

    class Player : public gameengine::KinematicBody {
    public:
        Player(const std::string &name, const std::string &modelPath, const std::string &texturePath);
        Player(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Player() override = default;

        void update(float delta) final;

        void ready() override;

    private:
    };
}

#endif //INDIESTUDIO_PLAYER_HPP
