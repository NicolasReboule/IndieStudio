/*
** EPITECH PROJECT, 2022
** wall.hpp
** File description:
** wall.hpp
*/

#ifndef INDIESTUDIO_WALL_HPP
#define INDIESTUDIO_WALL_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {
    class Wall : public gameengine::StaticBody {
    public:
        Wall(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Wall() override = default;
    };
}

#endif //INDIESTUDIO_WALL_HPP
