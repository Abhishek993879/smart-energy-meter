#include <iostream>

using namespace std;

int main() {
    int pulses;

    cout << "==================================" << endl;
    cout << " Smart Energy Smart-Meter System" << endl;
    cout << "==================================" << endl;

    cout << "Enter number of meter pulses: ";
    cin >> pulses;

    // 1 pulse = 1 Wh
    double energyWh = pulses;
    double energyKWh = energyWh / 1000.0;

    cout << "\nEnergy Consumption" << endl;
    cout << "------------------" << endl;
    cout << "Pulses    : " << pulses << endl;
    cout << "Energy    : " << energyWh << " Wh" << endl;
    cout << "Energy    : " << energyKWh << " kWh" << endl;

    return 0;
}
