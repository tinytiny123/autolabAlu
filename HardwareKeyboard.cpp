//
// Created by Bolor Tsogtsaikhan on 16.06.20.
//

#include "HardwareKeyboard.h"
#include "Arduino.h"


void HardwareKeyboard::init()
{
  for (int column = 0; column < KEYBOARD_COLUMN; column++) {
            pinMode(colPins[column], OUTPUT);
            digitalWrite(colPins[column], HIGH);
        }

        for (int row = 0; row < KEYBOARD_ROW; row++) {
            pinMode(rowPins[row], INPUT);
            digitalWrite(rowPins[row], LOW);
        }
}

int HardwareKeyboard::findLowRow()
{
  for (int row = 0; row < KEYBOARD_ROW; row++) {
    if (digitalRead(rowPins[row]) == LOW)
        return row;
  }

  return -1;
}

char HardwareKeyboard::buttonPressed()
{
  int rowIndex;

  for (int column = 0; column < KEYBOARD_COLUMN; column++) {
      digitalWrite(colPins[column], LOW);

      rowIndex = findLowRow();
      if (rowIndex > -1) {
          if (!pressedKey)
              pressedKey = buttons[rowIndex][column];
          return pressedKey;
      }

      digitalWrite(colPins[column], HIGH);
  }

  pressedKey = '\0';

  return pressedKey;
}
