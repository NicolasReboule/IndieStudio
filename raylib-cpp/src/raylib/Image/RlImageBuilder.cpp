/*
** EPITECH PROJECT, 2022
** RlImageBuilder.cpp
** File description:
** RlImageBuilder.cpp
*/

#include "raylib/Image/RlImageBuilder.hpp"

raylib::builder::RlImageBuilder::RlImageBuilder()
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

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setType(const ImageType &type)
{
    _type = type;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setWidth(const int &width)
{
    _width = width;
    _flags |= Width;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setHeight(const int &height)
{
    _height = height;
    _flags |= Height;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setColor(const raylib::RlColor &color)
{
    _color = color;
    _flags |= Color;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setTop(const raylib::RlColor &top)
{
    _top = top;
    _flags |= Top;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setBottom(const raylib::RlColor &bottom)
{
    _bottom = bottom;
    _flags |= Bottom;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setLeft(const raylib::RlColor &left)
{
    _left = left;
    _flags |= Left;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setRight(const raylib::RlColor &right)
{
    _right = right;
    _flags |= Right;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setInner(const raylib::RlColor &inner)
{
    _inner = inner;
    _flags |= Inner;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setOuter(const raylib::RlColor &outer)
{
    _outer = outer;
    _flags |= Outer;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setCol1(const raylib::RlColor &col1)
{
    _col1 = col1;
    _flags |= Col1;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setCol2(const raylib::RlColor &col2)
{
    _col2 = col2;
    _flags |= Col2;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setFactor(const float &factor)
{
    _factor = factor;
    _flags |= Factor;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setDensity(const float &density)
{
    _density = density;
    _flags |= Density;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setTitleSize(const int &titleSize)
{
    _titleSize = titleSize;
    _flags |= TitleSize;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setChecksX(const int &checksX)
{
    _checksX = checksX;
    _flags |= ChecksX;
    return *this;
}

raylib::builder::RlImageBuilder &raylib::builder::RlImageBuilder::setChecksY(const int &checksY)
{
    _checksY = checksY;
    _flags |= ChecksY;
    return *this;
}

raylib::image::RlImage raylib::builder::RlImageBuilder::build()
{
    if (_type == -1)
        throw raylib::ex::BuilderException("Image type not set");
    if (_flags != _type)
        throw raylib::ex::BuilderException("Invalid arguments");
    switch (_type) {
        case ImageColor:
            return raylib::image::ImageGenerator::genImageColor(_width, _height, _color);
        case ImageGradientV:
            return raylib::image::ImageGenerator::genImageGradientV(_width, _height, _top, _bottom);
        case ImageGradientH:
            return raylib::image::ImageGenerator::genImageGradientH(_width, _height, _left, _right);
        case ImageGradientRadial:
            return raylib::image::ImageGenerator::genImageGradientRadial(_width, _height, _density, _inner, _outer);
        case ImageChecked:
            return raylib::image::ImageGenerator::genImageChecked(_width, _height, _checksX, _checksY, _col1, _col2);
        case ImageWhiteNoise:
            return raylib::image::ImageGenerator::genImageWhiteNoise(_width, _height, _factor);
        case ImageCellular:
            return raylib::image::ImageGenerator::genImageCellular(_width, _height, _titleSize);
        default:
            throw raylib::ex::BuilderException("Unknown Image pattern");
    }
}
