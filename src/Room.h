//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_ROOM_H
#define PPOIS_Lab_2_ROOM_H

#include "Artwork.h"

class Room {
private:
    int roomNumber;
    double size;
    Artwork* currentArtwork;  // ассоциация, произведение искусства в комнате
public:
    Room(int roomNumber, double size);
    void ShowArtwork(const Artwork& artwork);
};

#endif //PPOIS_Lab_2_ROOM_H
