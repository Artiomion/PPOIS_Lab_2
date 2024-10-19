//
// Created by Artem Sotnikov on 18.10.24.
//
#include <gtest/gtest.h>
#include <string>
#include "Room.h"
#include "PhysicalArtwork.h"

// Тест для метода ShowArtwork
TEST(RoomTest, ShowArtwork) {
    Room room(113, 200.0);

    PhysicalArtwork artwork(1, "Спаситель мира", "Леонардо да Винчи", 1490, "На картине изображён Иисус Христос", "Ренессанс", "Холст", "66см x 44см");

    std::string expectedOutput = "В комнате 113 отображается произведение: \nПроизведение искусства: Спаситель мира, Автор: Леонардо да Винчи, Год: 1490\n";

    // Захват вывода метода ShowArtwork
    testing::internal::CaptureStdout();
    room.ShowArtwork(artwork);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expectedOutput);
}
