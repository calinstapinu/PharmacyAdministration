//
// Created by Calin on 06.06.2024.
//

#include "Ui.h"
#include <iostream>

UI::UI(Controller& ctrl) : controller(ctrl) {}

void UI::start() {
    while (true) {
        displayMenu();
        int option;
        cin >> option;
        if (option == 0) break;
        if (option == 1) AddMedicationMenu();
        if (option == 2) AdvertisementsMenu();
    }
}

void UI::displayMenu() {
    cout << "Welcome to our Store!\n\n";
    cout << "Please choose your desired oprion\n";
    cout << "1 - Add Medication\n";
    cout << "2 - Show Advertisements\n\n";
    cout << "0 - Press to Exit\n";
    cout << "Your Option:  ";
}

void UI::AddMedicationMenu() {
    string name, category;
    int quantity;
    double price;
    cout << "Enter medication name: ";
    cin >> name;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter category: ";
    cin >> category;
    controller.addMedication(name, quantity, price, category);
}

void UI::AdvertisementsMenu() {
    while (true) {
        cout << "\n";
        cout << "Select you desired Option \n\n";
        cout << "1. Our Top Cheapest Products\n";
        cout << "2. Last-Minute Cosmetics\n\n";
        cout << "0. Back to Main Menu\n";
        cout << "Choose an option: ";
        int option;
        cin >> option;
        switch (option) {
            case 1: {
                auto products = controller.getTopCheapestProducts();
                for (const auto& product : products) {
                    cout << product.name << " at $" << product.price << " (Quantity: " << product.quantity << ")\n";
                }
                break;
            }
            case 2: {
                auto products = controller.getLastChanceCosmetics();
                for (const auto& product : products) {
                    cout << product.name << " at $" << product.price << " (Quantity: " << product.quantity << ")\n";
                }
                break;
            }
            case 0:
                return;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }
}