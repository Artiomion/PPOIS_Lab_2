//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_MANAGER_H
#define PPOIS_Lab_2_MANAGER_H

#include <string>

class Manager {
private:
    std::string name;
    std::string department;
    std::string contactNumber;
public:
    Manager(std::string name, std::string department, std::string contactNumber);
    void ManageGallery() const;
};

#endif //PPOIS_Lab_2_MANAGER_H
