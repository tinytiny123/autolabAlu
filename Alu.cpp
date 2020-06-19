#include "Alu.h"

#define MSB_8 (1 << (8 - 1))
#define MSB_16 (1 << (16 - 1))
#define MSB_32 (1 << (32 - 1))
#define MSB_64 (1 << (64 - 1))

#define ZERO_BIT_MASK (1)
#define NEGATIV_BIT_MASK (1 << 1)
#define CARRY_BIT_MASK (1 << 2)
#define OVERFLOW_BIT_MASK (1 << 3)
#define HALFCARRY0_BIT_MASK (1 << 4)
#define HALFCARRY1_BIT_MASK (1 << 5)
#define HALFCARRY2_BIT_MASK (1 << 6)
#define HALFCARRY3_BIT_MASK (1 << 7)
#define HALFCARRY4_BIT_MASK (1 << 8)
#define HALFCARRY5_BIT_MASK (1 << 9)
#define HALFCARRY6_BIT_MASK (1 << 10)
#define HALFCARRY7_BIT_MASK (1 << 11)
#define SIGNED_UNSIGNED_BIT_MASK (1 << 12)

#define BIT_MASK_8 0xFF
#define BIT_MASK_16 0xFFFF
#define BIT_MASK_32 0xFFFFFFFF
#define BIT_MASK_64 0xFFFFFFFFFFFFFFFF

#define FLAGS_BIT_WIDTH 0b110000000000000
#define BIT_WIDTH_REPRESENTATION_8 0b0
#define BIT_WIDTH_REPRESENTATION_16 0b10000000000000
#define BIT_WIDTH_REPRESENTATION_32 0b100000000000000

result addition(uint32_t operand1, uint32_t operand2) {
    uint64_t resultInt = 0;
    result resultStruct{};
    
    if (flags & CARRY_BIT_MASK) {
        resultInt += 1;
        flags -= CARRY_BIT_MASK;
    }
    resultInt += operand1 + operand2;
    resultStruct.result = resultInt;
    resultStruct.flags = flags.all;
    return resultStruct;
}

result substraction(uint32_t operand1, uint32_t operand2) {
   uint64_t resultInt = 0;
   result resultStruct{};
   test = 1;
   
    if (flags & CARRY_BIT_MASK) {
       resultInt += 1;
       flags -= CARRY_BIT_MASK;
    }
   resultInt += (operand2 - operand1);
   resultStruct.result = resultInt; 
   resultStruct.flags = flags;
   return resultStruct;

}

result multiplication(uint32_t operand1, uint32_t operand2, uint16_t flags) {
    uint64_t res = 0;
    res = operand1 * operand2;
    
}

result divison(uint32_t operand1, uint32_t operand2, uint16_t flags) {

}

result leftShift(uint32_t operand, uint32_t numberOfShifts, uint16_t flags) {

}

result rightShift(uint32_t operand, uint16_t numberOfShifts, uint16_t flags) {
    
}

uint16_t calculateFlags(uint64_t result, uint32_t operand1, uint32_t operand2, uint16_t flags) {

}

uint8_t getBitWidth(uint16_t flags) {
    uint8_t bitWidth = flags & FLAGS_BIT_WIDTH;
    if(bitWidth == BIT_WIDTH_REPRESENTATION_8) {
        return 0;
    } else if (bitWidth == BIT_WIDTH_REPRESENTATION_16) {
        return 1;
    } else {
        return 2;
    }
}

// methods for Steuerwerk
void setsigned(uint8_t sign) {
    sign = 0 ? flags |= SIGNED_UNSIGNED_BIT_MASK: flags &= ~SIGNED_UNSIGNED_BIT_MASK;
}


void setBitWidth(uint8_t bitWidth){
    flags &= ~FLAGS_BIT_WIDTH;
    if (bitWidth == 1) {
        flags |= BIT_WIDTH_REPRESENTATION_16;
    } else if (bitWidth == 2) {
        flags |= BIT_WIDTH_REPRESENTATION_32;
    }
}