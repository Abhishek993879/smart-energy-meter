#include <iostream>
#include "energy_meter.h"

using namespace std;

int main() {
    EnergyMeter meter;

    for (int i = 0; i < 10; i++) {
        meter.addPulse();
    }

    cout << "Pulses   : " << meter.getPulseCount() << endl;
    cout << "Energy   : " << meter.getEnergyWh() << " Wh" << endl;
    cout << "Energy   : " << meter.getEnergyKWh() << " kWh" << endl;

    return 0;
}
