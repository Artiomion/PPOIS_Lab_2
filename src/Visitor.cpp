//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Visitor.h"

Visitor::Visitor(int id, std::string name, int age, std::string ticketNumber, std::string visitDate)
        : Entity(id, name), age(age), ticketNumber(ticketNumber), visitDate(visitDate) {}

void Visitor::DisplayInfo() const {
    std::cout << "Посетитель: " << name << ", Возраст: " << age
              << ", Номер билета: " << ticketNumber << ", Дата посещения: " << visitDate << std::endl;
}