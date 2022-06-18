/*
** EPITECH PROJECT, 2022
** Bomb.hpp
** File description:
** Bomb.hpp
*/

#ifndef INDIESTUDIO_BOMB_HPP
#define INDIESTUDIO_BOMB_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Bomb : public gameengine::node::_3D::StaticBody {
    public:
        explicit Bomb(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture, const int &range, const std::string &playerOwner);

        ~Bomb() override = default;

        void init() override;

        void update(const float &delta) override;

        void spawnMagma();

        void addMagma(const Vector3f &position, const Vector3f &addI);

        void instanceMagma(const Vector3f &pos);

        void enableCollision();

        void setPlayerOwner(const std::string &playerOwner);

    private:
        std::string _playerOwner;
        float _timer;
        int _range;
    };

}

#endif //INDIESTUDIO_BOMB_HPP
