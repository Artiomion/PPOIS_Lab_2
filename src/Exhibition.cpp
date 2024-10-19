//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Exhibition.h"

Exhibition::Exhibition(std::string name, std::string start, std::string end)
        : exhibitionName(name), startDate(start), endDate(end) {}

void Exhibition::AddArtwork(const Artwork& artwork) {
    artworks.push_back(artwork);
}

void Exhibition::DisplayExhibition() const {
    std::cout << "Выставка: " << exhibitionName << " с " << startDate << " по " << endDate << std::endl;
    for (const auto& artwork : artworks) {
        artwork.DisplayInfo();
    }
}