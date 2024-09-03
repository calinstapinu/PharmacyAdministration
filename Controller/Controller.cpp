//
// Created by Calin on 06.06.2024.
//

#include "Controller.h"

Controller::Controller(Repository& repo) : repository(repo) {}

void Controller::addMedication(const std::string& name, int quantity, double price, const std::string& category) {
    Medication medication = {name, quantity, price, category};
    repository.addMedication(medication);
}

std::vector<Medication> Controller::getTopCheapestProducts() const {
    return repository.getTopCheapestProducts();
}

std::vector<Medication> Controller::getLastChanceCosmetics() const {
    return repository.getLastChanceCosmetics();
}
