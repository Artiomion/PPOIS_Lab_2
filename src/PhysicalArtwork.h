//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_PHYSICALARTWORK_H
#define PPOIS_Lab_2_PHYSICALARTWORK_H

#include "Artwork.h"

class PhysicalArtwork : virtual public Artwork {
private:
    std::string material;
    std::string dimensions;
public:
    PhysicalArtwork(int id, std::string name, std::string author, int year, std::string description, std::string style, std::string material, std::string dimensions);
    void DisplayPhysicalArt() const;
};

#endif //PPOIS_Lab_2_PHYSICALARTWORK_H
