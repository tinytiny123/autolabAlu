#include <stdint.h>

struct result {
    uint32_t result;
    uint16_t flags;
};

typedef struct {
    uint16_t zero:1;
    uint16_t negative:1;
    uint16_t carry:1;
    uint16_t halfcarry0:1;
    uint16_t halfcarry1:1;
    uint16_t halfcarry2:1;
    uint16_t halfcarry3:1;
    uint16_t halfcarry4:1;
    uint16_t halfcarry5:1;
    uint16_t halfcarry6:1;
    uint16_t halfcarry7:1;
    uint16_t sign:1;
    uint16_t bitWidth:2;
} Flags_t;

class Alu {

    Flags_t flags;

    result addition(uint32_t operand1, uint32_t operand2);

    result substraction(uint32_t operand1, uint32_t operand2);

    result multiplication(uint32_t operand1, uint32_t operand2);

    result divison(uint32_t operand1, uint32_t operand2);

    result leftShift(uint32_t operand, uint32_t numberOfShifts);

    result rightShift(uint32_t operand, uint16_t numberOfShifts);

    uint16_t calculateFlags(uint64_t result, uint32_t operand1, uint32_t operand2);

    int8_t getBitWidth();

    void setsigned(uint8_t sign);

    void setBitWidth(uint8_t bitWidth);

};