/*
** EPITECH PROJECT, 2022
** Player.hpp
** File description:
** Player.hpp
*/

#ifndef INDIESTUDIO_PLAYER_HPP
#define INDIESTUDIO_PLAYER_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Player : public gameengine::KinematicBody {
    public:
        enum State {
            DEAD = 0,
            ALIVE = 1,
            WINNER = 2,
            LOOSER = 3
        };


        Player(const std::string &name, const std::string &modelPath, const std::string &texturePath, const int &numpadId);
        //Player(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath, int &numpadId);
        ~Player() override = default;

        void update(float delta) final;

        void ready() override;

        void spawnBomb();

        void handleInput();

        void checkCollisions();

        void playerDead();

        State getState();

        void setState(State state);

    private:
        int _range;

        State _state;
        float _speed;
        float _timerAnim;
        int _numpadId;

        raylib::RlModelAnim _anim;
    };
}

#endif //INDIESTUDIO_PLAYER_HPP
