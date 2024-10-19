//
// Created by Artem Sotnikov on 16.10.24.
//

#ifndef PPOIS_Lab_2_SECURITY_H
#define PPOIS_Lab_2_SECURITY_H

#include "Entity.h"

class Security : public Entity {
private:
    std::string position;
    std::string shift;
    std::string height;
    std::string patrolArea;
public:
    Security(int id, std::string name, std::string position, std::string shift, std::string height, std::string patrolArea);
    void PatrolRoom() const;
};

#endif //PPOIS_Lab_2_SECURITY_H
