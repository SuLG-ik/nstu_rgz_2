//
// Created by Володя on 02.06.2024.
//

#include "ComputerEquipment.h"


const std::string &ComputerEquipment::getVendor() const {
    return vendor;
}

const std::string &ComputerEquipment::getModel() const {
    return model;
}

int ComputerEquipment::getPrice() const {
    return price;
}

int ComputerEquipment::getAmountLeft() const {
    return amountLeft;
}

void ComputerEquipment::setPrice(int price) {
    ComputerEquipment::price = price;
}

void ComputerEquipment::setAmountLeft(int amountLeft) {
    ComputerEquipment::amountLeft = amountLeft;
}

std::ostream &operator<<(std::ostream &os, const ComputerEquipment &equipment) {
    equipment.print(os);
    return os;
}

void ComputerEquipment::print(std::ostream &os) const {
    os << "vendor: " << vendor << " model: " << model << " price: " << price
       << " amountLeft: " << amountLeft;
}
