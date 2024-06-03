//
// Created by Володя on 02.06.2024.
//

#pragma once

#include <string>
#include <ostream>

class ComputerEquipment {
protected:
    std::string vendor, model;
    int price, amountLeft;

public:
    ComputerEquipment(const std::string &vendor = "none", const std::string &model = "none", int price = 1000000,
                      int amountLeft = 0) : vendor(vendor),
                                            model(model),
                                            price(price),
                                            amountLeft(
                                                    amountLeft) {}

    friend std::ostream &operator<<(std::ostream &os, const ComputerEquipment &equipment);

    virtual void print(std::ostream& os) const;

    const std::string &getVendor() const;

    const std::string &getModel() const;

    int getPrice() const;

    int getAmountLeft() const;

    void setPrice(int price);

    void setAmountLeft(int amountLeft);

};
