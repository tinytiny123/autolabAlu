
//
// Created by Kai Siemek on 19.05.20.
//

#include "UIInput.h"
#include "UIInternalState.h"
#include "UIOutput.h"

#include "HardwareBuffer.h"

/**
 * Initializes the input class
 */
void UIInput::initialize() {
    
}

// ======================================================================
//                            TODO
// ======================================================================
// Bit breadth checks in number & bb change methods
// Error messages

/**
 * Get the user-input on top of the Hardware Buffer stack
 * and start processing the input.
 */
void UIInput::pollInput() {
    if (isStackEmpty()) { return; }
    
    //char latestInput = HardwareBuffer::getTopChar();
    //validateInput(latestInput);
    //UIOutput::update();
}

/** 
 * Polls whether the input stack is empty 
 * and returns the result
 * 
 * @return &UIInput::processNumber if stack is empty, false otherwise
 */
bool UIInput::isStackEmpty() {
    //return HardwareBuffer::isEmpty();
}

/**
 * Validates the latest user input, returns false if input
 * is illegal at this stage.
 * @param the latest input character to be checked for validity
 * @return false if illegal input, &UIInput::processNumber if valid input
 */
//TODO: ERRORHANDLING 
void UIInput::validateInput(char input) {
    char classification = classifyInput(input);
    InternalState* state = InternalState::getInstance();
    switch (classification)
    {
        case NUM_BIN:
            return processNumber(input);
        case NUM_DEC:
            // Can't use numbers greater than 1 when in binary mode
            if (state->numberSystem == NUMBER_SYSTEM_DECIMAL)
                processNumber(input);
            break;
        case LTR_HEX:
            // Can only put in hex letters when in hexadecimal mode
            if (state->numberSystem == NUMBER_SYSTEM_HEX)
                processNumber(input);
            break;
        case BIN_OP:
            // Can't change binary operator when inputting second operand
            if (state->calculationState == CALCULATION_STATE_OPERATION)
                processOperator(input);
        case UN_OP:
            // Can't switch sign when in unsigned mode
            if (state->signedFlag)
                processUnaryOperator(input);
            break;
        case EQUALS:
            // Can't output result without operator and second operand
            if (state->calculationState == CALCULATION_STATE_OP2)
                processOperator(input); // TODO
            break;
        case NUM_CHANGE:
            // Can't change numbersystem after first operand has been specified
            if (state->calculationState == CALCULATION_STATE_OP1)
                processNumberSystemChange(input);
            break;
        case BIT_CHANGE:
            // Can't change bit breadth after first operand has been specified
            if (state->calculationState == CALCULATION_STATE_OP1)
                processBitBreadthChange(input);
            break;
        case SIGN_CHANGE:
            // Can't change sign after first operand has been specified
            if (state->calculationState == CALCULATION_STATE_OP1)
                processNumber(input); // TODO
            break;
        case PARENS:
            // Parenthesis are basically no-ops, so they're always allowed
            processNumber(input); // TODO
            break;
        case ARROW:
            // Arrow keys are always allowed
            processNumber(input); // TODO
            break;
        case CE:
            // Clear everything is allowed
            processNumber(input); // TODO
            break;
        case BACKSPACE:
            // Backspace is always allowed
            processNumber(input); // TODO
            break;
        default:
            // When in doubt, don't allow it
            break;
    }
}

void UIInput::calculateNewInputBuf() {

}

/**
 * Classifies the input into operation or operand
 * 
 * @return the classification as byte
 */
char UIInput::classifyInput(char input) {
    if (BETWEEN(input, '0', '1')) // '0' or '1'
        return NUM_BIN;
    else if (BETWEEN(input, '2', '9')) // '2' - '9'
        return NUM_DEC;
    else if (BETWEEN(input, 'A', 'F')) // 'A' - 'F'
        return LTR_HEX;
    else if (BETWEEN(input, '*', '/')) // '+' '-' '/' '*' 
        return BIN_OP;
    else if ((input == '<') || (input == '>') || (input == '#')) // Shifts, <, >, #
        return BIN_OP;
    else if (input == '~') // +/- (~)
        return UN_OP;
    else if (input == '=') // '='
        return EQUALS;
    else if (BETWEEN(input, 'b', 'h')) // BI (b), DE (d), HX (h)
        return NUM_CHANGE;
    else if (input == '^') // BB (^)
        return BIT_CHANGE;
    else if (input == ';') // S (;)
        return SIGN_CHANGE;
    else if (BETWEEN(input, '(', ')')) // ')' '('
        return PARENS;
    else if (BETWEEN(input, '{', '}')) // ← ({), → (})
        return ARROW;
    else if (input == '@') // CE (@)
        return CE;
    else if (input == '_') // BS (_)
        return BACKSPACE;
    else return -1;
}

