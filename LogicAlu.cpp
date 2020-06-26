#include "LogicAlu.h"

result Alu::addition(uint32_t operand1, uint32_t operand2) {
    uint64_t resultInt = 0;
    result resultStruct{};
    resultInt += operand1 + operand2;
    calculateFlags(resultInt, operand1, operand2);
    resultStruct.flags = flags;
    resultInt = adjustWidth(resultInt);
    resultStruct.result = resultInt;
    return resultStruct;
}

result Alu::substraction(uint32_t operand1, uint32_t operand2) {
    uint64_t resultInt = 0;
    result resultStruct{};    
    resultInt += (operand2 - operand1);
    calculateFlags(resultInt, operand1, operand2);
    resultStruct.flags = flags;
    resultInt = adjustWidth(resultInt);
    resultStruct.result = resultInt; 
    return resultStruct;
}

result Alu::multiplication(uint32_t operand1, uint32_t operand2) {
    uint64_t resultInt = 0;
    result resultStruct{};
    resultInt = operand1 * operand2;
    calculateFlags(resultInt, operand1, operand2);
    resultStruct.flags = flags;
    resultInt = adjustWidth(resultInt);
    resultStruct.result = resultInt;
    return resultStruct;
}

result Alu::divison(uint32_t operand1, uint32_t operand2) {
    uint64_t resultInt = 0;
    result resultStruct{};
    resultInt = operand1 / operand2;
    calculateFlags(resultInt, operand1, operand2);
    resultStruct.flags = flags;
    resultInt = adjustWidth(resultInt);
    resultStruct.result = resultInt;
    return resultStruct;
}

result Alu::leftShift(uint32_t operand, uint32_t numberOfShifts) {
  uint64_t resultInt = 0;
    result resultStruct{};
    resultInt = operand << numberOfShifts;
    calculateFlags(resultInt,0,0);
    resultStruct.flags = flags;
    resultStruct.result = resultInt;
    return resultStruct;
}

result Alu::rightShift(uint32_t operand, uint16_t numberOfShifts) {
    uint64_t resultInt = 0;
    result resultStruct{};
    resultInt = operand >> numberOfShifts;
    calculateFlags(resultInt,0,0);
    resultStruct.flags = flags;
    resultStruct.result = resultInt;
    return resultStruct;
}

void Alu::calculateFlags(uint64_t value, uint32_t operand1, uint32_t operand2) {
    setZeroFlag(checkZeroFlag(value));
    setNegativeFlag(checkNegativeFlag(value));
    setCarryFlag(checkCarryFlag(value));
    setOverflowFlag(checkOverflowFlag(value, operand1, operand2));
    setBCDFlag(checkBCD(value));
}

uint8_t Alu::getBitWidth() {
    return flags.bitWidth;
}

void Alu::setBitWidth(uint8_t bitWidth){
    if (bitWidth == BIT_WIDTH_8) {
        flags.bitWidth = BIT_WIDTH_8;
    } else if (bitWidth == BIT_WIDTH_16) {
        flags.bitWidth = BIT_WIDTH_16;
    } else if (bitWidth == BIT_WIDTH_32) {
        flags.bitWidth = BIT_WIDTH_32;
    }
}

bool Alu::checkZeroFlag(uint64_t result) {
    if (flags.bitWidth == BIT_WIDTH_8){
        result &= BIT_MASK_8;
    } else if (flags.bitWidth == BIT_WIDTH_16) {
        result &= BIT_MASK_16;
    } else if (flags.bitWidth == BIT_WIDTH_32) {
        result &= BIT_WIDTH_32;
    }

    if (result == 0) {
        return true;
    }
    return false;
}

bool Alu::checkNegativeFlag(uint64_t result) {
    if (flags.bitWidth == BIT_WIDTH_8){
        result &= MSB_8;
    } else if (flags.bitWidth == BIT_WIDTH_16) {
        result &= MSB_16;
    } else if (flags.bitWidth == BIT_WIDTH_32) {
        result &= MSB_32;
    }

    if (result > 0) {
        return true;
    }
    return false;
}

bool Alu::checkCarryFlag(uint64_t result){
    if (flags.bitWidth == BIT_WIDTH_8){
        result &= (1 << 8);
    } else if (flags.bitWidth == BIT_WIDTH_16) {
        result &= (1 << 16);
    } else if (flags.bitWidth == BIT_WIDTH_32) {
        result &= (1 << 32);
    }

    if (result > 0) {
        return true;
    }
    return false;
}

