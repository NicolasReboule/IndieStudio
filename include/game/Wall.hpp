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
    class Wall : public gameengine::node::_3D::StaticBody {
    public:
        explicit Wall(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);
        ~Wall() override = default;
    };
}

#endif //INDIESTUDIO_WALL_HPP
