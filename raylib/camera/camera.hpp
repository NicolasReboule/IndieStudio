/*
** EPITECH PROJECT, 2022
** camera.hpp
** File description:
** camera.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CAMERA_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CAMERA_HPP

#include "../raylib.hpp"

namespace raylib {
    class Camera {
    public:
        Camera(Vector3 position, Vector3 target, Vector3 up, float fovy, int projection);
        ~Camera();

        void setPosition(Vector3 position);

        void setTarget(Vector3 target);

        void setUp(Vector3 up);

        void setFovy(float fovy);

        void setProjection(int projection);

        void setMode(int mode);

        void update();

        void begin();

        void end();

    private:
        Vector3 _position;
        Vector3 _target;
        Vector3 _up;
        float _fovy;
        int _projection;
    };
}

#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_CAMERA_HPP
