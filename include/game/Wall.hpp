/*
** EPITECH PROJECT, 2022
** wall.hpp
** File description:
** wall.hpp
*/

#ifndef INDIESTUDIO_WALL_HPP
#define INDIESTUDIO_WALL_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {
    class Wall : public gameengine::StaticBody {
    public:
        Wall(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Wall() override = default;
    };
}

#endif //INDIESTUDIO_WALL_HPP
