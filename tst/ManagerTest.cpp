//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Manager.h"

// Тест для метода ManageGallery
TEST(ManagerTest, ManageGallery) {
    Manager manager("Андрей Петров", "Современное искусство", "123-456-789");

    std::string expectedOutput = "Менеджер Андрей Петров управляет галереей, отдел: Современное искусство. Контактный номер: 123-456-789\n";

    // Захват вывода метода ManageGallery
    testing::internal::CaptureStdout();
    manager.ManageGallery();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
