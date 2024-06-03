//
// Created by Володя on 03.06.2024.
//

#include "Menu.h"

Menu IntToMenu(int value) {
    switch (value) {
        case ADD:
            return ADD;
        case PRINT:
            return PRINT;
        case QUIT:
            return QUIT;
    }
    return UNKNOWN;
}
