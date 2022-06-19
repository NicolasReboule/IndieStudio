/*
** EPITECH PROJECT, 2022
** Player.hpp
** File description:
** Player.hpp
*/

#ifndef INDIESTUDIO_PLAYER_HPP
#define INDIESTUDIO_PLAYER_HPP

#include "game/Bomb.hpp"
#include "button/ButtonMainMenu.hpp"
#include "button/ButtonResume.hpp"
#include "global/GlobalInstance.hpp"
#include "game/Magma.hpp"
#include "game/Bonus.hpp"
#include "game/Wall.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie {

    class Player : public gameengine::node::_3D::KinematicBody {
    public:
        enum State {
            DEAD = 0,
            ALIVE = 1,
            WINNER = 2,
            LOOSER = 3,
            GHOST = 4
        };

        explicit Player(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture, const int &numpadId);
        ~Player() override = default;

        void update(const float &delta) final;

        void init() override;

        void spawnBomb();

        void handleInput();

        void checkCollisions();

        void playerDead();

        State getState();

        void setState(State state);

        void incrementBombStock(int bombStock);

        void moveAndGhosting(Vector3f position);

    private:
        float _tempSpeed;
        float _speed;
        int _range;
        int _bombStock;
        float _timerGhost;
        std::shared_ptr<gameengine::AudioManager> &_audioManager;

        State _state;

        float _timerAnim;
        int _numpadId;

        raylib::model::RlModelAnimation _anim;
    };
}

#endif //INDIESTUDIO_PLAYER_HPP
