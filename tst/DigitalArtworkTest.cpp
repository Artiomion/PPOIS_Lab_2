//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "DigitalArtwork.h"

// Тест для метода DisplayDigitalArt
TEST(DigitalArtworkTest, DisplayDigitalArt) {
    DigitalArtwork digitalArt(1, "Everydays: The First 5000 Days", "Beeple", 2021, "Collage created over 13 years", "NFT", "JPEG", 130.0f);

    std::string expectedOutput = "Цифровое произведение в формате JPEG и размером 130MB\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    digitalArt.DisplayDigitalArt();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}

// Тест для другого цифрового произведения искусства
TEST(DigitalArtworkTest, DisplayDigitalArtDifferentFile) {
    DigitalArtwork digitalArt(2, "CryptoPunk", "Larva Labs", 2017, "Pioneering NFT", "NFT", "PNG", 0.5f);

    std::string expectedOutput = "Цифровое произведение в формате PNG и размером 0.5MB\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    digitalArt.DisplayDigitalArt();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
