//
// Created by Calin on 06.06.2024.
//

#include "Tests.h"
#include "../Repository/Repo.h"
#include "../Controller/Controller.h"
#include <cassert>
#include <iostream>

void testAddMedication() {
    Repository repo;
    Controller ctrl(repo);
    ctrl.addMedication("Aspirina", 50, 5.0, "Medicament");
    auto products = ctrl.getTopCheapestProducts();
    assert(products[0].name == "Aspirina");
    assert(products[0].quantity == 50);
    assert(products[0].price == 5.0);
    assert(products[0].category == "Medicament");
}

void testGetTopCheapestProducts() {
    Repository repo;
    Controller ctrl(repo);
    ctrl.addMedication("Aspirina", 50, 5.0, "Medicament");
    ctrl.addMedication("Vitamina", 100, 10.0, "Vitamins");
    //ctr
}

void runTests() {
    testAddMedication();
    testGetTopCheapestProducts();
    std::cout << "All tests passed! Esti smecher ^_^\n" << std::endl;
}
