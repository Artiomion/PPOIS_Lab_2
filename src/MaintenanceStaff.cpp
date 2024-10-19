//
// Created by Artem Sotnikov on 16.10.24.
//

#include "MaintenanceStaff.h"

MaintenanceStaff::MaintenanceStaff(int id, std::string name, std::string role, std::string shift)
        : Entity(id, name), role(role), shift(shift) {}

void MaintenanceStaff::PerformMaintenance() const {
    std::cout << "Сотрудник " << name << " выполняет обязанности " << role << " на " << shift << " смене." << std::endl;
}