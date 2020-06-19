//
// Created by jan on 2020-05-27
//

#include "HardwareTimer.h"

#define HARDWARE_AMOUNT_OF_JOBS 5

#ifndef AUTOSYSLAB_CALCULATOR_HARDWARESCHEDULER_H
#define AUTOSYSLAB_CALCULATOR_HARDWARESCHEDULER_H

typedef void (*functype)();

typedef struct {
    functype *jobs;
    int definedLength;
} JobList;

class HardwareScheduler {
public:
    // execute this scheduler
    void run();

    // register a new function to this scheduler
    // param length:
    // param void(*)():
    void regist(int length, functype);

    // Scheduler constructor
    HardwareScheduler(HardwareTimer);
    ~HardwareScheduler();

private:
    HardwareTimer timer;
    JobList jobs[HARDWARE_AMOUNT_OF_JOBS];
};

#endif
