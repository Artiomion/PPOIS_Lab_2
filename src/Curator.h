//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_CURATOR_H
#define PPOIS_Lab_2_CURATOR_H

#include "Visitor.h"

class Curator : private Visitor {
private:
    std::string department;
    int workExperience;
public:
    Curator(int id, std::string name, int age, std::string ticketNumber, std::string visitDate, std::string department, int workExperience);
    void OrganizeExhibition();
    void DisplayInfo() const;
};

#endif //PPOIS_Lab_2_CURATOR_H
