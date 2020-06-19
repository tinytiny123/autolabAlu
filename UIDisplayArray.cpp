//
// Created by Kai Siemek on 19.05.20.
//

#include "UIDisplayArray.h"
#include "HardwareDisplay.h"

/*
 * Iteriert über eine bestimmte Reihe um diese zu löschen
 */

void UIDisplayArray::clearRow(short row) {
    for(int i = 0 ; i < DISPLAY_COLUMNS ; i++) {
        display[row][i] = ' ';
    }
}

/*
 * Iteriert über das komplette Array und löscht alle Elemente
 */
void UIDisplayArray::clearALL() {
    for(int row = 0 ; row < DISPLAY_ROWS ; row++) {
        for(int i = 0 ; i < DISPLAY_COLUMNS ; i++) {
            display[row][i] = ' ';
        }
    }
}

/*
 * Schreibt string in char Array in gewünschte Reihe
 */
void UIDisplayArray::setRow(char* string, short row) {
    int i = DISPLAY_COLUMNS - 1;
    while (*string != '\0') {
        display[row][i] = *string;
        i--;
        string++;
    }
}


