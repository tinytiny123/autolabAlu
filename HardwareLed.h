//
// Created by Fabian Rapp on 5/26/20.
//

#ifndef AUTOSYSLAB_CALCULATOR_HARDWARELED_H
#define AUTOSYSLAB_CALCULATOR_HARDWARELED_H

#include <Arduino.h>

#define CARRY_LED 3
#define OVERFLOW_LED 2
#define NEGATIVE_LED 1
#define ZERO_LED 0
#define BIT_8 7
#define BIT_16 31
#define BIT_32 17

class Led {
private:
    int pinName; // Pin number of the specified LED

public:
    Led(int ledName);

    void on();
    void off();
};

class Bitwidth {
public:
    Bitwidth();

    void bit8Led();
    void bit16Led();
    void bit32Led();
};

#endif // AUTOSYSLAB_CALCULATOR_HARDWARELED_H
