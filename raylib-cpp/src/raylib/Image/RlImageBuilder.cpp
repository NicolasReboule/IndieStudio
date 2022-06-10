/*
** EPITECH PROJECT, 2022
** RlImageBuilder.cpp
** File description:
** RlImageBuilder.cpp
*/

#include "raylib/Image/RlImageBuilder.hpp"

raylib::RlImageBuilder::RlImageBuilder()
: _color(0, 0, 0, 0), _top(0, 0, 0, 0), _bottom(0, 0, 0, 0), _left(0, 0, 0, 0), _right(0, 0, 0, 0),
  _inner(0, 0, 0, 0), _outer(0, 0, 0, 0), _col1(0, 0, 0, 0), _col2(0, 0, 0, 0)
{
    _flags = 0;
    _type = -1;
    _height = 0;
    _width = 0;
    _factor = 0;
    _density = 0;
    _titleSize = 0;
    _checksX = 0;
    _checksY = 0;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setType(long type)
{
    _type = type;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setWidth(int width)
{
    _width = width;
    _flags |= Width;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setHeight(int height)
{
    _height = height;
    _flags |= Height;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setColor(raylib::RlColor color)
{
    _color = color;
    _flags |= Color;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setTop(raylib::RlColor top)
{
    _top = top;
    _flags |= Top;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setBottom(raylib::RlColor bottom)
{
    _bottom = bottom;
    _flags |= Bottom;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setLeft(raylib::RlColor left)
{
    _left = left;
    _flags |= Left;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setRight(raylib::RlColor right)
{
    _right = right;
    _flags |= Right;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setInner(raylib::RlColor inner)
{
    _inner = inner;
    _flags |= Inner;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setOuter(raylib::RlColor outer)
{
    _outer = outer;
    _flags |= Outer;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setCol1(raylib::RlColor col1)
{
    _col1 = col1;
    _flags |= Col1;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setCol2(raylib::RlColor col2)
{
    _col2 = col2;
    _flags |= Col2;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setFactor(float factor)
{
    _factor = factor;
    _flags |= Factor;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setDensity(float density)
{
    _density = density;
    _flags |= Density;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setTitleSize(int titleSize)
{
    _titleSize = titleSize;
    _flags |= TitleSize;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setChecksX(int checksX)
{
    _checksX = checksX;
    _flags |= ChecksX;
    return *this;
}

raylib::RlImageBuilder &raylib::RlImageBuilder::setChecksY(int checksY)
{
    _checksY = checksY;
    _flags |= ChecksY;
    return *this;
}
raylib::RlImage raylib::RlImageBuilder::build()
{
    Image image;
    if (_type == -1)
        throw raylib::ex::BuilderException("Image type not set");
    if (_flags != _type)
        throw raylib::ex::BuilderException("Invalid arguments");
    switch (_type) {
        case RlImageBuilder::ImageColor :
            image = raylib::ImageGenerator::genImageColor(_width, _height, _color);
            break;
        case RlImageBuilder::ImageGradientV :
            image = raylib::ImageGenerator::genImageGradientV(_width, _height, _top, _bottom);
            break;
        case RlImageBuilder::ImageGradientH :
            image = raylib::ImageGenerator::genImageGradientH(_width, _height, _left, _right);
            break;
        case RlImageBuilder::ImageGradientRadial :
            image = raylib::ImageGenerator::genImageGradientRadial(_width, _height, _density, _inner, _outer);
            break;
        case RlImageBuilder::ImageChecked :
            image = raylib::ImageGenerator::genImageChecked(_width, _height, _checksX, _checksY, _col1, _col2);
            break;
        case RlImageBuilder::ImageWhiteNoise :
            image = raylib::ImageGenerator::genImageWhiteNoise(_width, _height, _factor);
            break;
        case RlImageBuilder::ImageCellular :
            image = raylib::ImageGenerator::genImageCellular(_width, _height, _titleSize);
            break;
        default:
            throw (raylib::ex::BuilderException("Unknown Image pattern"));
    }
    return RlImage(image);
}
