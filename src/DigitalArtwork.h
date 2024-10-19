//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_DIGITALARTWORK_H
#define PPOIS_Lab_2_DIGITALARTWORK_H

#include "Artwork.h"

class DigitalArtwork : virtual public Artwork {
private:
    std::string fileFormat;
    float fileSize;
public:
    DigitalArtwork(int id, std::string name, std::string author, int year, std::string description, std::string style, std::string format, float size);
    void DisplayDigitalArt() const;
};

#endif //PPOIS_Lab_2_DIGITALARTWORK_H
