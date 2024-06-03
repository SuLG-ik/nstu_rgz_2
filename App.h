//
// Created by Володя on 03.06.2024.
//

#pragma once

#include "Menu.h"
#include "ComputerEquipment.h"
#include "Monitor.h"
#include "Keyboard.h"
#include <list>

class App {
private:
    Menu currentMenu = Menu::INIT;
    std::list<ComputerEquipment *> data;

    ComputerEquipment *Input();

    int InputType();

    static ComputerEquipment *InputBase();

    static Monitor *InputMonitor();

    static Keyboard *InputKeyboard();

    Menu SelectionMenu();

    Menu InitMenu();

    Menu UnknownMenu();

    Menu AddMenu();

    Menu PrintMenu();

    Menu QuitMenu();

    void onDestroy();

    void loop();

public:
    void run();
};