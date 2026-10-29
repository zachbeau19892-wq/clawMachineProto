//
// Created by zachb on 10/4/2026.
//


#pragma once

#include "freertos/FreeRTOS.h"
#include "xyMotorDriver.hpp"


namespace logic {


class xyMotorLogic {
    driver::xyMotorDriver& driver_;
public:
    xyMotorLogic(driver::xyMotorDriver& driver);

    //blocking move function
    void move(size_t steps, uint32_t freqHz);
    //non-blocking move function
    bool start(uint32_t steps, uint32_t segmentUs);
    //wait for start() to finish
    void wait();
    void setDir(uint8_t);
    void enable(uint8_t);


    };
}
