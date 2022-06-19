/*
** EPITECH PROJECT, 2022
** GameEngine.hpp
** File description:
** GameEngine.hpp
*/

#ifndef INDIESTUDIO_GAMEENGINE_HPP
#define INDIESTUDIO_GAMEENGINE_HPP

/**
 * @brief The only purpose of this is to include all the headers
 * @file GameEngine.hpp
 */

#include "Audio/AbstractSound.hpp"
#include "Audio/AudioManager.hpp"
#include "Audio/Music.hpp"
#include "Audio/Sound.hpp"
#include "exception/GameEngineException.hpp"
#include "exception/MapParserException.hpp"
#include "MapParser.hpp"
#include "Nodes/2D/Button.hpp"
#include "Nodes/2D/Label.hpp"
#include "Nodes/2D/Node2D.hpp"
#include "Nodes/2D/TextureRect.hpp"
#include "Nodes/3D/Grid3D.hpp"
#include "Nodes/3D/KinematicBody.hpp"
#include "Nodes/3D/Node3D.hpp"
#include "Nodes/3D/StaticBody.hpp"
#include "Scene.hpp"
#include "SceneManager.hpp"
#include "TextureManager.hpp"
#include "Time.hpp"

#include <raylib/Raylib.hpp>

#endif //INDIESTUDIO_GAMEENGINE_HPP
