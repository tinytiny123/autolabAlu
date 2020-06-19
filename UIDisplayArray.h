//
// Created by Kai Siemek on 19.05.20.
//

#ifndef AUTOSYSLAB_CALCULATOR_DISPLAYARRAY_H
#define AUTOSYSLAB_CALCULATOR_DISPLAYARRAY_H
#include "HardwareDisplay.h"

class UIDisplayArray {

public:
    char display[DISPLAY_ROWS][DISPLAY_COLUMNS + 1]{};
    short row;

    UIDisplayArray(){
        display[0][DISPLAY_COLUMNS] = '\0';
        display[1][DISPLAY_COLUMNS] = '\0';
        display[2][DISPLAY_COLUMNS] = '\0';
        display[3][DISPLAY_COLUMNS] = '\0';
    }

    void clearRow(short row);
    void clearALL();
    void setRow(char* string, short row);

};


#endif //AUTOSYSLAB_CALCULATOR_DISPLAYARRAY_H
