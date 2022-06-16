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

    class WallDestroyable : public gameengine::StaticBody {
    public:
        WallDestroyable(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~WallDestroyable() override = default;

        void spawnBonus();
    private:
    };
}

#endif //INDIESTUDIO_WALLDESTROYABLE_HPP
