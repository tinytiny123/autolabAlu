//
// Created by David Gruber on 26.05.20.
//

#include "HardwareSerialInterface.h"

void HardwareSerialInterface::init(HardwareBuffer hwBuffer) {
    this->buffer = hwBuffer;
}

void HardwareSerialInterface::read() {
    String acceptable = "-*/<>#+({0123456789ABCDEFhdb)}_= @";
    String incomingStr;
    if (Serial.available() > 0) {
        incomingStr = Serial.readString();
        if (incomingStr.length() > 0) {
            // iterate through the incoming string and take it char by char
            // then look if the acceptable string has that char,
            // if not the test fails and input is discarded else pushChars to
            // buffer

            int incomingStrLen = incomingStr.length();
            char *incomingChars = const_cast<char *>(incomingStr.c_str());

            bool test = true;
            for (char *ptr{incomingChars};
                 ptr < (incomingChars + incomingStrLen); ++ptr) {
                if (acceptable.indexOf(*ptr) == -1) {
                    test = false;
                    break;
                }
            }

            if (test) {
                this->buffer.pushChars(incomingChars);
            } else {
                Serial.println("Illegal Character in calculation String.");
            }
        }
    }
}

void HardwareSerialInterface::print(
    char output[DISPLAY_ROWS][DISPLAY_COLUMNS]) {
    String toPrint = "";
    if (Serial.available() > 0) {
        for (int row = 0; row < DISPLAY_ROWS; ++row) {
            Serial.println(String(output[row]));
        }
    }
}
