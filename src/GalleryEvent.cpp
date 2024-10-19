//
// Created by Artem Sotnikov on 16.10.24.
//

#include "GalleryEvent.h"
#include <iostream>

GalleryEvent::GalleryEvent(std::string eventName, std::string eventType, std::string eventDate)
        : eventName(eventName), eventType(eventType), eventDate(eventDate) {}

void GalleryEvent::HoldEvent() const {
    std::cout << "Событие: " << eventName << " типа " << eventType << " будет проведено " << eventDate << std::endl;
}