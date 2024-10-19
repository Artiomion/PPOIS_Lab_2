//
// Created by Artem Sotnikov on 16.10.24.
//

#include "DigitalArtwork.h"

DigitalArtwork::DigitalArtwork(int id, std::string name, std::string author, int year, std::string description, std::string style, std::string format, float size)
        : Artwork(id, name, author, year, description, style), fileFormat(format), fileSize(size) {}

void DigitalArtwork::DisplayDigitalArt() const {
    std::cout << "Цифровое произведение в формате " << fileFormat << " и размером " << fileSize << "MB" << std::endl;
}