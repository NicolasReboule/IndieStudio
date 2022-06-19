/*
** EPITECH PROJECT, 2022
** IndieButton.hpp
** File description:
** IndieButton.hpp
*/

#ifndef INDIESTUDIO_INDIEBUTTON_HPP
#define INDIESTUDIO_INDIEBUTTON_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie::button {
    /**
     * @brief Class for the button
     */
    class IndieButton : public gameengine::node::_2D::Button {
    public:
        /**
         * @brief Construct a new IndieButton object
         * @param name the name of the button
         * @param texture the texture of the button
         * @param callback the callback function
         */
        explicit IndieButton(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture, const std::function<void(const std::string &buttonName)> &callback);

        void pressed() override;

    protected:
        std::function<void(const std::string &buttonName)> _callback;
    };
}

#endif //INDIESTUDIO_INDIEBUTTON_HPP
