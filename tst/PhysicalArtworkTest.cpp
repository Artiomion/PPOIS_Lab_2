//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "PhysicalArtwork.h"

// Тест для метода DisplayPhysicalArt
TEST(PhysicalArtworkTest, DisplayPhysicalArt) {
    PhysicalArtwork artwork(1, "Спаситель мира", "Леонардо да Винчи", 1490, "На картине изображён Иисус Христос", "Ренессанс", "Холст", "66см x 44см");

    std::string expectedOutput = "Физическое произведение из материала: Холст с размерами: 66см x 44см\n";

    // Захват вывода метода DisplayPhysicalArt
    testing::internal::CaptureStdout();
    artwork.DisplayPhysicalArt();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

