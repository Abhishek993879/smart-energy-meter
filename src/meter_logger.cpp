#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

using namespace std;

int main() {
    ofstream logFile("logs/meter.log", ios::app);

    if (!logFile) {
        cerr << "Error: Unable to open log file." << endl;
        return 1;
    }

    int pulses = 10;

    double energyWh = pulses;
    double energyKWh = energyWh / 1000.0;

    auto now = chrono::system_clock::to_time_t(
        chrono::system_clock::now()
    );

    logFile << "Timestamp: " << ctime(&now);
    logFile << "Pulses: " << pulses << endl;
    logFile << "Energy: " << energyWh << " Wh" << endl;
    logFile << "Energy: " << energyKWh << " kWh" << endl;
    logFile << "-----------------------------" << endl;

    logFile.close();

    cout << "Meter reading saved to logs/meter.log" << endl;

    return 0;
}

