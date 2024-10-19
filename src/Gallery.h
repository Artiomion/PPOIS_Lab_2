//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_GALLERY_H
#define PPOIS_Lab_2_GALLERY_H

#include <vector>
#include "Entity.h"
#include "Room.h"

class Gallery : public Entity {
private:
    std::string address;
    std::vector<Room> rooms;
public:
    Gallery(int id, std::string name, std::string address);
    void AddRoom(const Room& room);
    void ShowExhibition() const;
};

#endif //PPOIS_Lab_2_GALLERY_H
