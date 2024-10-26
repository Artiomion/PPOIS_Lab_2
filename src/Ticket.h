//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_TICKET_H
#define PPOIS_Lab_2_TICKET_H

#include <string>

class Ticket {
private:
    std::string ticketNumber;
    std::string visitorName; //-------------------
    double price;
    std::string eventTitle;
public:
    Ticket(std::string ticketNumber, std::string visitorName, double price, std::string eventTitle);
    void GetPrice() const;
};

#endif //PPOIS_Lab_2_TICKET_H
