//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Curator.h"

// Тест для метода DisplayInfo
TEST(CuratorTest, DisplayInfo) {
    Curator curator(1, "Valera", 45, "T987654", "2024-10-15", "Modern Art", 20);

    std::string expectedOutput = "Куратор: Valera, Отдел: Modern Art\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    curator.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для метода OrganizeExhibition
TEST(CuratorTest, OrganizeExhibition) {
    Curator curator(1, "Валера", 45, "T987654", "2024-10-15", "Современное искусство", 20);

    std::string expectedOutput = "Куратор Валера организует выставку в отделе Современное искусство\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    curator.OrganizeExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
