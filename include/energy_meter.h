#ifndef ENERGY_METER_H
#define ENERGY_METER_H

class EnergyMeter {
private:
    int pulseCount;

public:
    EnergyMeter();

    void addPulse();

    int getPulseCount() const;

    double getEnergyWh() const;

    double getEnergyKWh() const;
};

#endif
