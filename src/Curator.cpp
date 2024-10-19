//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Curator.h"

Curator::Curator(int id, std::string name, int age, std::string ticketNumber, std::string visitDate, std::string department, int workExperience)
        : Visitor(id, name, age, ticketNumber, visitDate), department(department), workExperience(workExperience) {}

void Curator::OrganizeExhibition() {
    std::cout << "Куратор " << name << " организует выставку в отделе " << department << std::endl;
}

void Curator::DisplayInfo() const {
    std::cout << "Куратор: " << name << ", Отдел: " << department << std::endl;
}