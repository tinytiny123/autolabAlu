//
// Created by jonas on 27.05.20.
//

#include <stdint.h>

#ifndef AUTOSYSLAB_CALCULATOR_HARDWARETIMER_H
#define AUTOSYSLAB_CALCULATOR_HARDWARETIMER_H

class HardwareTimer {
public:
    static volatile uint8_t newCycle;
    //   void ISR(TIMER0_COMP_VECT);
    /**
     * frequency set-up as follows:
     * base Timer ((frequency / prescaler) * (1/interrupts per second)) -1
     * so currently there should be 10 Cycles per second
     * tool for timerFrequency calc
     * https://timer-interrupt-calculator.simsso.de/
     */
    int hardwareTimerFrequency = ((16000000 / 1024) * 0.1) - 1;

public:
    void init();
    bool checkNewCycle();
};

#endif // AUTOSYSLAB_CALCULATOR_HARDWARETIMER_H
