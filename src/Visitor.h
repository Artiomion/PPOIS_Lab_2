//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_VISITOR_H
#define PPOIS_Lab_2_VISITOR_H

#include "Entity.h"

class Visitor : public Entity {
private:
    int age;
    std::string ticketNumber;
    std::string visitDate;
public:
    Visitor(int id, std::string name, int age, std::string ticketNumber, std::string visitDate);
    void DisplayInfo() const override;
};

#endif //PPOIS_Lab_2_VISITOR_H
