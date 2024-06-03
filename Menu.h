//
// Created by Володя on 03.06.2024.
//

#pragma once

typedef enum Menu {
    INIT = -1, QUIT = 0, ADD = 1, PRINT = 2, SELECTION,
    UNKNOWN, DESTROY,
} Menu;

Menu IntToMenu(int value);
