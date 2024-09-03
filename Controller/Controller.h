//
// Created by Calin on 06.06.2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Repository/Repo.h"
#include <vector>

class Controller {
public:
    Controller(Repository& repo);
    void addMedication(const string& name, int quantity, double price, const string& category);
    vector<Medication> getTopCheapestProducts() const;
    vector<Medication> getLastChanceCosmetics() const;
private:
    Repository& repository;
};

#endif // CONTROLLER_H
