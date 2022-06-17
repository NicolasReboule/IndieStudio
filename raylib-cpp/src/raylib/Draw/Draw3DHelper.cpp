/*
** EPITECH PROJECT, 2022
** Draw3DHelper.cpp
** File description:
** Draw3DHelper.cpp
*/

#include "raylib/Draw/Draw3DHelper.hpp"

void raylib::helper::draw::Draw3DHelper::drawLine(const Vector3f &startPos, const Vector3f &endPos, const RlColor &color)
{
    rlCheckRenderBatchLimit(8);

    rlBegin(RL_LINES);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());
    rlVertex3f(startPos.x, startPos.y, startPos.z);
    rlVertex3f(endPos.x, endPos.y, endPos.z);
    rlEnd();
}
