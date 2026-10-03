#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int pulseCount = 0;

    cout << "==================================" << endl;
    cout << " Smart Meter Pulse Simulator" << endl;
    cout << "==================================" << endl;

    for (int i = 1; i <= 10; i++) {
        pulseCount++;

        cout << "Pulse detected: " << pulseCount << endl;

        this_thread::sleep_for(chrono::milliseconds(500));
    }

    cout << "\nTotal pulses: " << pulseCount << endl;

    double energyWh = pulseCount;
    double energyKWh = energyWh / 1000.0;

    cout << "Energy: " << energyWh << " Wh" << endl;
    cout << "Energy: " << energyKWh << " kWh" << endl;

    return 0;
}
