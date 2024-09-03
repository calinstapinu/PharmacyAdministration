//
// Created by Calin on 06.06.2024.
//

#ifndef UI_H
#define UI_H

#include "../Controller/Controller.h"

class UI {
public:
    UI(Controller& ctrl);
    void start();
private:
    Controller& controller;
    void displayMenu();
    void AddMedicationMenu();
    void AdvertisementsMenu();
};

#endif // UI_H
