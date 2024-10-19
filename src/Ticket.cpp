//
// Created by Artem Sotnikov on 16.10.24.
//

#include "Ticket.h"
#include <iostream>

Ticket::Ticket(std::string ticketNumber, std::string visitorName, double price, std::string eventTitle)
        : ticketNumber(ticketNumber), visitorName(visitorName), price(price), eventTitle(eventTitle) {}

void Ticket::GetPrice() const {
    std::cout << "Билет " << ticketNumber << " для " << visitorName << " на событие \""
              << eventTitle << "\" стоит " << price << " рублей." << std::endl;
}