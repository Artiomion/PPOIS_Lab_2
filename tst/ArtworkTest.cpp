//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Artwork.h"

// Тест для метода DisplayInfo
TEST(ArtworkTest, DisplayInfo) {
    Artwork artwork(1, "Звездная ночь", "Винсент Ван Гог", 1889, "Картина, написанная маслом", "Постимпрессионизм");

    std::string expectedOutput = "Произведение искусства: Звездная ночь, Автор: Винсент Ван Гог, Год: 1889\n";

    // Захват вывода метода DisplayInfo
    testing::internal::CaptureStdout();
    artwork.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
