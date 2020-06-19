#include <Ethernet.h>

//
// Created by lukas on 26.05.2020.
//

#ifndef AUTOSYSLAB_CALCULATOR_HARDWAREDISPLAY_H
#define AUTOSYSLAB_CALCULATOR_HARDWAREDISPLAY_H

#define DISPLAY_ROWS 4
#define DISPLAY_COLUMNS 20

class HardwareDisplay {


public:
    void init();
    void print(char display[DISPLAY_ROWS][DISPLAY_COLUMNS]);
};

#endif // AUTOSYSLAB_CALCULATOR_HARDWAREDISPLAY_H
