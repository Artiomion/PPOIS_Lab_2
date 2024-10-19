//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_MAINTENANCESTAFF_H
#define PPOIS_Lab_2_MAINTENANCESTAFF_H

#include "Entity.h"

class MaintenanceStaff : public Entity {
private:
    std::string role;
    std::string shift;
public:
    MaintenanceStaff(int id, std::string name, std::string role, std::string shift);
    void PerformMaintenance() const;
};

#endif //PPOIS_Lab_2_MAINTENANCESTAFF_H
