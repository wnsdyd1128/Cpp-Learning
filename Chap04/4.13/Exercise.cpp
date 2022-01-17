#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int mileage;
	int totalMileage = 0;
	int totalFuelUsed = 0;
	cout << "Enter Kilometers driven (-1 to quit): ";
	while (cin >> mileage, mileage != -1) {
		int fuelUsed;
		cout << "Enter liters used: ";
		cin >> fuelUsed;
		totalMileage += mileage;
		totalFuelUsed += fuelUsed;
		cout << "Kms per liter this trip: " << setprecision(6) << fixed << static_cast<double>(mileage) / fuelUsed << endl;
		cout << "Total kms per liter: " << static_cast<double>(totalMileage) / totalFuelUsed << endl;
		cout << endl << "Enter Kilometers driven (-1 to quit): ";
	}
}