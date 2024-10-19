//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Entity.h"

Entity::Entity(int id, std::string name) : id(id), name(name) {}

void Entity::DisplayInfo() const {
    std::cout << "ID: " << id << ", Название: " << name << std::endl;
}