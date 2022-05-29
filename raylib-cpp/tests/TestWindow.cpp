/*
** EPITECH PROJECT, 2022
** TestWindow.cpp
** File description:
** TestWindow.cpp
*/

#include <gtest/gtest.h>
#include "raylib/Raylib.hpp"

TEST(test_window, test_window_creation_and_destroy)
{
    testing::internal::CaptureStdout();
    {
        raylib::Window window("Test", 800, 600);
    }
    std::string output = testing::internal::GetCapturedStdout();
    std::string expected = "Window created\n"
                           "Window destroyed\n";
    ASSERT_EQ(expected, output);
}
