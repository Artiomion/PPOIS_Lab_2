//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_ARTIST_H
#define PPOIS_Lab_2_ARTIST_H

#include "Entity.h"

class Artist : public Entity {
private:
    std::string birthDate;
    std::string deathDate;
    std::string biography;
public:
    Artist(int id, std::string name, std::string birthDate, std::string deathDate, std::string biography);
    void DisplayInfo() const override;
};

#endif //PPOIS_Lab_2_ARTIST_H
