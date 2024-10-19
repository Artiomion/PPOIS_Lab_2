//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Exhibition.h"
#include "Artwork.h"

// Тест для метода DisplayExhibition
TEST(ExhibitionTest, DisplayExhibition) {
    Exhibition exhibition("Экспо Современного Искусства", "2024-10-01", "2024-10-15");

    Artwork artwork1(1, "Мона Лиза", "Леонардо да Винчи", 1503, "Знаменитая картина", "Ренессанс");
    Artwork artwork2(2, "Звёздная ночь", "Винсент Ван Гог", 1889, "Картина звёздного неба", "Постимпрессионизм");

    // Добавление произведений искусства на выставку
    exhibition.AddArtwork(artwork1);
    exhibition.AddArtwork(artwork2);

    std::string expectedOutput =
            "Выставка: Экспо Современного Искусства с 2024-10-01 по 2024-10-15\n"
            "Произведение искусства: Мона Лиза, Автор: Леонардо да Винчи, Год: 1503\n"
            "Произведение искусства: Звёздная ночь, Автор: Винсент Ван Гог, Год: 1889\n";

    // Захват вывода метода DisplayExhibition
    testing::internal::CaptureStdout();
    exhibition.DisplayExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для метода AddArtwork
TEST(ExhibitionTest, AddArtwork) {
    Exhibition exhibition("Классическая живопись", "2024-09-01", "2024-09-30");

    Artwork artwork(3, "Сотворение Адама", "Микеланджело", 1512, "Фреска на потолке Сикстинской капеллы", "Ренессанс");

    // Добавление произведения искусства на выставку
    exhibition.AddArtwork(artwork);

    std::string expectedOutput =
            "Выставка: Классическая живопись с 2024-09-01 по 2024-09-30\n"
            "Произведение искусства: Сотворение Адама, Автор: Микеланджело, Год: 1512\n";

    // Захват вывода метода DisplayExhibition
    testing::internal::CaptureStdout();
    exhibition.DisplayExhibition();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
