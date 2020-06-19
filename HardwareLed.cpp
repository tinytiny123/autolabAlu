//
// Created by Fabian Rapp on 6/9/20.
//

#include "HardwareLed.h"

Led::Led(int ledName) {
    this->pinName = ledName;
    pinMode(this->pinName, OUTPUT);
    digitalWrite(this->pinName, LOW);
}

void Led::on() { digitalWrite(this->pinName, HIGH); }

void Led::off() { digitalWrite(this->pinName, LOW); }

Bitwidth::Bitwidth() {
    pinMode(BIT_8, OUTPUT);
    pinMode(BIT_16, OUTPUT);
    pinMode(BIT_32, OUTPUT);

    digitalWrite(BIT_8, LOW);
    digitalWrite(BIT_16, LOW);
    digitalWrite(BIT_32, LOW);
}

void Bitwidth::bit8Led() {
    digitalWrite(BIT_16, LOW);
    digitalWrite(BIT_32, LOW);
    digitalWrite(BIT_8, HIGH);
}

void Bitwidth::bit16Led() {
    digitalWrite(BIT_8, LOW);
    digitalWrite(BIT_32, LOW);
    digitalWrite(BIT_16, HIGH);
}

void Bitwidth::bit32Led() {
    digitalWrite(BIT_8, LOW);
    digitalWrite(BIT_16, LOW);
    digitalWrite(BIT_32, HIGH);
}