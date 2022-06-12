/*
** EPITECH PROJECT, 2022
** GlStateManager.cpp
** File description:
** GlStateManager.cpp
*/

#include "raylib/GlStateManager.hpp"

void raylib::GlStateManager::pushMatrix()
{
    rlPushMatrix();
}

void raylib::GlStateManager::popMatrix()
{
    rlPopMatrix();
}

void raylib::GlStateManager::translate(const Vector3f &translation)
{
    rlTranslatef(translation.x, translation.y, translation.z);
}

void raylib::GlStateManager::rotate(const Vector3f &rotation)
{
    rlRotatef(rotation.x, 1.0f, 0.0f, 0.0f);
}

void raylib::GlStateManager::color(const RlColor &color)
{
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
}

void raylib::GlStateManager::color(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    rlColor4ub(r, g, b, a);
}

void raylib::GlStateManager::color(float r, float g, float b, float a)
{
    rlColor4f(r, g, b, a);
}

void raylib::GlStateManager::color(unsigned char r, unsigned char g, unsigned char b)
{
    rlColor3f(r, g, b);
}

void raylib::GlStateManager::enableColorBlend()
{
    rlEnableColorBlend();
}

void raylib::GlStateManager::disableColorBlend()
{
    rlDisableColorBlend();
}

void raylib::GlStateManager::enableDepthTest()
{
    rlEnableDepthTest();
}

void raylib::GlStateManager::disableDepthTest()
{
    rlDisableDepthTest();
}

void raylib::GlStateManager::enableDepthMask()
{
    rlEnableDepthMask();
}

void raylib::GlStateManager::disableDepthMask()
{
    rlDisableDepthMask();
}

void raylib::GlStateManager::enableBackfaceCulling()
{
    rlEnableBackfaceCulling();
}

void raylib::GlStateManager::disableBackfaceCulling()
{
    rlDisableBackfaceCulling();
}

void raylib::GlStateManager::enableScissorTest()
{
    rlEnableScissorTest();
}

void raylib::GlStateManager::disableScissorTest()
{
    rlDisableScissorTest();
}

void raylib::GlStateManager::scissor(int x, int y, int width, int height)
{
    rlScissor(x, y, width, height);
}

void raylib::GlStateManager::scissor(const Rectangle &rect)
{
    rlScissor((int) rect.x, (int) rect.y, (int) rect.width, (int) rect.height);
}

void raylib::GlStateManager::enableWireMode()
{
    rlEnableWireMode();
}

void raylib::GlStateManager::disableWireMode()
{
    rlDisableWireMode();
}

void raylib::GlStateManager::enableSmoothLines()
{
    rlEnableSmoothLines();
}

void raylib::GlStateManager::disableSmoothLines()
{
    rlDisableSmoothLines();
}
