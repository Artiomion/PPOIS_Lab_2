//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Visitor.h"

// Тест для метода DisplayInfo
TEST(VisitorTest, DisplayInfo) {
    Visitor visitor(5, "Артем Сотников", 18, "T001", "2024-10-15");

    std::string expectedOutput = "Посетитель: Артем Сотников, Возраст: 18, Номер билета: T001, Дата посещения: 2024-10-15\n";

    // Захват вывода метода DisplayInfo
    testing::internal::CaptureStdout();
    visitor.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
