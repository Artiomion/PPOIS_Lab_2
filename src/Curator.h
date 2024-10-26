//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_CURATOR_H
#define PPOIS_Lab_2_CURATOR_H

#include "Visitor.h"
#include "Exhibition.h"
#include <vector>

class Curator : private Visitor {   //-------------------
private:
    std::string department;
    int workExperience;
    std::vector<Exhibition> exhibitions; //-------------------
public:
    Curator(int id, std::string name, int age, std::string ticketNumber, std::string visitDate, std::string department, int workExperience);
    void OrganizeExhibition();
    void DisplayInfo() const;
    void AddExhibition(const Exhibition& exhibition);
};

#endif //PPOIS_Lab_2_CURATOR_H