bool Alu::checkOverflowFlag(uint64_t result, uint32_t operand1, uint32_t operand2) {
    if (flags.bitWidth == BIT_WIDTH_8){
        if (((operand1 & MSB_8) && (operand2 & MSB_8) && !(result & BIT_WIDTH_8)) || 
            (!(operand1 & MSB_8) && !(operand2 & MSB_8) && (result & BIT_WIDTH_8)))
                return true;
    } else if (flags.bitWidth == BIT_WIDTH_16) {
        if (((operand1 & MSB_16) && (operand2 & MSB_16) && !(result & BIT_WIDTH_16)) || 
            (!(operand1 & MSB_16) && !(operand2 & MSB_16) && (result & BIT_WIDTH_16)))
                return true;
    } else if (flags.bitWidth == BIT_WIDTH_32) {
        if (((operand1 & MSB_32) && (operand2 & MSB_32) && !(result & BIT_WIDTH_32)) || 
            (!(operand1 & MSB_32) && !(operand2 & MSB_32) && (result & BIT_WIDTH_32)))
                return true;
    }
    return false;
}

uint8_t Alu::checkBCD(uint64_t result) {
    uint8_t bcdInt = 0;
    if((result & TETRADE_MASK_0)&9 > 0){
        bcdInt |= 1;
    }
    if(((result & TETRADE_MASK_1)>>4)&9 >0){
        bcdInt |= 1<<1;
    }
    if(((result & TETRADE_MASK_2)>>8)&9 >0){
        bcdInt |= 1<<2;
    }
    if(((result & TETRADE_MASK_3)>>12)&9 >0){
        bcdInt |= 1<<3;
    }
    if(((result & TETRADE_MASK_4)>>16)&9 >0){
        bcdInt |= 1<<4;
    }
    if(((result & TETRADE_MASK_5)>>20)&9 >0){
        bcdInt |= 1<<5;
    }
    if(((result & TETRADE_MASK_6)>>24)&9 >0){
        bcdInt |= 1<<6;
    }
    if(((result & TETRADE_MASK_7)>>28)&9 >0){
        bcdInt |= 1<<7;
    }
    return bcdInt;
}

void Alu::setZeroFlag(bool zero) {
    if (zero) {
        flags.zero = 1;
    } else {
        flags.zero = 0;
    }
}

void Alu::setNegativeFlag(bool negative) {
    if (negative) {
        flags.negative = 1;
    } else {
        flags.negative = 0;
    }
}

void Alu::setCarryFlag(bool carry) {
    if (carry) {
        flags.carry = 1;
    } else {
        flags.carry = 0;
    }
}

void Alu::setOverflowFlag(bool overflow) {
    if (overflow) {
        flags.overflow = 1;
    } else {
        flags.overflow = 0;
    }
}

void Alu::setBCDFlag(uint8_t bcd) {
    flags.halfcarry0 = (bcd & 1);
    flags.halfcarry1 = (bcd & 1<<1)>>1;
    flags.halfcarry2 = (bcd & 1<<2)>>2;
    flags.halfcarry3 = (bcd & 1<<3)>>3;
    flags.halfcarry4 = (bcd & 1<<4)>>4;
    flags.halfcarry5 = (bcd & 1<<5)>>5;
    flags.halfcarry6 = (bcd & 1<<6)>>6;
    flags.halfcarry7 = (bcd & 1<<7)>>7;
}

void Alu::clearFlags() {
    flags.zero = 0;
    flags.negative = 0;
    flags.carry = 0;
    flags.overflow = 0;
    flags.halfcarry0 = 0;
    flags.halfcarry1 = 0;
    flags.halfcarry2 = 0;
    flags.halfcarry3 = 0;
    flags.halfcarry4 = 0;
    flags.halfcarry5 = 0;
    flags.halfcarry6 = 0;
    flags.halfcarry7 = 0;
    flags.bitWidth = 0;
}

uint32_t Alu::adjustWidth(uint32_t value)
{
   switch (flags.bitWidth) 
  {
    case BIT_WIDTH_8:  
      value &= BIT_MASK_8;
    break;

    case BIT_WIDTH_16:  
        value &= BIT_MASK_16;
    break;
  }
  return (value);
}