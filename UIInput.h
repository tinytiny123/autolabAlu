//
// Created by Kai Siemek on 19.05.20.
//

#ifndef AUTOSYSLAB_CALCULATOR_INPUTPROCESSING_H
#define AUTOSYSLAB_CALCULATOR_INPUTPROCESSING_H

class UIInput {
public:
    // Interface methods for the logic module
    static void initialize() noexcept;
    static void pollInput() noexcept;
    
private:
    static bool isStackEmpty();
    static void validateInput(char input);
    static void calculateNewInputBuf();
    static char classifyInput(char input);
    static void processNumber(char keyCode);
    static void processOperator(char keyCode);
    static void processUnaryOperator(char keyCode);
    static void processNumberSystemChange(char keyCode);
    static void processBitBreadthChange(char keyCode);
};

#endif // AUTOSYSLAB_CALCULATOR_INPUTPROCESSING_H
