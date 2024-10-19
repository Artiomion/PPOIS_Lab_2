//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Manager.h"
#include <iostream>

Manager::Manager(std::string name, std::string department, std::string contactNumber)
        : name(name), department(department), contactNumber(contactNumber) {}

void Manager::ManageGallery() const {
    std::cout << "Менеджер " << name << " управляет галереей, отдел: " << department
              << ". Контактный номер: " << contactNumber << std::endl;
}