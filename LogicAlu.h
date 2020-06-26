#include <stdint.h>

#define BIT_WIDTH_8     0
#define BIT_WIDTH_16    1
#define BIT_WIDTH_32    2
#define BIT_MASK_8      0xFF
#define BIT_MASK_16     0xFFFF
#define BIT_MASK_32     0xFFFFFFFF

#define MSB_8 (1 << (8 - 1))
#define MSB_16 (1 << (16 - 1))
#define MSB_32 (1 << (32 - 1))
#define MSB_64 (1 << (64 - 1))

#define CARRY_MASK_8 (1<<8)
#define CARRY_MASK_16 (1<<16)
#define CARRY_MASK_32 (1<<32)

#define TETRADE_MASK_0 15
#define TETRADE_MASK_1 (15 << 4)
#define TETRADE_MASK_2 (15 << 8)
#define TETRADE_MASK_3 (15 << 12)
#define TETRADE_MASK_4 (15 << 16)
#define TETRADE_MASK_5 (15 << 20)
#define TETRADE_MASK_6 (15 << 24)
#define TETRADE_MASK_7 (15 << 28)

#define FLAGS_BIT_WIDTH 0x6000
#define BIT_WIDTH_REPRESENTATION_8 0x0
#define BIT_WIDTH_REPRESENTATION_16 0x2000
#define BIT_WIDTH_REPRESENTATION_32 0x4000

struct result {
    uint32_t result;
    Flags_t flags;
};

typedef struct {
    uint16_t zero:1;
    uint16_t negative:1;
    uint16_t carry:1;
    uint16_t overflow:1;
    uint16_t halfcarry0:1;
    uint16_t halfcarry1:1;
    uint16_t halfcarry2:1;
    uint16_t halfcarry3:1;
    uint16_t halfcarry4:1;
    uint16_t halfcarry5:1;
    uint16_t halfcarry6:1;
    uint16_t halfcarry7:1;
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
    uint32_t adjustWidth(uint32_t value);
    void calculateFlags(uint64_t result, uint32_t operand1, uint32_t operand2);
    uint8_t getBitWidth();

    bool checkZeroFlag(uint64_t result);
    bool checkNegativeFlag(uint64_t result);
    bool checkCarryFlag(uint64_t result);
    bool checkOverflowFlag(uint64_t result, uint32_t operand1, uint32_t operand2);
    uint8_t checkBCD(uint64_t result);

    public:
    void setBitWidth(uint8_t bitWidth);
    void setZeroFlag(bool zero);
    void setNegativeFlag(bool zero);
    void setCarryFlag(bool zero);
    void setOverflowFlag(bool zero);
    void setBCDFlag(uint8_t bcd);
    void clearFlags();
};