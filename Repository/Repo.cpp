//
// Created by Calin on 06.06.2024.
//

#include "Repo.h"

void Repository::addMedication(const Medication& medication) {
    medications.push_back(medication);
}

std::vector<Medication> Repository::getTopCheapestProducts() const {
    vector<Medication> result = medications;
    sort(result.begin(), result.end(), [](const Medication& a, const Medication& b) {
        return a.price < b.price;
    });
    if (result.size() > 3) {
        result.resize(3);
    }
    return result;
}

vector<Medication> Repository::getLastChanceCosmetics() const {
    vector<Medication> cosmetics;
    for (const auto& medication : medications) {
        if (medication.category == "Cosmetics") {
            cosmetics.push_back(medication);
        }
    }
    sort(cosmetics.begin(), cosmetics.end(), [](const Medication& a, const Medication& b) {
        return a.quantity < b.quantity;
    });
    if (cosmetics.size() > 2) {
        cosmetics.resize(2);
    }
    return cosmetics;
}
