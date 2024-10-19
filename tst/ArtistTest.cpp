//
// Created by Artem Sotnikov on 16.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Artist.h"

// Тест для метода DisplayInfo
TEST(ArtistTest, DisplayInfo) {
    Artist artist(1, "Винсент Ван Гог", "1853-03-30", "1890-07-29", "Знаменитый постимпрессионист");
    std::string expectedOutput = "Художник: Винсент Ван Гог, Дата рождения: 1853-03-30, Дата смерти: 1890-07-29\n";

    // Захват вывода метода DisplayInfo
    testing::internal::CaptureStdout();
    artist.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
