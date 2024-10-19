//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Artwork.h"

Artwork::Artwork(int id, std::string name, std::string author, int year, std::string description, std::string style)
        : Entity(id, name), author(author), year(year), description(description), style(style) {}

void Artwork::DisplayInfo() const {
    std::cout << "Произведение искусства: " << name << ", Автор: " << author << ", Год: " << year << std::endl;
}