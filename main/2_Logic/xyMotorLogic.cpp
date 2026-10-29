//
// Created by zachb on 10/4/2026.
//

#include "xyMotorDriver.hpp"
#include "xyMotorLogic.hpp"

namespace logic {

xyMotorLogic::xyMotorLogic(driver::xyMotorDriver& driver) : driver_(driver) {
    driver_.init();
}

void xyMotorLogic::move(size_t steps, uint32_t freqHz) {
    driver_.moveSteps(steps, freqHz);
}

bool xyMotorLogic::start(uint32_t steps, uint32_t segmentUS) {
    return driver_.startSteps(steps, segmentUS);
}

void xyMotorLogic::wait() {
    driver_.waitDone();
}

void xyMotorLogic::setDir(uint8_t direction) {
    driver_.dir(direction);
}

void xyMotorLogic::enable(uint8_t toggle) {
    driver_.onOff(toggle);
}

}