/**
 * Converts the keycode to the correct number and adds it to the current operand.
 * Also changes the calculationState to OP2 if it was in OPERATION mode before.
 * @param keyCode of the last key that was pressed
 */
void UIInput::processNumber(char keyCode) {
    /*
        Converts the keyCode to the correct number
        If keyCode is 58 or below its a digit '0' - '9'.
        If keyCode is a digit, subtract 48 from it (ASCII '0')
        If keyCode is a (hex) letter ('A' - 'F'), subtract 55 from it (ASCII 'A' - 10)
    */
    char number = (keyCode <= '9') ? keyCode - '0' : keyCode - 'A' + 10;
    InternalState* state = InternalState::getInstance();

    if (state->calculationState == CALCULATION_STATE_OP1)
        state->operand1 = state->operand1 * state->numberSystem + number;
    else if (state->calculationState == CALCULATION_STATE_OP2)
        state->operand2 = state->operand2 * state->numberSystem + number;
    else if (state->calculationState == CALCULATION_STATE_OPERATION) {
        state->calculationState = CALCULATION_STATE_OP2;
        state->operand2 = state->operand2 * state->numberSystem + number;
    }
}

/**
 * Changes the current selected operation in the internal state
 * also switches the calculationState to OPERATION mode.
 * @param keyCode of the last key that was pressed
 */
void UIInput::processOperator(char keyCode) {
    uint8_t op;
    switch (keyCode) {
        case '*':
            op = OPERATION_MUL;
            break;
        case '+':
            op = OPERATION_ADD;
            break;
        case '-':
            op = OPERATION_SUB;
            break;
        case '/':
            op = OPERATION_DIV;
            break;
        case '<': // Shift Left
            op = OPERATION_SHL;
            break;
        case '>': // Shift Right
            op = OPERATION_SHR;
            break;
        case '#': // Logical Shift Right
            op = OPERATION_LSHR;
            break;
        default:
            op = OPERATION_NONE;
            break;
    }

    InternalState* state = InternalState::getInstance();
    state->calculationState = CALCULATION_STATE_OPERATION;
    state->operation = op;
}

/**
 * Changes the sign of the current operand and changes the signedFlag to TRUE
 * @param keyCode of the last key that was pressed
 */
void UIInput::processUnaryOperator(char keyCode) {
    InternalState* state = InternalState::getInstance();
    state->signedFlag = true;
    if (state->calculationState == CALCULATION_STATE_OP1)
        state->operand1 *= -1;
    else if (state->calculationState == CALCULATION_STATE_OP2)
        state->operand2 *= -1;
}

/**
 * Changes the currently selected number system.
 * @param keyCode of the last key that was pressed
 */
void UIInput::processNumberSystemChange(char keyCode) {
    InternalState* state = InternalState::getInstance();
    switch (keyCode)
    {
        case 'b':
            state->numberSystem = NUMBER_SYSTEM_BINARY;
            break;
        case 'd':
            state->numberSystem = NUMBER_SYSTEM_DECIMAL;
            break;
        case 'h':
            state->numberSystem = NUMBER_SYSTEM_HEX;
            break;
        default:
            break;
    }
}

/**
 * Changes the bitBreadth 8 -> 16 -> 32
 * @param keyCode of the last key that was pressed
 */
void UIInput::processBitBreadthChange(char keyCode) {
    InternalState* state = InternalState::getInstance();
    if (state->bitBreadth == BIT_BREADTH_8)
        state->bitBreadth = BIT_BREADTH_16;
    else if (state->bitBreadth == BIT_BREADTH_16)
        state->bitBreadth = BIT_BREADTH_32;
    else if (state->bitBreadth == BIT_BREADTH_32)
        state->bitBreadth = BIT_BREADTH_8;
}