//
// Created by Artem Sotnikov on 16.10.24.
//

#include "PhysicalArtwork.h"

PhysicalArtwork::PhysicalArtwork(int id, std::string name, std::string author, int year, std::string description, std::string style, std::string material, std::string dimensions)
        : Artwork(id, name, author, year, description, style), material(material), dimensions(dimensions) {}

void PhysicalArtwork::DisplayPhysicalArt() const {
    std::cout << "Физическое произведение из материала: " << material << " с размерами: " << dimensions << std::endl;
}