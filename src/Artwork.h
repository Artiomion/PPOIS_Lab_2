//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_ARTWORK_H
#define PPOIS_Lab_2_ARTWORK_H

#include "Entity.h"

class Artwork : public Entity {
protected:
    std::string author;
    int year;
    std::string description;
    std::string style;
public:
    Artwork(int id, std::string name, std::string author, int year, std::string description, std::string style);
    virtual void DisplayInfo() const override;
};

#endif //PPOIS_Lab_2_ARTWORK_H
