/*
** EPITECH PROJECT, 2022
** Bomb.hpp
** File description:
** Bomb.hpp
*/

#ifndef INDIESTUDIO_BOMB_HPP
#define INDIESTUDIO_BOMB_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Bomb : public gameengine::StaticBody {
    public:
        Bomb(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Bomb() override = default;

        void ready() override;

        void update(float delta) override;
    private:
        float _timer;
    };


}

#endif //INDIESTUDIO_BOMB_HPP
