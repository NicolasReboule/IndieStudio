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

namespace raylib::image {
    /**
     * @brief RlImageBuilder class
     */
    class RlImageBuilder : public IBuilder<RlImage> {
    private:
        /**
         * @brief Enum for parameters
         */
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

    public:
        /**
         * @brief Type of image
         */
        enum ImageType {
            ImageColor = Width | Height | Color, /**< Create an image with a color */
            ImageGradientV = Width | Height | Top | Bottom, /**< Create an image with a gradient vertical */
            ImageGradientH = Width | Height | Left | Right, /**< Create an image with a gradient horizontal */
            ImageGradientRadial = Width | Height | Density | Inner | Outer, /**< Create an image with a gradient radial */
            ImageChecked = Width | Height | ChecksX | ChecksY | Col1 | Col2, /**< Create an image checked */
            ImageWhiteNoise = Width | Height | Factor, /**< Create an image with a white noise */
            ImageCellular = Width | Height | TitleSize /**< Create an image with a cellular automaton */
        };

        /**
         * @brief Construct a new RlImageBuilder object
         */
        RlImageBuilder();

        /**
         * @brief Set the type of image
         * @param type type of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setType(const ImageType &type);

        /**
         * @brief Set the width of image
         * @param width the width of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setWidth(const int &width);

        /**
         * @brief Set the height of image
         * @param height the height of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setHeight(const int &height);

        /**
         * @brief Set the color of image
         * @param color the color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setColor(const RlColor &color);

        /**
         * @brief Set the Top color of image
         * @param top the Top color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setTop(const RlColor &top);

        /**
         * @brief Set the Bottom color of image
         * @param bottom the Bottom color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setBottom(const RlColor &bottom);

        /**
         * @brief Set the Left color of image
         * @param left the Left color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setLeft(const RlColor &left);

        /**
         * @brief Set the Right color of image
         * @param right the Right color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setRight(const RlColor &right);

        /**
         * @brief Set the Inner color of image
         * @param inner the Inner color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setInner(const RlColor &inner);

        /**
         * @brief Set the Outer color of image
         * @param outer the Outer color of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setOuter(const RlColor &outer);

        /**
         * @brief Set the first color
         * @param col1 the first color
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setCol1(const RlColor &col1);

        /**
         * @brief Set the second color
         * @param col2 the second color
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setCol2(const RlColor &col2);

        /**
         * @brief The factor of the white noise image
         * @param factor the factor of image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setFactor(const float &factor);

        /**
         * @brief The density of the radial gradient image
         * @param density the  density of the radial gradient image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setDensity(const float &density);

        /**
         * @brief The title size of the cellular image
         * @param titleSize the title size of the cellular image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setTitleSize(const int &titleSize);

        /**
         * @brief The number of checks X of the checked image
         * @param checksX the number of checks X of the checked image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setChecksX(const int &checksX);

        /**
         * @brief The number of checks Y of the checked image
         * @param checksY the number of checks Y of the checked image
         * @return the RlImageBuilder object
         */
        RlImageBuilder &setChecksY(const int &checksY);

        /**
         * @brief Build the RlImage object
         * @return the RlImage object
         */
        RlImage build() override;

    private:
        long _flags; /**< The flags for the builder, to check the parameters set */
        long _type; /**< The type of the image to build */
        int _width; /**< The width of the image */
        int _height; /**< The height of the image */
        RlColor _color; /**< The color of the image */
        RlColor _top; /**< The top color of the image */
        RlColor _bottom; /**< The bottom color of the image */
        RlColor _left; /**< The left color of the image */
        RlColor _right; /**< The right color of the image */
        RlColor _inner; /**< The inner color of the image */
        RlColor _outer; /**< The outer color of the image */
        RlColor _col1; /**< The first color of the image */
        RlColor _col2; /**< The second color of the image */
        float _factor; /**< The factor of the white noise image */
        float _density; /**< The density of the radial gradient image */
        int _titleSize; /**< The title size of the cellular image */
        int _checksX; /**< The number of checks X of the checked image */
        int _checksY; /**< The number of checks Y of the checked image */
    };
}

#endif //INDIESTUDIO_RLIMAGEBUILDER_HPP
