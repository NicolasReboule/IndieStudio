/*
** EPITECH PROJECT, 2022
** Texture.hpp
** FileHelper description:
** Texture.hpp
*/

#ifndef INDIESTUDIO_TEXTURE_HPP
#define INDIESTUDIO_TEXTURE_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class Texture {
    public:
        // Texture loading functions
        // NOTE: These functions require GPU access
        explicit Texture(const std::string &fileName);
        explicit Texture(Image image);
        Texture(const Texture &texture);
        ~Texture();
        Texture2D loadTexture(const std::string &fileName);                                                       // Load texture from file into GPU memory (VRAM)
        Texture2D loadTextureFromImage(Image image);                                                       // Load texture from image data
        TextureCubemap loadTextureCubemap(Image image, int layout);                                        // Load cubemap from image, multiple image cubemap layouts supported
        RenderTexture2D loadRenderTexture(int width, int height);                                          // Load texture for rendering (framebuffer)
        void unloadTexture(Texture2D texture);                                                             // Unload texture from GPU memory (VRAM)
        void unloadRenderTexture(RenderTexture2D target);                                                  // Unload render texture from GPU memory (VRAM)
        void updateTexture(Texture2D texture, const void *pixels);                                         // Update GPU texture with new data
        void updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels);                       // Update GPU texture rectangle with new data

        // Texture configuration functions
        void genTextureMipmaps(Texture2D *texture);                                                        // Generate GPU mipmaps for a texture
        void setTextureFilter(Texture2D texture, int filter);                                              // Set texture scaling filter mode
        void setTextureWrap(Texture2D texture, int wrap);                                                   // Set texture wrapping mode

        Texture2D getTexture() const;
        std::string getTexturePath() const;
        Rectangle getTextureRec() const;
        TextureCubemap getTextureCubemap() const;
        RenderTexture2D getRenderTexture() const;

        Texture &operator=(const Texture &texture);
    private:
        Texture2D _texture;
        std::string _texturePath;
        Rectangle _textureRec;
        TextureCubemap _textureCubemap;
        RenderTexture2D _renderTexture;
    };
}

#endif //INDIESTUDIO_TEXTURE_HPP
