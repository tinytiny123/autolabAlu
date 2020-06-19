//
// Created by Jonas Brauer on 05.06.2020.
//

#ifndef AUTOLABUI_LOGICDUMMYMETHODSFORUI_H
#define AUTOLABUI_LOGICDUMMYMETHODSFORUI_H

class LogicDummyMethodsForUI {
public:
    /**
     *
     * @return the given number in its binary representation as string
     */
    char* numberToBinaryString(long long);

    /**
     *
     * @return the given number in its decimal representation as string
     */
    char* numberToDecimalString(long long);

    /**
     *
     * @return the given number in its hexadecimal representation as string
     */
    char* numberToHexString(long long);
};

#endif // AUTOLABUI_LOGICDUMMYMETHODSFORUI_H
