/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** CursorHelper
*/

#ifndef CURSOR_HPP_
#define CURSOR_HPP_

#include "raylib.h"

namespace raylib {
    class CursorHelper {
        public:
            // CursorHelper-related functions
            static void showCursor();                                                  // Shows cursor
            static void hideCursor();                                                  // Hides cursor
            static bool isCursorHidden();                                              // Check if cursor is not visible
            static void enableCursor();                                                // Enables cursor (unlock cursor)
            static void disableCursor();                                               // Disables cursor (lock cursor)
            static bool isCursorOnScreen();                                            // Check if cursor is on the screen
        private:
    };
}

#endif /* !CURSOR_HPP_ */
