/*
** EPITECH PROJECT, 2022
** Texture.hpp
** File description:
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
        static Texture2D loadTexture(const std::string &fileName);                                                       // Load texture from file into GPU memory (VRAM)
        static Texture2D loadTextureFromImage(Image image);                                                       // Load texture from image data
        static TextureCubemap loadTextureCubemap(Image image, int layout);                                        // Load cubemap from image, multiple image cubemap layouts supported
        static RenderTexture2D loadRenderTexture(int width, int height);                                          // Load texture for rendering (framebuffer)
        static void unloadTexture(Texture2D texture);                                                             // Unload texture from GPU memory (VRAM)
        static void unloadRenderTexture(RenderTexture2D target);                                                  // Unload render texture from GPU memory (VRAM)
        static void updateTexture(Texture2D texture, const void *pixels);                                         // Update GPU texture with new data
        static void updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels);                       // Update GPU texture rectangle with new data

        // Texture configuration functions
        void genTextureMipmaps(Texture2D *texture);                                                        // Generate GPU mipmaps for a texture
        void setTextureFilter(Texture2D texture, int filter);                                              // Set texture scaling filter mode
        void setTextureWrap(Texture2D texture, int wrap);                                                  // Set texture wrapping mode
    private:
    };
}

#endif //INDIESTUDIO_TEXTURE_HPP
