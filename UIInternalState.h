//
// Created by Kai Siemek on 19.05.20.
//

#ifndef AUTOSYSLAB_CALCULATOR_INTERNALSTATE_H
#define AUTOSYSLAB_CALCULATOR_INTERNALSTATE_H

#include <stdint.h>

#define BIT_BREADTH_8 8
#define BIT_BREADTH_16 16
#define BIT_BREADTH_32 32

#define NUMBER_SYSTEM_BINARY 2
#define NUMBER_SYSTEM_DECIMAL 10
#define NUMBER_SYSTEM_HEX 16

/**
 * Operators
 */
#define OPERATION_NONE 0
#define OPERATION_ADD 1
#define OPERATION_SUB 2
#define OPERATION_MUL 3
#define OPERATION_DIV 4
#define OPERATION_SHL 5
#define OPERATION_SHR 6
#define OPERATION_LSHR 7
#define OPERATION_EQU 8

/**
 * State identifiers (for input validation)
 */
#define CALCULATION_STATE_OP1 0
#define CALCULATION_STATE_OP2 1
#define CALCULATION_STATE_OPERATION 2

/**
 * Key-Code classification (for input validation) 
 */
#define NUM_BIN 0       // Numbers allowed in Binary 0, 1
#define NUM_DEC 1       // Numbers allowed in Decimal 0-9
#define LTR_HEX 2       // Numbers/letters allowed 0-9, A-F
#define BIN_OP 3        // Binary Operators +, *, Shifts, etc.
#define UN_OP 4         // +/- operator
#define EQUALS 5        // Equals sign
#define NUM_CHANGE 6    // Number system change BI, DE, HX
#define BIT_CHANGE 7    // Bit breadth change BB
#define SIGN_CHANGE 8   // Change signed/unsigned mode SI
#define PARENS 9        // Parentheses ), (
#define ARROW 10        // Arrow keys <-, ->
#define CE 11           // CE key
#define BACKSPACE 12    // Backspace

#define BETWEEN(X, A, B) ((X) >= (A) && (X) <= (B)) 
class InternalState {
private:
    static InternalState *state;

public:
    static InternalState *getInstance() {
        if (!state)
            state = new InternalState{};
        return state;
    }

    bool carryFlag = false;
    bool zeroFlag = false;
    bool negativeFlag = false;
    bool overflowFlag = false;
    bool signedFlag = false;

    uint8_t bitBreadth = BIT_BREADTH_8;
    uint8_t numberSystem = NUMBER_SYSTEM_DECIMAL;
    uint8_t calculationState = CALCULATION_STATE_OP1;

    int64_t operand1 = 0;
    int64_t operand2 = 0;
    uint8_t operation = OPERATION_NONE;

    int lastResult = 0;
    uint8_t displayOffset = 0;
};

#endif // AUTOSYSLAB_CALCULATOR_INTERNALSTATE_H