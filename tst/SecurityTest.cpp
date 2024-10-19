//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Security.h"

// Тест для метода PatrolRoom
TEST(SecurityTest, PatrolRoom) {
    Security security(1, "Петрович", "Охранник", "Дневная", "Высокий", "Комната 113");

    std::string expectedOutput = "Охранник Петрович патрулирует зону Комната 113 на Дневная смене.\n";

    // Захват вывода метода PatrolRoom
    testing::internal::CaptureStdout();
    security.PatrolRoom();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
