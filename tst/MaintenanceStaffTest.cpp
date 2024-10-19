//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "MaintenanceStaff.h"

// Тест для метода PerformMaintenance
TEST(MaintenanceStaffTest, PerformMaintenance) {
    MaintenanceStaff staff(1, "Иван Иванов", "Техник", "дневная");

    std::string expectedOutput = "Сотрудник Иван Иванов выполняет обязанности Техник на дневная смене.\n";

    // Захват вывода метода PerformMaintenance
    testing::internal::CaptureStdout();
    staff.PerformMaintenance();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
