//
// Created by Calin on 06.06.2024.
//

#ifndef REPO_H
#define REPO_H

#include "../Domain/Domain.h"
#include <vector>
#include <algorithm>

using namespace std;

class Repository {
private:
    vector<Medication> medications;
public:
    void addMedication(const Medication& medication);
    vector<Medication> getTopCheapestProducts() const;
    vector<Medication> getLastChanceCosmetics() const;
};

#endif // REPO_H
