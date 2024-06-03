#include <iostream>
#include "Monitor.h"
#include "Keyboard.h"

int main() {
    Monitor monitor("Asus", "R234", "1920x1080", 10000, 13);
    Monitor monitor2("DERQRE", "dffff");
    Keyboard keyboard("Razer", "pro", "qwery", 1341, 5);
    Keyboard keyboard2("ffff", "qqqq", "yrewq", 1431432);
    ComputerEquipment computerEquipment("Asus", "R234", 10000, 13);
    ComputerEquipment *computerEquipment2 = &monitor2;
    std::cout << monitor << std::endl;
    std::cout << monitor2 << std::endl;

    monitor.setAmountLeft(1);
    std::cout << monitor.getPrice() << ", amount left: " << monitor.getAmountLeft() << std::endl;

    monitor2.setPrice(1000);
    std::cout << monitor2 << std::endl;

    std::cout << keyboard << std::endl;
    std::cout << keyboard2 << std::endl;

    keyboard.setAmountLeft(0);
    std::cout << keyboard.getPrice() << ", amount left: " << keyboard.getAmountLeft() << std::endl;

    keyboard2.setPrice(1000);
    std::cout << keyboard2 << std::endl;

    std::cout << computerEquipment << std::endl;

    computerEquipment.setAmountLeft(0);
    std::cout << computerEquipment.getPrice() << ", amount left: " << computerEquipment.getAmountLeft() << std::endl;

    computerEquipment2->setPrice(1000);
    std::cout << *computerEquipment2 << std::endl;
    std::cout << monitor2 << std::endl;

    return 0;
}
