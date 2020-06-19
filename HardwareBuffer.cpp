//
// Created by Teresa on 27.05.2020.
//

#include "HardwareBuffer.h"

// ANNOTATION: Every %-Operand can be realized with a &-Bit-Mask, as long as
// MAX_BUFFER_SIZE is 2^k, in this case 256. uint8_t would need to be changed to
// uint16_t as well.

/**
 * Constructs a HardwareBuffer instance and initializes the buffer.
 * Size and position of the first element are 0.
 * All buffer elements are initialized with '\0'.
 */
HardwareBuffer::HardwareBuffer() {
    this->size = 0;
    this->first = 0;

    // Initializes buffer array
    for (char &i : this->buffer) {
        i = '\0';
    }
}

/**
 * Checks if the buffer size equals 0.
 *
 * @return true, if the buffer is empty, false otherwise.
 */
inline bool HardwareBuffer::isEmpty() const { return this->size == 0; }

/**
 * Returns the char at position 'first', if the buffer isn't empty, and then
 * changes position of first and reduces the size.
 *
 * @return '\0' if the buffer is empty, otherwise whatever is on position
 * 'first' in the buffer.
 */
char HardwareBuffer::getTopChar() {
    char tempChar = '\0';

    if (!(isEmpty())) {
        tempChar = this->buffer[first];
        this->buffer[first] = '\0';

        this->size--;
        this->first = (this->first + 1) % MAX_BUFFER_SIZE;
    }

    return tempChar;
}

/**
 * Returns all characters from 'first' position to the end, if the buffer isn't
 * empty. Then changes size and position of 'first to 0.
 *
 * @param returnChar a (empty) pointer that receives the output of the method.
 * To be safe, needs to be MAX_BUFFER_SIZE. Receives everything in the buffer.
 */
void HardwareBuffer::getAllChars(char *returnChar) {
    if (!isEmpty()) {
        for (uint8_t i = 0; i < this->size; i++) {
            returnChar[i] =
                this->buffer[this->first];    // Copy field that was read
            this->buffer[this->first] = '\0'; // Clear field that was read
            this->first = (this->first + 1) % MAX_BUFFER_SIZE;
        }
        returnChar[this->size] = '\0'; // Ensures String is output correctly.

        this->size = 0;
        this->first = 0;
    }
}

/**
 * Pushes a single char into the buffer, if the buffer isn't full. If no
 * character can be pushed into the buffer this method returns a 1.
 *
 * @param character the character that should be pushed into the buffer.
 * @return 0 on success, 1 otherwise.
 */
uint8_t HardwareBuffer::pushChar(char character) {
    if (this->size != MAX_BUFFER_SIZE) {
        push(character);

        return 0;
    } else {
        return 1;
    }
}

/**
 * Pushes as many of the specified characters as possible into the buffer.
 * If no characters are pushed into the buffer or not all characters, this
 * method returns a 1.
 *
 * @param allCharacters characters that should be pushed into buffer (ending
 * with '\0').
 * @return 0 on success, 1 otherwise.
 */
uint8_t HardwareBuffer::pushChars(char *allCharacters) {
    if (this->size != MAX_BUFFER_SIZE) {

        // Read until buffer is full, or max amount of characters are read.
        while (this->size != MAX_BUFFER_SIZE && *allCharacters != '\0') {
            push(*allCharacters);
            allCharacters++;
        }
    }

    if (this->size == MAX_BUFFER_SIZE && *allCharacters != '\0') {
        return 1;
    } else {
        return 0;
    }
}

/**
 * Pushes a single character on the next "free" position into the buffer.
 *
 * @param character the character that should be pushed into the next spot.
 */
void HardwareBuffer::push(char character) {
    uint8_t pos = (first + this->size) % MAX_BUFFER_SIZE;

    this->buffer[pos] = character;
    this->size++;
}