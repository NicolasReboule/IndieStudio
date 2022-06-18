/*
** EPITECH PROJECT, 2022
** WallDestroyable.hpp
** File description:
** WallDestroyable.hpp
*/

#ifndef INDIESTUDIO_WALLDESTROYABLE_HPP
#define INDIESTUDIO_WALLDESTROYABLE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class WallDestroyable : public gameengine::node::_3D::StaticBody {
    public:
       explicit WallDestroyable(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);
        ~WallDestroyable() override = default;

        void spawnBonus();
    };
}

#endif //INDIESTUDIO_WALLDESTROYABLE_HPP
