//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Gallery.h"
#include "Room.h"

// Тест для метода ShowExhibition
TEST(GalleryTest, ShowExhibition) {
    Gallery gallery(1, "Лувр", "Париж, Франция");

    std::string expectedOutput = "Галерея: Лувр, Адрес: Париж, Франция\n";

    // Захват вывода метода ShowExhibition
    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для метода AddRoom
TEST(GalleryTest, AddRoom) {
    Gallery gallery(1, "Национальная галерея", "Лондон, Великобритания");

    Room room1(101, 500);
    Room room2(102, 300);

    // Добавление комнат в галерею
    gallery.AddRoom(room1);
    gallery.AddRoom(room2);

    std::string expectedOutput = "Галерея: Национальная галерея, Адрес: Лондон, Великобритания\n";

    // Захват вывода метода ShowExhibition
    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
