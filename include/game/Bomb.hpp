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

    class Bomb : public gameengine::StaticBody {
    public:
        Bomb(const std::string &name, const std::string &objPath, int range, const std::string &playerOwner);
        Bomb(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePat0, int range, const std::string &playerOwnerh);
        ~Bomb() override = default;

        void ready() override;

        void update(float delta) override;

        void spawnMagma();

        void addMagma(Vector3f position, Vector3f addI);

        void instanceMagma(Vector3f pos);

        void enableCollision();
    private:
        std::string _playerOwner;
        float _timer;
        int _range;
    };

}

#endif //INDIESTUDIO_BOMB_HPP
