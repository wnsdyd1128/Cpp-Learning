#include <iostream>
#include <string>
using namespace std;
class MotorVehicle {
private:
	string make;
	string fuelType;
	int yearOfManufacture;
	string color;
	int engineCapacity;
public:
	MotorVehicle(string m, string f, int year, string c, int capacity) {
		make = m;
		fuelType = f;
		yearOfManufacture = year;
		color = c;
		engineCapacity = capacity;
	}
	void setMake(string m) {
		make = m;
	}
	void setFuelType(string f) {
		fuelType = f;
	}
	void setYearOfManufacture(int y) {
		yearOfManufacture = y;
	}
	void setColor(string c) {
		color = c;
	}
	void setEngineCapacity(int c) {
		engineCapacity = c;
	}
	string getMake() {
		return make;
	}
	string getFuelType() {
		return fuelType;
	}
	int getYearOfManufacture() {
		return yearOfManufacture;
	}
	string getColor() {
		return color;
	}
	int getEngineCapacity() {
		return engineCapacity;
	}
	void displayCarDetails() {
		cout << "Make : " << make << endl
			<< "Fuel type : " << fuelType << endl
			<< "Year of manufacture : " << yearOfManufacture << endl
			<< "Color : " << color << endl
			<< "Engine capacity : " << engineCapacity << endl;
	}
};

int main() {
	MotorVehicle car("mcleroysane19", "deitel", 2021, "skyblue", 1213);
	car.displayCarDetails();
}