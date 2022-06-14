/*
** EPITECH PROJECT, 2022
** CursorHelper.hpp
** File description:
** CursorHelper.hpp
*/

#ifndef INDIESTUDIO_CURSORHELPER_HPP
#define INDIESTUDIO_CURSORHELPER_HPP

#include <raylib.h>

namespace raylib::input {
    /**
     * @brief Input-related functions: cursor
     */
    class CursorHelper {
    public:

        /**
         * @brief Shows cursor.
         */
        static void showCursor();

        /**
         * @brief Hides cursor
         */
        static void hideCursor();

        /**
         * @brief Check if cursor is not visible
         * @return true if cursor is not visible
         */
        static bool isCursorHidden();

        /**
         * @brief Enables cursor (unlock cursor)
         */
        static void enableCursor();

        /**
         * @brief Disables cursor (lock cursor)
         */
        static void disableCursor();

        /**
         * @brief Check if cursor is on the screen
         * @return true if cursor is on the screen
         */
        static bool isCursorOnScreen();

    };
}

#endif //INDIESTUDIO_CURSORHELPER_HPP
