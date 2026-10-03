#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <ctime>

using namespace std;

int main() {
    int pulseCount = 0;
    const int totalPulses = 20;

    ofstream logFile("logs/smart_meter.log", ios::app);

    if (!logFile) {
        cerr << "Error: Cannot open log file." << endl;
        return 1;
    }

    cout << "========================================" << endl;
    cout << " Smart Energy Smart-Meter System" << endl;
    cout << "========================================" << endl;

    for (int i = 1; i <= totalPulses; i++) {

        pulseCount++;

        cout << "Pulse detected: " << pulseCount << endl;

        this_thread::sleep_for(
            chrono::milliseconds(300)
        );
    }

    double energyWh = pulseCount;
    double energyKWh = energyWh / 1000.0;

    auto now = chrono::system_clock::to_time_t(
        chrono::system_clock::now()
    );

    logFile << "Timestamp: " << ctime(&now);
    logFile << "Total Pulses: " << pulseCount << endl;
    logFile << "Energy: " << energyWh << " Wh" << endl;
    logFile << "Energy: " << energyKWh << " kWh" << endl;
    logFile << "----------------------------------------" << endl;

    logFile.close();

    cout << endl;
    cout << "========== Energy Report ==========" << endl;
    cout << "Total Pulses : " << pulseCount << endl;
    cout << "Energy       : " << energyWh << " Wh" << endl;
    cout << "Energy       : " << energyKWh << " kWh" << endl;
    cout << "Reading saved to: logs/smart_meter.log" << endl;

    return 0;
}
