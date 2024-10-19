//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_GALLERYEVENT_H
#define PPOIS_Lab_2_GALLERYEVENT_H

#include <string>

class GalleryEvent {
private:
    std::string eventName;
    std::string eventType;
    std::string eventDate;
public:
    GalleryEvent(std::string eventName, std::string eventType, std::string eventDate);
    void HoldEvent() const;
};

#endif //PPOIS_Lab_2_GALLERYEVENT_H
