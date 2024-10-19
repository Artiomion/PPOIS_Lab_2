//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "GalleryEvent.h"

// Тест для метода HoldEvent
TEST(GalleryEventTest, HoldEvent) {
    GalleryEvent event("Арт-выставка", "Выставка", "2024-11-01");

    std::string expectedOutput = "Событие: Арт-выставка типа Выставка будет проведено 2024-11-01\n";

    // Захват вывода метода HoldEvent
    testing::internal::CaptureStdout();
    event.HoldEvent();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
