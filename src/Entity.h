//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_ENTITY_H
#define PPOIS_Lab_2_ENTITY_H

#include <string>
#include <iostream>

class Entity {
protected:
    int id;
    std::string name;
public:
    Entity(int id, std::string name);
    virtual void DisplayInfo() const;
    virtual ~Entity() = default;
};

#endif //PPOIS_Lab_2_ENTITY_H
