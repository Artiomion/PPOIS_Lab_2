//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Room.h"

Room::Room(int roomNumber, double size) : roomNumber(roomNumber), size(size), currentArtwork(nullptr) {}

void Room::ShowArtwork(const Artwork& artwork) {
    currentArtwork = const_cast<Artwork*>(&artwork);  // сохраняем ссылку на текущее произведение искусства
    std::cout << "В комнате " << roomNumber << " отображается произведение: " << std::endl;
    artwork.DisplayInfo();
}