//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Ticket.h"

// Тест для метода GetPrice
TEST(TicketTest, GetPrice) {
    Ticket ticket("T001", "Артем Сотников", 15.0, "Экспо Современного Искусства");

    std::string expectedOutput = "Билет T001 для Артем Сотников на событие \"Экспо Современного Искусства\" стоит 15 рублей.\n";

    // Захват вывода метода GetPrice
    testing::internal::CaptureStdout();
    ticket.GetPrice();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
