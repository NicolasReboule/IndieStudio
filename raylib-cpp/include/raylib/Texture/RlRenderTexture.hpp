/*
** EPITECH PROJECT, 2022
** RlRenderTexture.hpp
** File description:
** RlRenderTexture.hpp
*/

#ifndef INDIESTUDIO_RLRENDERTEXTURE_HPP
#define INDIESTUDIO_RLRENDERTEXTURE_HPP

#include <raylib.h>
#include <string>

namespace raylib::texture {
    /**
     * @brief Encapsulation of the raylib RenderTexture2D
     */
    class RlRenderTexture {
    public:
        /**
         * @brief Create a Texture for rendering (framebuffer)
         * @param width the width of the texture
         * @param height the height of the texture
         */
        explicit RlRenderTexture(int width, int height);

        /**
         * @brief RlRenderTexture destructor
         */
        ~RlRenderTexture();

        /**
         * @brief Get the RenderTexture
         * @return the RenderTexture
         */
        const RenderTexture2D &getRenderTexture() const;

    private:
        RenderTexture2D _renderTexture; /**< Raylib render texture */
    };
}

#endif //INDIESTUDIO_RLRENDERTEXTURE_HPP
