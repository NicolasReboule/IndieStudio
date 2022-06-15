/*
** EPITECH PROJECT, 2022
** Base.hpp
** File description:
** Base.hpp
*/

#ifndef INDIESTUDIO_BASE_HPP
#define INDIESTUDIO_BASE_HPP

#include "raylib/Raylib.hpp"

namespace gameengine {

    class Base {
    public:
        explicit Base(const std::string &name);

        Base(const Base &) = default;

        virtual ~Base() = default;

        virtual void ready() = 0;

        virtual void update(float delta) = 0;

        virtual void draw() = 0;

        virtual float getRotationDegrees() = 0;

        const std::string &getName() const;

        const std::string &getGroup() const;

        void setGroup(const std::string &group);

        bool isHiding() const;

        void setHiding(bool value);
    private:
        bool _hiding = false;
        std::string _name;
        std::string _group;
    };
}

#endif //INDIESTUDIO_BASE_HPP
