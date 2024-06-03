//
// Created by Володя on 02.06.2024.
//

#include "Monitor.h"

Monitor::Monitor(const std::string &vendor, const std::string &model, const std::string &size, int price,
                 int amountLeft) : ComputerEquipment(vendor, model, price, amountLeft), size(size) {}

const std::string &Monitor::getSize() const {
    return size;
}

void Monitor::print(std::ostream &os) const {
    ComputerEquipment::print(os);
    os << " size: " << size;
}
