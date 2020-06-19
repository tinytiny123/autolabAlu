//
// Created by David Gruber on 26.05.20.
//

#ifndef AUTOSYSLAB_CALCULATOR_HARDWARESERIALINTERFACE_H
#define AUTOSYSLAB_CALCULATOR_HARDWARESERIALINTERFACE_H

#include "HardwareBuffer.h"
#include "HardwareDisplay.h"
#include <Arduino.h>

class HardwareSerialInterface {
private:
    HardwareBuffer buffer;

public:
    // Initializer Function
    void init(HardwareBuffer hwBuffer);
    // reads strings from Serial Interface / called by hardware-scheduler
    void read();
    // prints characters to the Serial Interface
    void print(char output[DISPLAY_ROWS][DISPLAY_COLUMNS]);
};

#endif // AUTOSYSLAB_CALCULATOR_HARDWARESERIALINTERFACE_H
