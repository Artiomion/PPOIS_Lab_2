//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_VISITOR_H
#define PPOIS_Lab_2_VISITOR_H

#include "Entity.h"
#include "Ticket.h"

class Visitor : public Entity {
private:
    int age;
    std::string ticketNumber;
    std::string visitDate;
    std::vector<Ticket> tickets; //-------------------
public:
    Visitor(int id, std::string name, int age, std::string ticketNumber, std::string visitDate);
    void DisplayInfo() const override;
    void AddTicket(const Ticket& ticket);
};

#endif //PPOIS_Lab_2_VISITOR_H
