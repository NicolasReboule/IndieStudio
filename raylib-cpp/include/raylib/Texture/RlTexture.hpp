/*
** EPITECH PROJECT, 2022
** RlTexture.hpp
** FileHelper description:
** RlTexture.hpp
*/

#ifndef INDIESTUDIO_RLTEXTURE_HPP
#define INDIESTUDIO_RLTEXTURE_HPP

#include "raylib/Image/RlImage.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief RlTexture class
     * NOTE: These functions require GPU access
     */
    class RlTexture {
    public:
        /**
         * @brief Create a RlTexture from file
         * @param fileName the file name of the texture
         */
        explicit RlTexture(const std::string &fileName);

        /**
         * @brief Create a RlTexture from image
         * @param image the image of the texture
         */
        explicit RlTexture(const image::RlImage &image);

        /**
         * @brief Craete a RlTexture, cubemap from image, multiple image cubemap layouts supported
         * @param image the image
         * @param layout the layout
         */
        explicit RlTexture(const image::RlImage &image, const CubemapLayout &layout);

        /**
         * @brief RlTexture destructor
         */
        ~RlTexture();

        /**
         * @brief Update GPU texture with new data
         * @param pixels the pixels
         */
        void update(const void *pixels);

        /**
         * @brief Update GPU texture rectangle with new data
         * @param rec the rectangle
         * @param pixels the pixels
         */
        void updateRec(const Rectangle &rec, const void *pixels);

        /**
         * @brief Generate mipmaps for GPU texture
         */
        void genTextureMipmaps();

        /**
         * @brief Set GPU texture filter mode
         * @param filter the filter mode
         */
        void setFilter(const TextureFilter &filter);

        /**
         * @brief Set texture wrapping mode
         * @param wrap the wrapping mode
         */
        void setWrap(const TextureWrap &wrap);

        /**
         * @brief Get the texture
         * @return the mutable raylib texture
         */
        Texture2D &get();

        /**
         * @brief Get the texture
         * @return the immutable raylib texture
         */
        const Texture2D &get() const;

        /**
         * @brief Get the texture path
         * @return the texture path
         */
        const std::string &getPath() const;

        /**
         * @brief Get the texture rectangle
         * @return the texture rectangle
         */
        const Rectangle &getTextureRec() const;

        /**
         * @brief Get OpenGL texture ID
         * @return the OpenGL texture ID
         */
        const unsigned int &getID() const;

        /**
         * @brief Get texture width
         * @return the texture width
         */
        const int &getWidth() const;

        /**
         * @brief Get texture height
         * @return the texture height
         */
        const int &getHeight() const;

        /**
         * @brief Get Mipmap levels, 1 by default
         * @return the Mipmap levels
         */
        const int &getMipmaps() const;

        /**
         * @brief Get texture format
         * @return Data format (PixelFormat type)
         */
        const int &getFormat() const;

    private:
        Texture2D _texture; /**< The raylib texture */
        std::string _texturePath; /**< The filepath to the texture */
        Rectangle _textureRec; /**< The texture rect */
    };
}

#endif //INDIESTUDIO_RLTEXTURE_HPP
