#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int readings;
    double totalEnergy;

    cout << "==================================" << endl;
    cout << " Smart Energy Analytics Agent" << endl;
    cout << "==================================" << endl;

    cout << "Enter number of readings: ";
    cin >> readings;

    cout << "Enter total energy consumed (kWh): ";
    cin >> totalEnergy;

    if (readings <= 0 || totalEnergy < 0) {
        cout << "Invalid input." << endl;
        return 1;
    }

    double averageEnergy = totalEnergy / readings;

    // Example electricity tariff
    const double tariff = 6.50;

    double estimatedCost = totalEnergy * tariff;

    cout << fixed << setprecision(2);

    cout << "\n========== Analytics Report ==========" << endl;
    cout << "Total Readings     : " << readings << endl;
    cout << "Total Energy       : " << totalEnergy << " kWh" << endl;
    cout << "Average Energy     : " << averageEnergy << " kWh" << endl;
    cout << "Tariff             : Rs. " << tariff << " / kWh" << endl;
    cout << "Estimated Cost      : Rs. " << estimatedCost << endl;

    if (averageEnergy < 1.0) {
        cout << "Usage Category     : Low" << endl;
    }
    else if (averageEnergy < 3.0) {
        cout << "Usage Category     : Moderate" << endl;
    }
    else {
        cout << "Usage Category     : High" << endl;
    }

    return 0;
}
