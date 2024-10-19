//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Entity.h"

// Тест для метода DisplayInfo
TEST(EntityTest, DisplayInfo) {
    Entity entity(1, "Test Entity");

    std::string expectedOutput = "ID: 1, Название: Test Entity\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    entity.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для проверки корректности конструктора
TEST(EntityTest, ConstructorTest) {
    Entity entity(2, "Another Entity");

    // Захват вывода метода DisplayInfo
    testing::internal::CaptureStdout();
    entity.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    std::string expectedOutput = "ID: 2, Название: Another Entity\n";

    EXPECT_EQ(output, expectedOutput);
}
