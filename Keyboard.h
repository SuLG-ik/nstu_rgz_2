//
// Created by Володя on 02.06.2024.
//

#pragma once

#include <string>
#include <ostream>
#include "ComputerEquipment.h"

class Keyboard : public ComputerEquipment {
    std::string type;
public:
    Keyboard(const std::string &vendor = "none", const std::string &model = "none", const std::string &type = "none",
             int price = 10000000, int amountLeft = 0);

    void print(std::ostream &os) const override;

    const std::string &getType() const;

};
