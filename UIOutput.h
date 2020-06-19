//
// Created by Kai Siemek on 19.05.20.
//

#ifndef AUTOSYSLAB_CALCULATOR_OUTPUT_H
#define AUTOSYSLAB_CALCULATOR_OUTPUT_H
#include "UIDisplayArray.h"
#include "HardwareDisplay.h"

class UIOutput {
private:
    UIDisplayArray display;
public:
    UIOutput(){
        display = UIDisplayArray();
    }
    ~UIOutput(){
        delete &display;
    }
    // Interface method for the logic module
    void displayResult(long long number, bool flags[]) noexcept;
    void displayError(char *message);
    void update();
    void updateLED();
    void sendResultSerial();
    char* convertNumber(long long number);

};


#endif //AUTOSYSLAB_CALCULATOR_OUTPUT_H
