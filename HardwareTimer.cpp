//
// Created by jonas on 27.05.20.
//

#include "HardwareTimer.h"
#include <Arduino.h>

// die Interrupt service routine

volatile uint8_t HardwareTimer::newCycle;
// interrupt service routine declares new cycle
ISR(TIMER1_OVF_vect) { HardwareTimer::newCycle = 1; }

bool HardwareTimer::checkNewCycle() {
    if (HardwareTimer::newCycle == 1) {
        HardwareTimer::newCycle = 0;
        return (true);
    }
    return (false);
}
// 16 bit Timer init
void HardwareTimer::init() {
    // set Mode 14 Fast PWM
    TCCR1A = (1 << WGM11) | (0 << WGM10);
    // set Prescaler to 1024
    TCCR1B =
        (1 << WGM13) | (1 << WGM12) | (1 << CS12) | (0 << CS11) | (1 << CS10);

    ICR1 = HardwareTimer::hardwareTimerFrequency;
    // activate interrupts
    TIMSK1 |= (1 << TOIE1);

    //one of the following may by necessary
    //OCR1A=0;
    //OCR1B=0;
    //or
    //OCR1AH=0;
    //OCR1AL=0;
    //OCR1BH=0;
    //OCR1BL=0;

    GTCCR &= ~(1 << TSM);
    sei();
}
