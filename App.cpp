//
// Created by Володя on 03.06.2024.
//

#include "App.h"

#include <iostream>

Menu App::SelectionMenu() {
    int input;
    std::cout << "Select option:" << std::endl << std::endl;
    std::cout << "0. Quit:" << std::endl;
    std::cout << "1. Add item" << std::endl;
    std::cout << "2. Print item" << std::endl << std::endl;
    std::cout << "User input: ";
    std::cin >> input;
    return IntToMenu(input);
}

Menu App::InitMenu() {
    return SELECTION;
}

Menu App::UnknownMenu() {
    std::cout << "Unknown option. Try again" << std::endl;
    return SELECTION;
}

Menu App::PrintMenu() {
    std::cout << "Printing list:" << std::endl;
    for (const auto &item: data) {
        std::cout << *item << std::endl;
    }
    return ADD;
}

Menu App::AddMenu() {
    auto value = Input();
    data.push_back(value);
    return SELECTION;
}

Menu App::QuitMenu() {
    std::cout << "Quiting..." << std::endl;
    return DESTROY;
}

void App::run() {
    std::cout << "App control computer equipment" << std::endl;
    loop();
}

ComputerEquipment *App::Input() {
    auto type = InputType();
    ComputerEquipment *value;
    switch (type) {
        case 0:
            value = InputBase();
            break;
        case 1:
            value = InputMonitor();
            break;
        case 2:
            value = InputKeyboard();
    }
    return value;
}

int App::InputType() {
    std::cout << "Select type (0 - base, 1 - Monitor, 2 - Keyboard): ";
    int type;
    do {
        std::cin >> type;
        if (type >= 0 && type <= 2)
            return type;
        std::cout << "Invalid type, try again: ";
    } while (true);
}

ComputerEquipment *App::InputBase() {
    std::string vendor, model;
    int amount, price;
    std::cout << "Vendor name: ";
    std::cin >> vendor;
    std::cout << "Model: ";
    std::cin >> model;
    std::cout << "Amount left: ";
    std::cin >> amount;
    std::cout << "Price: ";
    std::cin >> price;
    return new ComputerEquipment(vendor, model, price, amount);
}

Keyboard *App::InputKeyboard() {
    std::string vendor, model, type;
    int amount, price;
    std::cout << "Vendor name: ";
    std::cin >> vendor;
    std::cout << "Model: ";
    std::cin >> model;
    std::cout << "Type: ";
    std::cin >> type;
    std::cout << "Amount left: ";
    std::cin >> amount;
    std::cout << "Price: ";
    std::cin >> price;
    return new Keyboard(vendor, model, type, price, amount);
}

Monitor *App::InputMonitor() {
    std::string vendor, model, size;
    int amount, price;
    std::cout << "Vendor name: ";
    std::cin >> vendor;
    std::cout << "Model: ";
    std::cin >> model;
    std::cout << "Size: ";
    std::cin >> size;
    std::cout << "Amount left: ";
    std::cin >> amount;
    std::cout << "Price: ";
    std::cin >> price;
    return new Monitor(vendor, model, size, price, amount);
}

void App::onDestroy() {
    for (const auto item: data)
        delete item;
    data.clear();
}

void App::loop() {
    Menu menu = INIT;
    while (menu != DESTROY) {
        switch (menu) {
            case INIT:
                menu = InitMenu();
                break;
            case ADD:
                menu = AddMenu();
                break;
            case PRINT:
                menu = PrintMenu();
                break;
            case SELECTION:
                menu = SelectionMenu();
                break;
            case UNKNOWN:
                menu = UnknownMenu();
                break;
            case QUIT:
                menu = QuitMenu();
                break;
            case DESTROY:
                break;
        }
    }
    onDestroy();
}
