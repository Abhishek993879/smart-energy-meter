#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream logFile("logs/smart_meter.log");

    if (!logFile) {
        cerr << "Error: Cannot open smart meter log file." << endl;
        return 1;
    }

    string line;

    int readings = 0;
    double totalEnergy = 0.0;
    double peakEnergy = 0.0;

    while (getline(logFile, line)) {

        if (line.find("Energy:") != string::npos &&
            line.find("kWh") != string::npos) {

            size_t start = line.find(":") + 1;
            size_t end = line.find("kWh");

            string value = line.substr(start, end - start);

            double energy = stod(value);

            totalEnergy += energy;
            readings++;

            if (energy > peakEnergy) {
                peakEnergy = energy;
            }
        }
    }

    logFile.close();

    if (readings == 0) {
        cout << "No energy readings found." << endl;
        return 0;
    }

    double averageEnergy = totalEnergy / readings;

    // Example/configurable tariff
    const double tariff = 6.50;

    double estimatedCost = totalEnergy * tariff;

    cout << fixed << setprecision(2);

    cout << "\n========================================" << endl;
    cout << "       SMART ENERGY ANALYTICS" << endl;
    cout << "========================================" << endl;

    cout << "Total Readings : " << readings << endl;
    cout << "Total Energy   : " << totalEnergy << " kWh" << endl;
    cout << "Average Energy : " << averageEnergy << " kWh" << endl;
    cout << "Peak Energy    : " << peakEnergy << " kWh" << endl;
    cout << "Tariff         : Rs. " << tariff << " / kWh" << endl;
    cout << "Estimated Cost : Rs. " << estimatedCost << endl;

    if (averageEnergy < 0.05) {
        cout << "Usage Category : Low" << endl;
    }
    else if (averageEnergy < 0.10) {
        cout << "Usage Category : Moderate" << endl;
    }
    else {
        cout << "Usage Category : High" << endl;
    }

    // High usage alert
    if (peakEnergy >= 0.10) {
        cout << "Alert          : HIGH ENERGY USAGE DETECTED!" << endl;
    }
    else {
        cout << "Alert          : Normal energy usage." << endl;
    }

    return 0;
}
