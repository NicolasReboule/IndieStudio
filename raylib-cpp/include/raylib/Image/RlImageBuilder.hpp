/*
** EPITECH PROJECT, 2022
** RlImageBuilder.hpp
** File description:
** RlImageBuilder.hpp
*/

#ifndef INDIESTUDIO_RLIMAGEBUILDER_HPP
#define INDIESTUDIO_RLIMAGEBUILDER_HPP

#include "raylib/IBuilder.hpp"
#include "raylib/Image/RlImage.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/exception/BuilderException.hpp"
#include "raylib/Image/ImageGenerator.hpp"

namespace raylib {
    class RlImageBuilder : IBuilder<RlImage> {
    public:
        enum ParameterName {
            Width = 1,
            Height = 2,
            Color = 4,
            Left = 8,
            Right = 16,
            Density = 32,
            Inner = 64,
            Outer = 128,
            ChecksX = 256,
            ChecksY = 512,
            Col1 = 1024,
            Col2 = 2048,
            Factor = 4096,
            TitleSize = 8192,
            Top = 16384,
            Bottom = 32768
        };
        enum ImageType {
            ImageColor = Width | Height | Color,
            ImageGradientV = Width | Height | Top | Bottom,
            ImageGradientH = Width | Height | Left | Right,
            ImageGradientRadial = Width | Height | Density | Inner | Outer,
            ImageChecked = Width | Height | ChecksX | ChecksY | Col1 | Col2,
            ImageWhiteNoise = Width | Height | Factor,
            ImageCellular = Width | Height | TitleSize
        };

        RlImageBuilder();

        RlImageBuilder &setType(long type);
        RlImageBuilder &setWidth(int width);
        RlImageBuilder &setHeight(int height);
        RlImageBuilder &setColor(RlColor color);
        RlImageBuilder &setTop(RlColor top);
        RlImageBuilder &setBottom(RlColor bottom);
        RlImageBuilder &setLeft(RlColor left);
        RlImageBuilder &setRight(RlColor right);
        RlImageBuilder &setInner(RlColor inner);
        RlImageBuilder &setOuter(RlColor outer);
        RlImageBuilder &setCol1(RlColor col1);
        RlImageBuilder &setCol2(RlColor col2);
        RlImageBuilder &setFactor(float factor);
        RlImageBuilder &setDensity(float density);
        RlImageBuilder &setTitleSize(int titleSize);
        RlImageBuilder &setChecksX(int checksX);
        RlImageBuilder &setChecksY(int checksY);

        RlImage build() override;
    private:
        long _flags;
        long _type;
        int _width;
        int _height;
        RlColor _color;
        RlColor _top;
        RlColor _bottom;
        RlColor _left;
        RlColor _right;
        RlColor _inner;
        RlColor _outer;
        RlColor _col1;
        RlColor _col2;
        float _factor;
        float _density;
        int _titleSize;
        int _checksX;
        int _checksY;
    };
}

#endif //INDIESTUDIO_RLIMAGEBUILDER_HPP
