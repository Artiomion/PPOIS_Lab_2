//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Visitor.h"
#include "Ticket.h"

TEST(VisitorTest, DisplayInfo) {
    Visitor visitor(5, "Артем Сотников", 18, "T001", "2024-10-15");

    std::string expectedOutput = "Посетитель: Артем Сотников, Возраст: 18, Номер билета: T001, Дата посещения: 2024-10-15\n";

    testing::internal::CaptureStdout();
    visitor.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(VisitorTest, AddTicket) {
    Visitor visitor(5, "Артем Сотников", 18, "T001", "2024-10-15");

    Ticket ticket("T002", "Артем Сотников", 15.0, "Экспо Современного Искусства");

    EXPECT_NO_THROW(visitor.AddTicket(ticket));

    testing::internal::CaptureStdout();
    std::cout << "Билет добавлен." << std::endl;
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "Билет добавлен.\n";

    EXPECT_EQ(output, expectedOutput);

}