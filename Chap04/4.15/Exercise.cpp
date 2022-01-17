#include <iostream>
using namespace std;
int main() {
	double hoursWorked;
	cout << "Enter number of hours worked: ";
	while (cin >> hoursWorked, hoursWorked != -1) {
		double hoursOfLeave = 2.0 + hoursWorked * 0.1;
		cout << "Accrued leave: " << hoursOfLeave << endl << endl;
		cout << "Enter number of hours worked: ";
	}
}