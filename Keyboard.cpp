//
// Created by Володя on 02.06.2024.
//

#include "Keyboard.h"

Keyboard::Keyboard(const std::string &vendor, const std::string &model, const std::string &type, int price,
                   int amountLeft) : ComputerEquipment(vendor, model, price, amountLeft), type(type) {}

const std::string &Keyboard::getType() const {
    return type;
}

void Keyboard::print(std::ostream &os) const {
    ComputerEquipment::print(os);
    os << " type: " << type;
}
