/*
** EPITECH PROJECT, 2022
** AbstractBase.hpp
** File description:
** AbstractBase.hpp
*/

#ifndef INDIESTUDIO_ABSTRACTBASE_HPP
#define INDIESTUDIO_ABSTRACTBASE_HPP

#include <raylib/Raylib.hpp>

namespace gameengine {

    class AbstractBase {
    public:
        explicit AbstractBase(const std::string &name);

        AbstractBase(const AbstractBase &) = default;

        virtual ~AbstractBase() = default;

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

#endif //INDIESTUDIO_ABSTRACTBASE_HPP
