//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Curator.h"
#include "Exhibition.h"

TEST(CuratorTest, DisplayInfo) {
    Curator curator(1, "Valera", 45, "T987654", "2024-10-15", "Modern Art", 20);

    std::string expectedOutput = "Куратор: Valera, Отдел: Modern Art\n";

    testing::internal::CaptureStdout();
    curator.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для метода OrganizeExhibition
TEST(CuratorTest, OrganizeExhibition) {
    Curator curator(1, "Валера", 45, "T987654", "2024-10-15", "Современное искусство", 20);

    std::string expectedOutput = "Куратор Валера организует выставку в отделе Современное искусство\n";

    testing::internal::CaptureStdout();
    curator.OrganizeExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(CuratorTest, AddExhibition) {
    Curator curator(1, "Валера", 45, "T987654", "2024-10-15", "Современное искусство", 20);

    Exhibition exhibition("Современное искусство", "2024-10-01", "2024-10-15");
    Exhibition exhibition2("Классическое искусство", "2024-11-01", "2024-11-15");

    curator.AddExhibition(exhibition);
    curator.AddExhibition(exhibition2);

    std::string expectedOutput = "Куратор Валера организует выставку в отделе Современное искусство\n";

    testing::internal::CaptureStdout();
    curator.OrganizeExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}