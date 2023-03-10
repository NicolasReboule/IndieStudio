/*
** EPITECH PROJECT, 2022
** Button.cpp
** File description:
** Button.cpp
*/

#include "GameEngine/Nodes/2D/Button.hpp"

gameengine::node::_2D::Button::Button(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture) : Node2D(name),
    _texture(nullptr), _position({0, 0}), _scale({1, 1}), _origin(0, 0), _bounds(), _rectangle()
{
    this->_texture = texture;
    this->_rotationDegrees = 0;
    this->_action = false;
    this->_state = 0;
    this->_frameNum = 3;
    this->_frameHeight = (float) this->_texture->getTexture().height / (float) this->_frameNum;
    this->_rectangle = {0, 0, (float) this->_texture->getTexture().width, (float)this->_frameHeight};
    this->_bounds = {this->_position.x, this->_position.y, (float) this->_texture->getTexture().width, this->_frameHeight};
}

void gameengine::node::_2D::Button::init()
{

}

void gameengine::node::_2D::Button::update(const float &delta)
{
    //this->_bounds = {this->_position.x - (this->_origin.x * this->_scale.x), this->_position.y - (this->_origin.y * this->_scale.y), (float) this->_texture->getTexture().width * this->_scale.x, this->_frameHeight * this->_scale.y};
    if (this->_isEnabled) {
        if (this->_action) {
            this->_action = false;
            this->_state = 0;
            return;
        }
        if (raylib::helper::Collision2DHelper::checkCollisionPointRec(raylib::helper::input::MouseHelper::getMousePosition(), this->_bounds)) {
            if (raylib::helper::input::MouseHelper::isMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                this->_state = 2;
                this->_action = true;
            } else
                this->_state = 1;
        } else
            this->_state = 0;

        if (this->_action)
            this->pressed();

        this->_rectangle.y = (float) (this->_state) * this->_frameHeight;
    }
}

void gameengine::node::_2D::Button::draw()
{
    Rectangle dest = { this->_position.x, this->_position.y, std::abs(this->_rectangle.width), std::abs(this->_rectangle.height) };
    raylib::helper::draw::DrawTextureHelper::drawTexture(*this->_texture, this->_rectangle, dest, this->_origin, this->_rotationDegrees, RlColor::White);
}

const Vector2f &gameengine::node::_2D::Button::getPosition() const
{
    return this->_position;
}

void gameengine::node::_2D::Button::setPosition(const Vector2f &position)
{
    this->_position = position;
    this->_rectangle = {0, 0, (float) this->_texture->getTexture().width, (float) this->_frameHeight};
    this->_bounds = {this->_position.x - (this->_origin.x), this->_position.y - (this->_origin.y), (float) this->_texture->getTexture().width, this->_frameHeight};
}

void gameengine::node::_2D::Button::centerButton(const Vector2f &pos)
{
    this->setPosition(pos);
    this->setOrigin({(float) this->_texture->getTexture().width / 2, (float) this->_texture->getTexture().height / 2});
}

const Vector2f &gameengine::node::_2D::Button::getScale() const
{
    return this->_scale;
}

void gameengine::node::_2D::Button::setScale(const Vector2f &scale)
{
    this->_scale = scale;
}

const Vector2f &gameengine::node::_2D::Button::getOrigin() const
{
    return this->_origin;
}

void gameengine::node::_2D::Button::setOrigin(const Vector2f &origin)
{
    this->_origin = origin;
    this->_bounds = {this->_position.x - (this->_origin.x), this->_position.y - (this->_origin.y), (float) this->_texture->getTexture().width, this->_frameHeight};
}

float gameengine::node::_2D::Button::getRotationDegrees() const
{
    return this->_rotationDegrees;
}

void gameengine::node::_2D::Button::setRotationDegrees(const float &rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}

const bool &gameengine::node::_2D::Button::isEnabled() const
{
    return this->_isEnabled;
}

void gameengine::node::_2D::Button::setEnabled(const bool &value)
{
    this->_isEnabled = value;
}

const std::shared_ptr<raylib::texture::RlTexture> &gameengine::node::_2D::Button::getTexture() const
{
    return this->_texture;
}

const Rectangle &gameengine::node::_2D::Button::getBounds() const
{
    return this->_bounds;
}

const Rectangle &gameengine::node::_2D::Button::getRectangle() const
{
    return this->_rectangle;
}
