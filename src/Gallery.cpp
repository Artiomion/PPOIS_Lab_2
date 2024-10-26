//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Gallery.h"

Gallery::Gallery(int id, std::string name, std::string address) : Entity(id, name), address(address) {}

void Gallery::AddRoom(const Room& room) {
    rooms.push_back(room); //-------------------
}

void Gallery::AddExhibition(const Exhibition& exhibition) {
    exhibitions.push_back(exhibition); //-------------------
}

void Gallery::ShowExhibition() const {
    std::cout << "Галерея: " << name << ", Адрес: " << address << std::endl;
    for (const auto& exhibition : exhibitions) {
        exhibition.DisplayExhibition();
    }
}