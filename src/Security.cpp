//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Security.h"

Security::Security(int id, std::string name, std::string position, std::string shift, std::string height, std::string patrolArea)
        : Entity(id, name), position(position), shift(shift), height(height), patrolArea(patrolArea) {}

void Security::PatrolRoom() const {
    std::cout << "Охранник " << name << " патрулирует зону " << patrolArea << " на " << shift << " смене." << std::endl;
}