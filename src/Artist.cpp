//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Artist.h"

Artist::Artist(int id, std::string name, std::string birthDate, std::string deathDate, std::string biography)
        : Entity(id, name), birthDate(birthDate), deathDate(deathDate), biography(biography) {}

void Artist::DisplayInfo() const {
    std::cout << "Художник: " << name << ", Дата рождения: " << birthDate << ", Дата смерти: " << deathDate << std::endl;
}