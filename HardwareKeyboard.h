//
// Created by Bolor on 2020-05-27
// The code was written by Ahmad  on 2020-05-31
// the code did not test on hardware yet

#ifndef AUTOSYSLAB_CALCULATOR_HARDWAREKEYBOARD_H
#define AUTOSYSLAB_CALCULATOR_HARDWAREKEYBOARD_H

#define KEYBOARD_ROW 6
#define KEYBOARD_COLUMN 6

class HardwareKeyboard {

private:
    char pressedKey;
    char rowPins[KEYBOARD_ROW];
    char colPins[KEYBOARD_COLUMN];
    char buttons[KEYBOARD_ROW][KEYBOARD_COLUMN];


public:
    void init();
    int findLowRow();
    char buttonPressed();
};

#endif