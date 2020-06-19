#include "HardwareScheduler.h"

#include <stdlib.h>

HardwareScheduler::HardwareScheduler(HardwareTimer timer) {
    this->timer = timer;
    for (int i = 0; i < HARDWARE_AMOUNT_OF_JOBS; i++) {
        jobs[i].jobs = nullptr;
        jobs[i].definedLength = 0;
    }
}

HardwareScheduler::~HardwareScheduler() {
    for (int i = 0; i < HARDWARE_AMOUNT_OF_JOBS; i++) {
        free(jobs[i].jobs);
    }
}

void HardwareScheduler::run() {
    int i = 0;
    while (i < HARDWARE_AMOUNT_OF_JOBS) {
        if (!timer.checkNewCycle()) {
            continue;
        }

        for (int j = 0; j < HARDWARE_AMOUNT_OF_JOBS; j++) {
            jobs[i].jobs[j]();
        }
        i++;
    }
}

void HardwareScheduler::regist(int length, functype callback) {
    int shortestJobList = 0;
    for (int i = 1; i < HARDWARE_AMOUNT_OF_JOBS; i++) {
        if (jobs[i].definedLength <= jobs[shortestJobList].definedLength) {
            shortestJobList = i;
        }
    }

    functype *cache = jobs[shortestJobList].jobs;
    jobs[shortestJobList].jobs =
        (functype *)realloc(jobs[shortestJobList].jobs, sizeof(functype));
    if (jobs[shortestJobList].jobs == nullptr) {
        // error handling not enough space to regist this new function to the
        // scheduler
        // TODO
        jobs[shortestJobList].jobs = cache;
    }

    jobs[shortestJobList].jobs[jobs[shortestJobList].definedLength] = callback;
    jobs[shortestJobList].definedLength++;
}
