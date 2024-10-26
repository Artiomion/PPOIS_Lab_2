//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_EXHIBITION_H
#define PPOIS_Lab_2_EXHIBITION_H

#include <vector>
#include "Artwork.h"

class Exhibition {
private:
    std::string exhibitionName;
    std::string startDate;
    std::string endDate;
    std::vector<Artwork> artworks; //-------------------
public:
    Exhibition(std::string name, std::string start, std::string end);
    void AddArtwork(const Artwork& artwork);
    void DisplayExhibition() const;
};

#endif //PPOIS_Lab_2_EXHIBITION_H
