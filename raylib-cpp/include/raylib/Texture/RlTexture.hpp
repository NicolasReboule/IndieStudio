/*
** EPITECH PROJECT, 2022
** RlTexture.hpp
** FileHelper description:
** RlTexture.hpp
*/

#ifndef INDIESTUDIO_RLTEXTURE_HPP
#define INDIESTUDIO_RLTEXTURE_HPP

#include <raylib.h>
#include <string>
#include "raylib/Image/RlImage.hpp"

namespace raylib {
    class RlTexture {
    public:
        // RlTexture loading functions
        // NOTE: These functions require GPU access
        explicit RlTexture(const std::string &fileName);
        explicit RlTexture(RlImage image);
        RlTexture(const RlTexture &texture);
        ~RlTexture();
        TextureCubemap loadTextureCubemap(Image image, int layout);                                        // Load cubemap from image, multiple image cubemap layouts supported
        RenderTexture2D loadRenderTexture(int width, int height);                                          // Load texture for rendering (framebuffer)
        void unloadRenderTexture(RenderTexture2D target);                                                  // Unload render texture from GPU memory (VRAM)
        void updateTexture(Texture2D texture, const void *pixels);                                         // Update GPU texture with new data
        void updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels);                       // Update GPU texture rectangle with new data

        // RlTexture configuration functions
        void genTextureMipmaps(Texture2D *texture);                                                        // Generate GPU mipmaps for a texture
        void setTextureFilter(Texture2D texture, int filter);                                              // Set texture scaling filter mode
        void setTextureWrap(Texture2D texture, int wrap);                                                   // Set texture wrapping mode

        Texture2D getTexture() const;
        std::string getTexturePath() const;
        Rectangle getTextureRec() const;
        TextureCubemap getTextureCubemap() const;
        RenderTexture2D getRenderTexture() const;

        RlTexture &operator=(const RlTexture &texture);
    private:
        Texture2D _texture;
        std::string _texturePath;
        Rectangle _textureRec;
        TextureCubemap _textureCubemap;
        RenderTexture2D _renderTexture;
    };
}

#endif //INDIESTUDIO_RLTEXTURE_HPP
