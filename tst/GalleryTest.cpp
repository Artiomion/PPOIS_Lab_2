//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Gallery.h"
#include "Room.h"
#include "Exhibition.h"


TEST(GalleryTest, Constructor) {
    Gallery gallery(1, "Лувр", "Париж, Франция");

    std::string expectedOutput = "Галерея: Лувр, Адрес: Париж, Франция\n";

    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(GalleryTest, ShowExhibition) {
    Gallery gallery(1, "Лувр", "Париж, Франция");

    std::string expectedOutput = "Галерея: Лувр, Адрес: Париж, Франция\n";

    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(GalleryTest, AddRoom) {
    Gallery gallery(1, "Национальная галерея", "Лондон, Великобритания");

    Room room1(101, 500);
    Room room2(102, 300);

    gallery.AddRoom(room1);
    gallery.AddRoom(room2);

    std::string expectedOutput = "Галерея: Национальная галерея, Адрес: Лондон, Великобритания\n";

    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(GalleryTest, AddExhibition) {
    Gallery gallery(1, "Эрмитаж", "Санкт-Петербург, Россия");

    Exhibition exhibition("Современное Искусство", "2024-10-01", "2024-10-15");
    Exhibition exhibition2("Классическое Искусство", "2024-11-01", "2024-11-15");

    gallery.AddExhibition(exhibition);
    gallery.AddExhibition(exhibition2);

    std::string expectedOutput =
            "Галерея: Эрмитаж, Адрес: Санкт-Петербург, Россия\n"
            "Выставка: Современное Искусство с 2024-10-01 по 2024-10-15\n"
            "Выставка: Классическое Искусство с 2024-11-01 по 2024-11-15\n";

    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

TEST(GalleryTest, ShowExhibition_NoExhibitions) {
    Gallery gallery(3, "Галерея современного искусства", "Токио, Япония");

    std::string expectedOutput = "Галерея: Галерея современного искусства, Адрес: Токио, Япония\n";

    testing::internal::CaptureStdout();
    gallery.ShowExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}