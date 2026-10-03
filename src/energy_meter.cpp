#include "energy_meter.h"

EnergyMeter::EnergyMeter() {
    pulseCount = 0;
}

void EnergyMeter::addPulse() {
    pulseCount++;
}

int EnergyMeter::getPulseCount() const {
    return pulseCount;
}

double EnergyMeter::getEnergyWh() const {
    return pulseCount;
}

double EnergyMeter::getEnergyKWh() const {
    return pulseCount / 1000.0;
}
