//
// Created by Teresa on 27.05.2020.
//

#include <stdint.h>

#ifndef AUTOSYSLAB_CALCULATOR_HARDWAREBUFFER_H
#define AUTOSYSLAB_CALCULATOR_HARDWAREBUFFER_H

#define MAX_BUFFER_SIZE 255 // Max. amount of characters

/**
 * Definition of a Hardware Buffer.
 */
class HardwareBuffer {
private:
    uint8_t size;                   // Current size of the Buffer
    uint8_t first;                  // First element of ring buffer
    char buffer[MAX_BUFFER_SIZE]{}; // Buffer with characters

    // Methods as convenience
    void push(char character);

public:
    HardwareBuffer();

    inline bool isEmpty() const;
    char getTopChar();
    void getAllChars(char *returnChar);
    uint8_t pushChar(char character);
    uint8_t pushChars(char *allCharacters);
};

#endif // AUTOSYSLAB_CALCULATOR_HARDWAREBUFFER_H
